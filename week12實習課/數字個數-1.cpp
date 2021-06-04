#include <stdio.h>
int main()
{
	int a[20],ans=0;
	for(int i=0; i<10; i++){
		scanf("%d",&a[i]);
		if(a[i]==0)
		break;
		ans++;
	}
	printf("%d",ans);
}
