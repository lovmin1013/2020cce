#include <stdio.h>
int a[10];
int main()
{
	int N;
	int ans=0;
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d",&a[i]);
		ans+=a[i];
	}
	printf("%d",ans);
	printf("\n");
}
