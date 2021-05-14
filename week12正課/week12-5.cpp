#include <stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d",&T);///step1:Input 有幾筆
	for(int t=0; t<T; t++){
		int N;
		scanf("%d",&N);
		for(int i=0; i<N; i++){///step2:Input到陣列a[i]
			scanf("%d",&a[i]);
		}

		int ans=0;

		for(int k=0; k<N-1; k++){///泡泡排序
			for(int i=0; i<N-1; i++){
				if(a[i]>a[i+1]){
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;///又做了一次交換
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}
