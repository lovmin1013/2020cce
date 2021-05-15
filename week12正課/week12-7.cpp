#include <stdio.h>
int a[10000];
void swap(int i, int j)
{
	int temp= a[i];
	a[i]=a[j];
	a[j]=temp;
}
int main()
{
	int N,M;///step1:N,M 块
	while(scanf("%d %d",&N,&M)==2){
		for(int i=0; i<N; i++){///step2:Input N︽
			scanf("%d",&a[i]);
		}

		for(int i=0; i<N; i++){//step4: 逼
			for(int j=i+1; j<N; j++){
				if(a[i]%M> a[j]%M) swap(i,j);//Rule(1)
				if(a[i]%M==a[j]%M){
					if(a[i]%2==0 && a[j]%2!=0) swap(i,j);//计璶传
					if(a[i]%2!=0 && a[j]%2!=0 && a[i]<a[j]) swap(i,j);//计玡
					if(a[i]%2==0 && a[j]%2==0 && a[i]>a[j]) swap(i,j);//案计玡
				}
			}
		}
        ///step3:Output
		printf("%d %d\n",N,M);
		for(int i=0; i<N; i++){
			printf("%d\n",a[i]);
		}
	}
}

