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
