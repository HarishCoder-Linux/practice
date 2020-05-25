#include <stdio.h>

main()
{
int Num;
int Result = 0;

printf("Enter Numer to reverse\n");
scanf("%d",&Num);

while(Num!=0)
{
//Result = Result * 10;
//Result = Result + Num%10;
//Num = Num/10;
//Result = Num%10 + (Result *10);
//Num=Num/10;

Result = Num%10;
Num=Num/10;
printf("Extraction is %d \n",Result);
}

//printf("Reversed number is %d\n", Result);
}
