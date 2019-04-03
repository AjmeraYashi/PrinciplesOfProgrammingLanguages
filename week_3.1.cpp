#include<stdio.h>
int main()
{
	int a,b,n;
	char ch;
	printf("Enter two integers ");
	scanf("%d %d",&a,&b);
	printf("Select Operator\n");
	printf("1. Addition(+)\n2. Subtraction(-)\n3. Multiplication(*)\n4. Division(/)\n5. Modulus(%)\n");
	scanf("%d",&n);
	
		switch(n)
		{
			case 1:
				printf("Addition of %d and %d is %d",a,b,a+b);
				break;
			case 2:
				printf("Subtraction of %d and %d is %d",a,b,a-b);
				break;
			case 3:
				printf("Multiplication of %d and %d is %d",a,b,a*b);
				break;
			case 4:
				printf("Division of %d and %d is %d",a,b,a%b);
				break;			
			case 5:
				printf("Modulus of %d and %d is %d",a,b,a+b);
				break;	
			default:
				printf("Enter a valid choice");
				break;
		}
	
	return 0;
}
