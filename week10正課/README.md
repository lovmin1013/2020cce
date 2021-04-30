## 計算樹木種類
step01
```C
#include <stdio.h>
#include <string.h>
char line[1000];

int main()
{
	int T;
	scanf("%d\n\n",&T);///1.讀資料

	for(int t=0; t<T; t++){///讀資料 gets() 一整行
		int N=0;
		while(gets(line)!= NULL){///2.讀失敗會變NULL
			if(strcmp(line,"")== 0) break;///空行也要離開
            printf("%s\n",line);
		}
		printf("=====分隔線=====\n");
	}
}
```
![week10-1](https://user-images.githubusercontent.com/79676872/116651465-da34cc00-a9b5-11eb-961a-262fabfd4851.png)
step02
```C
#include <stdio.h>
#include <string.h>
char line[1000];

int main()
{
	int T;
	scanf("%d\n\n",&T);///1.讀資料

	for(int t=0; t<T; t++){///讀資料 gets() 一整行
		int N=0;
		while(gets(line)!= NULL){///2.讀失敗會變NULL
			if(strcmp(line,"")== 0) break;///空行也要離開
            //printf("%s\n",line);
            N++;
		}
		printf("有幾棵數? %d\n",N);
		printf("=====分隔線=====\n");
	}
}
```
![week10-2](https://user-images.githubusercontent.com/79676872/116651469-de60e980-a9b5-11eb-8f41-96532a7da599.png)
step03
```C
#include <stdio.h>
#include <string.h>
char line[1000];
char tree[1000000][35];///4.陣列 tree
int main()
{
	int T;
	scanf("%d\n\n",&T);///1.讀資料

	for(int t=0; t<T; t++){///讀資料 gets() 一整行
		int N=0;
		while(gets(line)!= NULL){///2.讀失敗會變NULL
			if(strcmp(line,"")== 0) break;///空行也要離開

			strcpy(tree[N],line);///4.把樹的名字放進tree
            //printf("%s\n",line);
            N++;///3.統計樹的數目
		}
		printf("有幾棵數? %d\n",N);
		for(int i=0; i<N; i++){
            printf("%s\n",tree[i]);///4.把tree[i]印出來
		}
		printf("=====分隔線=====\n");
	}
}
```
![week10-3](https://user-images.githubusercontent.com/79676872/116651474-e02aad00-a9b5-11eb-8972-e9d56f6bc2e3.png)
step04
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][35];///4.陣列 tree
int compare(const void *p1, const void *p2)
{
    return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);///1.讀資料

	for(int t=0; t<T; t++){///讀資料 gets() 一整行
		int N=0;///需要知道樹有幾棵?
		while(gets(line)!= NULL){///2.讀失敗會變NULL
			if(strcmp(line,"")== 0) break;///空行也要離開

			strcpy(tree[N],line);///4.把樹的名字放進tree
            //printf("%s\n",line);
            N++;///3.統計樹的數目
		}
		printf("有幾棵數? %d\n",N);
		///5.照樹的名字來排序=>4.陣列在哪裡
		qsort(tree, N, 35, compare);
		for(int i=0; i<N; i++){
            printf("%s\n",tree[i]);///4.把tree[i]印出來
		}
		printf("=====分隔線=====\n");
	}
}
```
![week10-4](https://user-images.githubusercontent.com/79676872/116651478-e1f47080-a9b5-11eb-87b5-c59c7b320ac1.png)
step05
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][35];///4.陣列 tree
int compare(const void *p1, const void *p2)
{
    return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);///1.讀資料

	for(int t=0; t<T; t++){///讀資料 gets() 一整行
		int N=0;///需要知道樹有幾棵?
		while(gets(line)!= NULL){///2.讀失敗會變NULL
			if(strcmp(line,"")== 0) break;///空行也要離開

			strcpy(tree[N],line);///4.把樹的名字放進tree
            //printf("%s\n",line);
            N++;///3.統計樹的數目
		}
		//printf("有幾棵數? %d\n",N);
		///5.照樹的名字來排序=>4.陣列在哪裡
		qsort(tree, N, 35, compare);

		int ans=1;
		printf("%s ",tree[0]);
		for(int i=0; i<N; i++){
            if(strcmp(tree[i],tree[i+1])==0) ans++;///相同
            else{///不相同，首尾+新的開始
                printf("%d\n",ans);///收尾
                ans=1;///新的開始
                printf("%s ",tree[i+1]);///新的開始
            }
            //printf("%s\n",tree[i]);///4.把tree[i]印出來
		}
		//printf("=====分隔線=====\n");
	}
}
```
![week10-5](https://user-images.githubusercontent.com/79676872/116651481-e3be3400-a9b5-11eb-930e-9b87d9bffa79.png)
最終結果
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][35];
int compare(const void *p1, const void *p2)
{
	return strcmp((char*) p1,(char*) p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	
	for(int t=0; t<T; t++){
		int N=0;
		while(gets(line)!= NULL){
			if(strcmp(line,"")== 0) break;
			
			strcpy(tree[N],line);
			N++;
		}
		qsort(tree, N, 35, compare);
		
		if(t>0) printf("\n");
		int ans=1;
		printf("%s ",tree[0]);
		for(int i=0; i<N-1; i++){
			if(strcmp(tree[i],tree[i+1])==0) ans++;
			else{
				printf("%.4f\n",100*ans/(float)N);
				ans=1;
				printf("%s ",tree[i+1]);
			}
		}
		printf("%.4f\n",100*ans/(float)N);
	}
}
```
![week10-6](https://user-images.githubusercontent.com/79676872/116651492-e9b41500-a9b5-11eb-96ec-26b518044454.png)
