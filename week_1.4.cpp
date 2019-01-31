#include<stdio.h>
int main()
{
int n,m,r,sum=0;
printf("Enter a three digit number: ");
scanf("%d",&n);
if(n>99&&n<1000)
{

while(n)
{
	r=n%10;
	sum=sum+r;
	n=n/10;
}
printf("sum of digits is %d",sum);
}
else
{

printf("Not a three digit number");
}

return 0;
}
