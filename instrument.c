#include <pl_instrumentfunctions.h>

#include <stdint.h>


// GCC options finstrument functions

//Funtion trace buffer and indexes
const int32_t FNC_TRACE_SIZE = 8192;
void * FNC_TRACE_BUFFER[FNC_TRACE_SIZE];
int32_t fnc_trace_index = 0;

//Entry funtion
void __cyg_prifile_func_enter(void *this_fn, void *call_site)

{
	FNC_TRACE_BUFFER[fnc_trace_index++] = this_fn;
	if(fnc_trace_index >= FNC_TRACE_SIZE)
	{
		fnc_trace_index = 0;
	}
}

void __cyg_prifile_func_exit (void *this_fn, void *call_site) __attribute__((no_instrument_function))
{
	; //Do nothing
}

void fnc_trace_init() __attribute__((no_instrument_function))

{
	for(int32_t i =0;i<FNC_TRACE_INIT;i++)
	{
		FNC_TRACE_BUFFER[i]=NULL;
	}
}
