#include<stdio.h>
#define N 5
int s1[N],s2[N];
int top1 = -1,top2= -1;
int count=0;

void push1(int data)
{
    if(top1==N-1)
    {
        printf("stack is full\n");
    }
    else
    {
        top1++;
        s1[top1]=data;
    }
}

void enqueue(int x)
{
    push1(x);
    count++;
}
int pop1()
{
    return s1[top1--];
}
int pop2()
{
    return s2[top2--];
}

void push2(int data)
{
    if(top2==N-1)
    {
        printf("stack is full\n");
    }
    else
    {
        top2++;
        s2[top2]=data;
    }
}

void dequeue()
{
    int a,b;
    if(top1==-1&&top2==-1)
    {
        printf("queue is empty");
    }
    else
    {
        for(int i=0;i<count;i++)
        {
            a=pop1();
            push2(a);
        }
        b=pop2();
        printf("deleting element:%d\n",b);
        count--;
        for(int i=0 ;i<count;i++)
        {
            a =pop2();
            push1(a);
        }
    }
}
void display()
{
    printf("printing the elements\n");
    for(int i=0;i<=top1;i++)
    {
        printf("%d\n",s1[i]);
    }
}


void main()
{
    enqueue(5);
    enqueue(2);
    enqueue(1);
    dequeue(); 
    enqueue(7);
    display();
}


//
deleting element:5
printing the elements
2
1
7