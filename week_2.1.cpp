#include<stdio.h>
using namespace std;
int main()
{
	int n,r,sum=0;
	printf("Enter number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("Sum of digits is %d",sum);
return 0;	
}
