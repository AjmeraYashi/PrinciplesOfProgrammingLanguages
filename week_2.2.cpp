#include<stdio.h>
using namespace std;
int main()
{
	int n,a=0,b=1,x,i;
	printf("Enter number of terms in series : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("  %d",a);
		x=a+b;
		a=b;
		b=x;
	}
	
return 0;	
}
