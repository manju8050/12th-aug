#include<stdio.h>

#define size 7

void display(char arr[],int s )
{
    
        printf("%s\n",arr);
    
}

int main()
{
    char arr1[size] = "string";
    char arr2[size];
    
    char *ptr1 = arr1;
    char *ptr2 = arr2;
 
    while(*ptr1)
    {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
    }
    *ptr2 = '\0';

    printf("arr1 elements after coping:\n");
    display(arr1,size);
    printf("arr2 elements after coping:\n");
    display(arr2,size);

    return 0;
}
//arr1 elements after coping:
string
arr2 elements after coping:
string

