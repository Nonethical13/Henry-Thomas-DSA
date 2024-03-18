#include<stdio.h>
#include<math.h>
#define max 5
int stack_list[max],top=-1;
void push(int m)
{
	if(top==max-1)
		printf("\n Stack overflow");
	else
	{
		top++;
		stack_list[top]=m;
	}
}
int pop()
{ 
	if(top==-1)
	{
		printf("\n Stack underflow");
		return -1;
	}
	else
		return stack_list[top--];
}
void display()
{
	int i;
	if(top==-1)
		printf("\n Stack is empty");
	else
	{	
		printf("\n The elements are\n");
		for(i=top;i>=0;i--)
			printf("%d\n",stack_list[i]);
	}
}
void palindrome()
{
	int n,num,rem,i;
	printf("\n Enter n");
	scanf("%d",&n);
	top=-1;
	num=n;
	while(num!=0)
	{
		rem=num%10;
		push(rem);
		num=num/10;
	}
	num=0;
	for(i=0;top!=-1;i++)
		num=pop()*pow(10,i)+num;
	
	if(n==num)
		printf("\n It is a palindrome");
	else
		printf("\n It is not a palindrome");
}
int main()
{
	int c,m;
	while(1)
	{	printf("\n Enter 1-push\n2-pop\n3-display\n4-palindrome");
		scanf("%d",&c);
		switch(c)
		{
			case 1:	printf("\n Enter an element\t");
				scanf("%d",&m);
				push(m);
				break;
			case 2:m=pop();
				if(m!=-1)
					 printf("\n The popped elementis %d",m);
				break;
			case 3:	display();
					break;
			case 4:	palindrome();
					break;
			default:return 0;
		}
	}
}


