#include <stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d",&T);///step1:Input ���X��
	for(int t=0; t<T; t++){
		int N;
		scanf("%d",&N);
		for(int i=0; i<N; i++){///step2:Input��}�Ca[i]
			scanf("%d",&a[i]);
		}
		int ans=0;

		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}
