#include <stdio.h>
int a[10000];
int main()
{
	int N,M;///step1:N,M ¿é¤J
	while(scanf("%d %d",&N,&M)==2){
		for(int i=0; i<N; i++){///step2:Input N¦æ
			scanf("%d",&a[i]);
		}

        ///step3:Output
		printf("%d %d\n",N,M);
		for(int i=0; i<N; i++){
			printf("%d\n",a[i]);
		}
	}
}
