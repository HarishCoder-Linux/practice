#include<stdio.h>
#include<stdlib.h>

void load_filetobuffer(char *fptr,float* buff,int size);
int main()
{
	char file_ptr[100] = "/home/uids8702/Desktop/pra/LutError_gnuPlot/lutError.y";
	char *plotname = "LutErrorGraph";
	int Size = 128*256;
	float Buffer[Size];
        float temp;
	load_filetobuffer(file_ptr,Buffer,Size);

	for(unsigned int i=0;i<Size;i++)
	{
//		printf("%f , ",Buffer[i]);
	}

	FILE* gnuplotPipe = popen("gnuplot -persistent","w");
	fprintf(gnuplotPipe,"plot '-' \n");
	//fill it with data
	for(unsigned int i=0;i<Size;i++)
	{
//                if(Buffer[i] <= 0.8f)
                {
                 //   temp = 0.0f;
		fprintf(gnuplotPipe,"%lf %zu\n",Buffer[i],i);
                }
	}
	fprintf(gnuplotPipe, "e");
	// refresh can probably be omitted
//	fprintf(gnuplotPipe, "refresh\n");

}

void load_filetobuffer(char *fptr,float* buff,int size)
{
	if(fptr)
	{
		FILE* fp;
		fp = fopen(fptr,"r");

		if(NULL == fp)
		{
			printf("Error loding image file %s. \n",fptr);
			exit(0);
		}

		fread(buff,sizeof(float),size,fp);
		fclose(fp);
	}
}
