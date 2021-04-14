#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+10*%d+5*%d+1*%d",n,n/50,(n%50)/10,(n%10)/5,(n%5)/1);
}
