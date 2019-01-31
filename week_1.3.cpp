#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,val;
printf("Enter value of a,b,c,d,e,f,g :\n");
scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
val=((a+b/c*d-e)*(f-g));
printf("Result is %d",val);
return 0;
}
