#include<stdio.h>


int sum(int a,int b)
{
	int add=a+b;
	return add;
}
int substraction(int c, int d)
{
	int subs=c-d;
	return subs;
}
int multiplication(int e,int f)
{
	int multiply=e*f;
	return multiply;
}
int division(int g,int h)
{
	int divide=g/h;
	return divide;
}
int module(int i, int j)
{
	int module=i%j;
	return module;
}

void main()
{
	int choice,x,y,n;
	do
	{
		printf("Press 1 for + :-\n");	
		printf("Press 2 for - :-\n");
		printf("Press 3 for * :-\n");
		printf("Press 4 for / :-\n");
		printf("Press 4 for % :-\n");
		printf("Press 0 for exit :-\n");
		printf("enter your choice:-");
		scanf("%d",&choice);

switch(choice)
{
	case 1:
		printf("enter the value of x :-");
		scanf("%d",&x);
		printf("enter the value of y :-");
		scanf("%d",&y);
		printf("sumation of your two int is :- %d \n",sum(x,y));
		break;
		
	case 2:
		printf("enter the value of x :-");
		scanf("%d",&x);
		printf("enter the value of y :-");
		scanf("%d",&y);
		printf("substraction of your two int is :-%d \n",substraction(x,y));
		break;
		
	case 3:
		printf("enter the value of x :-");
		scanf("%d",&x);
		printf("enter the value of y :-");
		scanf("%d",&y);
		printf("multiplication of your two int is :-%d \n",multiplication(x,y));
		break;
		
	case 4:
		printf("enter the value of x :-");
		scanf("%d",&x);
		printf("enter the value of y :-");
		scanf("%d",&y);
		printf("division of your two int is :-%d \n",division(x,y));
		break;
		
	case 5:
		printf("enter the value of x :-");
		scanf("%d",&x);
		printf("enter the value of y :-");
		scanf("%d",&y);
		printf("modulous of your two int is :-%d \n",module(x,y));
		break;

	default:
		printf("invalid choice:-\n");
		break;
}
		
	}while(choice!=0);
}

