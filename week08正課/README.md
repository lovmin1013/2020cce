計算樹木種類
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][35];
int compare(const void *p1, const void *p2)
{
	return(strcmp((char*)p1,(char*)p2));
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	
	int N=0;
	for(int i=0; ; i++){
		char* now=gets(tree[i]);
		if(now==NULL){
			N=i;
			break;
		}
		if(strcmp(tree[i],"")==0){
			N=i;
			break;
		}
	}
	qsort(tree, N, 35, compare);
	int ans=1;
	for(int i=0; i<N; i++){
		if(strcmp(tree[i],tree[i+1])==0) ans++;
		else{
			printf("%s %.4f\n",tree[i],100*ans/(float)N);
			ans=1;
		}
	}
}	
```
![09160083](https://user-images.githubusercontent.com/79676872/115134276-5851b400-a041-11eb-8cd8-0f03ef7023a9.png)

