#include<stdio.h>

#include"new.h"

int main()
{
    int num1,num2;

    printf("enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter values of num2: ");
    scanf("%d",&num2);
    printf("Before swapping %d %d \n",num1,num2);

    swap(&num1,&num2);
    printf("after swapping %d %d \n",num1,num2);


}

//enter value of num1: 10
Enter values of num2: 20
Before swapping 10 20 
after swapping 20 10 