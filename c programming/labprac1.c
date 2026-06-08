//relational operator
#include<stdio.h>
int main()
{
	int num1;
	int num2;
	int num3;
	int num4;
	
	printf("enter num1");
	scanf("%d",&num1);
	printf("enter num2");
	scanf("%d",&num2);
	printf("enter num3");
	scanf("%d,",&num3);
	printf("enter num4");
	scanf("%d",&num4);
	
	printf("%d> %d=%d",num1>num2>num3>num4);
	printf("\n%d < %d=%d",num1<num2<num3<num4);
	printf("\n%d == %d=%d",num1==num2==num3==num4);
	printf("\n%d <=%d=%d",num1<=num2<=num3<=num4);
	printf("\n%d >= %d=%d",num1>=num2>=num3>=num4);
	printf("\n%d != %d=%d",num1!=num2!=num3!=num4);
	
	
}
