#include<stdio.h>  
 int main()    
{    
int n,r,sum=0,m;    
printf("enter the number :");    
scanf("%d",&n);    
m=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(m==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}   
