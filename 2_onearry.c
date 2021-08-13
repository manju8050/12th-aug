#include<stdio.h>

#define size 5

void display(int arr[],int s )
{
    for(int i=0;i<s;i++)
    {
        printf("%d\n",arr[i]);
    }
}

int main()
{
    int arr1[size] = {10,20,30,40,50};
    int arr2[size];
    
    int *ptr1 = arr1;
    int *ptr2 = arr2;
 
    for(int i=0;i<size;i++)
    {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
    }

    printf("arr1 elements after coping:\n");
    display(arr1,size);
    printf("arr2 elements after coping:\n");
    display(arr2,size);

    return 0;
}

//
arr1 elements after coping:
10
20
30
40
50
arr2 elements after coping:
10
20
30
40
50
