#include<stdio.h>  
#define N 7 
int stack1[7], stack2[7];  
int top1=-1, top2=-1;   
int count=0;  

void push1(int data)  
{  
 
 if(top1==N-1)  
{  
   printf("\n Stack is overflow...");  
}  
else  
{  
   top1++;   

   stack1[top1]=data; 
}  
}  
  
int pop1()  
{  
  
if(top1==-1)  
{  
   printf("\nStack is empty..");  
}  
else  
{  
   int a=stack1[top1];  
   top1--; 
   return a;   
}  
}   

void push2(int x)  
{  

if(top2==N-1)  
{  
   printf("\nStack is full..");  
}  
else  
{  
    top2++;     
    stack2[top2]=x;    
  
}  
}   

int pop2()  
{  
   int element = stack2[top2];   
   top2--;  
   return element;  
}   

void enqueue(int x)  
{  
   
        while(top1!=-1)  
        {  
            push2(pop1());  
        }  
        push1(x);  
        printf("\nThe data %d is pushed",x);
         while(top2!=-1)  
        {  
            push1(pop2());  
        }  
         
}  

int dequeue()  
{  
    int element = stack1[top1];  
    top1--;  
    return element;  
 }   

void display()  
{  
    printf("\n");  
   for(int i=top1; i>=0;i--)  
  {  
     printf("%d  ", stack1[i]);  
  }  
}  
void main()  
{  
   enqueue(1);  
   enqueue(2);  
   enqueue(3);  
   enqueue(4);  
   enqueue(5);  
   int item1  = dequeue();  
   printf("\nThe deleted element is %d", item1);  
   int item2  = dequeue();  
   printf("\nThe deleted element is %d", item2);  
   printf("\nThe  element  IN QUEUE ");  
   display();  
}  

