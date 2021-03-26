#include <stdio.h>
int main()
{
	int n,b;
	scanf("%d",&n);
	b=n;
	int a=0;
	while(n>=1){
		a = n%10+a*10;
		n/=10;

	}
	printf("%d+%d=%d\n",b,a,b+a);
}
