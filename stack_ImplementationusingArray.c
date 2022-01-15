#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;
void push(int x)
{
if (top==N-1)
{
    printf("overflow");
}
else
{
    top++;
    stack[top]=x;  
}
}
void pop()
{
    if (top==-1)
    {
        printf("underflow");
    }
    else
    {
    int temp=stack[top];
    top--;
    printf("%d",temp);
    }
}
void peek()
{
     if (top==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("%d",stack[top]);
    }
}
void display()
{
    for (int i = top; i >= 0; i--)
    {
       printf("%d",stack[i]); 
    }
}
int main()
{
    int ch;
    while (ch!=0)
    {
    printf("enter the choice :\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1 :
    push(3);
        break;
        case 2 :
        pop();
        break;
        case 3:
        peek();
        break;
        case 4 :
        display();
        break;
        	default :
        printf("invalid choice :");
						  break;
    }  
      printf("\n");
    }
}