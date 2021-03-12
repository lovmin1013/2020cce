#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=1; i<=n-1; i++){
		ans += i*(i+1);
	}
	printf("%d\n",ans);
}
