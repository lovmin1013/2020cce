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
