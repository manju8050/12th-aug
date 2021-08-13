#include<stdio.h>
int main()
{
    int arr[5]={10,12,15,19,20};
    int *ptr =arr;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(ptr[i]<ptr[j])
            {
                int temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
            

        }
        
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",ptr[i]);
    }
    printf("\nsecond largest is %d",ptr[1]);
}

//
20      19      15      12      10
second largest is 19
