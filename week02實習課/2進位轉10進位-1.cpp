#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",8*(a/1000)+4*(a%1000/100)+2*(a%100/10)+(a%10));
}
