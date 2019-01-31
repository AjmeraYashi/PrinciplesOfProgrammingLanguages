#include<stdio.h>
int main()
{
int x,y,val;
printf("Enter value of x and y: ");
scanf("%d%d",&x,&y);
val=x-(~y)-1;
printf("Sum is %d",val);
return 0;
}
