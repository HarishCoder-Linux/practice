#include<stdio.h>

void fun()
{
printf("test label 1 Fun \n");
}

void fun2(int val)
{
printf("test label %d Fun \n",val);
}

int main()
{

int ret = 0;

label1:
printf("label 1\n ");
goto label4;
printf("label 1 after goto\n ");
fun();

label2:
printf("label 2\n ");
fun2(2);
printf("label 2 end test\n");


label3:
printf("label 3\n ");
fun2(3);
printf("label 3 end test\n");


label4:
printf("label 4\n ");
fun2(4);
printf("label 4 end test\n");


label5:
printf("label 5\n ");
fun2(5);
printf("label 5 end test\n");

}



