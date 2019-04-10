#include<stdio.h>
#include<math.h>
main()
{
int i,x,k,fact=1;
float  sum=1;
printf("enter value of x");
scanf("%d",&x);
printf("sum of series is :\n");
sum=1;
for(i=1;i<=5;i++)
{
fact=1;
for(k=1;k<=2*i;k++)
fact*=k;
sum+=pow(-1,i)*pow(x,2*i)/fact;
}
printf("%f",sum);
}
