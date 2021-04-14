#include <stdio.h>
int main()
{
	int i;
	int a[11];
	for(i=0; i<11; i++){
		scanf("%d",&a[i]);
		if(a[i]==0) break;
	}
	int x;
	scanf("%d",&x);//找x在數列中出現的次數
	int n=i;//紀錄陣列個數
	int count=0;
	for(i=0; i<n; i++){
		if(a[i]==x) count++;
	}
	printf("%d\n",count);
}
