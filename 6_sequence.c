#include<stdio.h>
int main()
{
    int a,b,res=0;
    printf("enter the sequence\n");
    scanf("%d",&a);

    b = a%10;
    //printf("%d\n",b);
    
    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=i;j++)
        {
            res=res*10+i;
        }
    }

    if(res==a)
    {
        printf("sequence is valid\n");
    }
    else
    {
        printf("sequence is not valid\n");
    }
    
}

//
enter the sequence
1223334444
sequence is valid

//
enter the sequence
12333
sequence is not valid