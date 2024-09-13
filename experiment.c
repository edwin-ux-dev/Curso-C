#include <stdio.h>

int main(){

int num = 0;
printf("%d\n", num);


num += 1;
int num1;
num1 = num;

printf("%d\n", num);

num += 2;
int num2;
num2 = num;

printf("%d\n", num);



num++;
int num3;
num3 = num;

printf("num = %d\n", num);

int suma = num1+num2+num3;  
printf("suma : %d\n", suma);


for (int i = 0; num > 0; i++)
{
    printf("num antes de restar = %d\n", num);
    num -= 1;
    printf("num = %d\n", num);
}

//while (num > 0)
//{
  //  num -= 1;
   // printf("num = %d\n", num);
//}






return (0);
}