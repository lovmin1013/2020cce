#include <stdio.h>
int main()
{
	int n,a[100];
	float b,c,t=0,d=0,e=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
		t+=a[i];
	}
	b=t/n;
	for(int i=0; i<n; i++){
		if(a[i]>=b){
			d++;
			e+=a[i];
		}
		c=e/d;
	}
	printf("§¡¼Ð:%.1f\n",b);
	printf("«e¼Ð:%.1f\n",c);
}
