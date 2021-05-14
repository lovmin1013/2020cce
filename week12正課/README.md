UVA10062 頻率(簡化)不需排序
```C
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0; gets(line); t++){
		int ans[256]={};
		
		for(int i=0; line[i]!=0; i++){
			char c= line[i];
			ans[c]++;
		}
		
		if(t>0) printf("\n");
		for(int i=0; i<256; i++){
			if(ans[i]>0) printf("%d %d\n",i,ans[i]);
		}
	}
}
```
![week12-1](https://user-images.githubusercontent.com/79676872/118208633-b4212880-b499-11eb-8a94-7b9cdaaebc63.png)
簡單排序
```C
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0; gets(line); t++){ ///step1:Input
		int ans[256]={};///{0,0,0,0,0,0,0, 0, 0....}
		char  c[256]={};///{0,1,2,3...,65,66,67...}
		for(int i=0; i<256; i++) c[i]=i;

		for(int i=0; line[i]!=0; i++){
			char c= line[i];
			ans[c]++;
		}///step3: 字串的for迴圈

		for(int i=0; i<256; i++){///左手 i  ///排序
			for(int j=i+1; j<256; j++){///右手j
				if(ans[i]>ans[j]){
					int temp=ans[i];///交換ans[]
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];///交換字母
					c[i]=c[j];
					c[j]=t;
				}
			}
		}
		if(t>0) printf("\n");///車廂 前面掛空白行
		for(int i=0; i<256; i++){///step2:Output
			if(ans[i]>0) printf("%d %d\n",c[i],ans[i]);
		}
	}
}
```
![week12-2](https://user-images.githubusercontent.com/79676872/118211518-d4071b00-b49e-11eb-96b5-e46086e56f87.png)
最終結果
```C
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0; gets(line); t++){
		int ans[256]={};
		char  c[256]={};
		for(int i=0; i<256; i++) c[i]=i;

		for(int i=0; line[i]!=0; i++){
			char c= line[i];
			ans[c]++;
		}

		for(int i=0; i<256; i++){
			for(int j=i+1; j<256; j++){
				if(ans[i]>ans[j]){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];
					c[i]=c[j];
					c[j]=t;
				}
				if(ans[i]==ans[j] && c[i]<c[j]){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];
					c[i]=c[j];
					c[j]=t;
				}
			}
		}
		if(t>0) printf("\n");
		for(int i=0; i<256; i++){
			if(ans[i]>0) printf("%d %d\n",c[i],ans[i]);
		}
	}
}
```
![week12-3](https://user-images.githubusercontent.com/79676872/118211684-13356c00-b49f-11eb-8ac4-ef2efa1dea03.png)

