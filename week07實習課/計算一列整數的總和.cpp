#include <stdio.h>
int main()
{
	int a;
	int sum=0;
	while(a!=999)//999¬O²×¤î±ø¥ó
	{
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&a); //a=999
		sum += a;
	}
	printf("The total is: %d",sum-999);
}
