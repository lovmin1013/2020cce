#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=1500) printf("100");
	else if(n>1500) printf("%d",100+((n-1500+249)/250)*5);
}
