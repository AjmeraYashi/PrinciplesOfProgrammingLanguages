#include<stdio.h>
int main()
{
int x,y,val1,val2;
printf("Enter value of x and y :\n");
scanf("%d%d",&x,&y);
val1=(x+y)/(x-y);
val2=(x+y)*(x-y);
printf("Result: %d  %d",val1,val2);
return 0;
}
