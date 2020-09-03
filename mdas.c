#include <stdio.h>
int main()
{
int a,b,sum,prod,diff,quo;
printf("Enter Two Integers:\n");
scanf("\n%d \n%d",&a,&b);
sum=a+b;
diff=a-b;
prod=a*b;
quo=a/b;
printf("Sum is: %d\n",sum);
printf("Difference is: %d\n",diff);
printf("Product is: %d\n",prod);
printf("Quotient is %d\n",quo);
return 0;
}

