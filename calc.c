#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int num1,num2;
	float numdiv1,numdiv2;
	char oper[10];
	start:
	printf("Welcome to Calculator\n1. Addition\n2. Substraction\n3. Mulitiplication\n4. Division");
	scanf("%s",oper);
	if (strcmp(oper, "1")== 0)
	{
		goto add;
	}
	if (strcmp(oper, "2") == 0)
	{
		goto sub;
	}
	if (strcmp(oper, "3") == 0)
	{
		goto mult;
	}
	if (strcmp(oper, "4") == 0)
	{
		goto div;
	}
	else
	{
		system("cls");
		goto start;

		return 0;
	}
	add:
	    system("cls");
	    printf("Addition\n");
		printf("Enter Two Integers\n");
		printf("Enter First Number\n");
		scanf("%d",&num1);
		printf("Enter Second Number\n");
		scanf("%d",&num2);
		printf("The Result is %d",num1+num2);
		return 0;
	sub:
	    system("cls");
	    printf("Subtraction\n");
		printf("Enter Two Integers\n");
		printf("Enter First Number\n");
		scanf("%d",&num1);
		printf("Enter Second Number\n");
		scanf("%d",&num2);
		printf("The Result is %d",num1-num2);
		return 0;
	mult:
	    system("cls");
	    printf("Multiplication\n");
		printf("Enter Two Integers\n");
		printf("Enter First Number\n");
		scanf("%d",&num1);
		printf("Enter Second Number\n");
		scanf("%d",&num2);
		printf("The Result is %d",num1*num2);
		return 0;
	div:
	    system("cls");
	    printf("Division\n");
		printf("Enter Two Integers\n");
		printf("Enter First Number\n");
		scanf("%f",&numdiv1);
		printf("Enter Second Number\n");
		scanf("%f",&numdiv2);
		printf("The Result is %.2f",numdiv1/numdiv2);
		return 0;
}
