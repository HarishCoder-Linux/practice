#include<stdio.h>

int main()
{

float A=1.234567;
printf("A= %f\n", A); //A=1.234567
printf("A= %1.1f\n", A); //A=1.2
printf("A= %1.2f\n", A); //A=1.23
printf("A= %3.3f\n", A); //A=1.234
printf("A= %4.5f\n", A); //A=1.23456
printf("A= %09.3f\n", A); //A=00001.234
printf("A= %-09.3f\n", A); //A=1.234
printf("A= %9.3f\n", A); //A= 1.234

}
