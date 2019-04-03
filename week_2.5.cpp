#include<stdio.h>
int main()
{
	int cp,sp,p,l,pp,lp;
	printf("Enter Cost Price : ");
	scanf("%d",&cp);
	
	printf("Enter Selling Price : ");
	scanf("%d",&sp);
	
	if(sp>cp)
	{
	p=sp-cp;
	pp=(p/cp)*100;
	printf("seller has made a profit of %d Rupees\n",p);
	printf("Profit percentage : %d",pp);
	}
	
	if(sp<cp)
	{
	l=cp-sp;
	lp=(l/cp)*100;
	printf("seller has made a loss of %d Rupees \n",l);
	printf("Loss percentage : %d",lp);
	}
	
	return 0;
}
