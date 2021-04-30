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
