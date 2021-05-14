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

