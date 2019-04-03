#include<stdio.h>

int main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c", &ch);
	if(ch>=65 && ch<=90)
	printf("Capital letter");
	else if(ch>=97 && ch<=122)
	printf("Small case letter");
	else if(ch>=48 && ch<=57)
	printf("digit");
	else if(ch>=65 && ch<=90)
	printf("Capital letter");
	else
	printf("Special symbol");
	
	return 0;
}
