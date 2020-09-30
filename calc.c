#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int num1,num2;
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
		printf("  _   _   _   _   _   _   _     _   _   _   _   _\n / \ / \ / \ / \ / \ / \ / \   / \ / \ / \ / \ / \ \n( E | n | t | e | r | e | d ) ( W | r | o | n | g )\n \_/ \_/ \_/ \_/ \_/ \_/ \_/   \_/ \_/ \_/ \_/ \_/ \n");
		goto start;
		
		return 0;
	}
	add:
	    system("cls");
		printf("Enter Two Integers\n");
		printf("Enter First Number\n");
		scanf("%d",&num1);
		printf("Enter Second Number\n");
		scanf("%d",&num2);
		printf("The Result is %d",num1+num2);
		return 0;
	sub:
	    system("cls");
		printf("Enter Two Integers\n");
		printf("Enter First Number\n");
		scanf("%d",&num1);
		printf("Enter Second Number\n");
		scanf("%d",&num2);
		printf("The Result is %d",num1+num2);
		return 0;
	mult:
	    system("cls");
		printf("Enter Two Integers\n");
		printf("Enter First Number\n");
		scanf("%d",&num1);
		printf("Enter Second Number\n");
		scanf("%d",&num2);
		printf("The Result is %d",num1+num2);
		return 0;
	div:
	    system("cls");
		printf("Enter Two Integers\n");
		printf("Enter First Number\n");
		scanf("%d",&num1);
		printf("Enter Second Number\n");
		scanf("%d",&num2);
		printf("The Result is %d",num1+num2);
		return 0;
}
