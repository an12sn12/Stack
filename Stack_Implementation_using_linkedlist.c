#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;
};
struct Node*top=0;
void Push(int x)
{
struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->data=x;
newnode->next=top;
top=newnode;
}
void pop()
{
    if (top==0)
    {
       printf("underflow"); 
    }
    struct Node*temp=top;
    top=temp->next;
    temp->next=0;
    free(temp);
}
void peek()
{
     if (top==0)
    {
       printf("underflow"); 
    }
    else
    {
    struct Node*temp=top;
    printf("%d",temp->data);
     }
}
void Display()
{
    struct Node*temp=top;
    while (temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
     //printf("%d",temp->data);
}
int main()
{
    int ch;
      while (ch!=0)
         {
    	printf("enter choice:1-push,2-pop,3-peek,4-display :\n");
 		scanf("%d",&ch);
             switch (ch)
             {
case 1 :
Push(4);
Push(5);
Push(6);
break;
case 2 :
 pop();
 break;
 case 3:
 peek();
 break;
 case 4 :
 Display();
break;
             default:
             printf("invalid choice :");
                 break;
             }
              printf("\n");
         }
}