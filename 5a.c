#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int stk[25],tos=-1;
void push(int item)
{
 stk[++tos]=item;
}
int pop()
{
 return (stk[tos--]);
}
int main()
{
 char post[25],sym;
 int op1,op2,i;
printf("Enter the postfix expression:\n");
 scanf("%s",post);
 for(i=0;i<strlen(post);i++)
 {
  sym=post[i];
  switch(sym)
  {
   case '+':op2=pop();
            op1=pop();
            push(op1+op2);
            break;
   case '-':op2=pop();
            op1=pop();
            push(op1-op2);
            break;
   case '*':op2=pop();
            op1=pop();
            push(op1*op2);
            break;
   case '/':op2=pop();
            op1=pop();
            push(op1/op2);
            break;
default:push(sym-'0');
           break;
  }
 }
printf("The result if %d\n",pop());
}

