#include <stdio.h>
#include <string.h>
char line[1000];

int main()
{
	int T;
	scanf("%d\n\n",&T);///1.Ū���

	for(int t=0; t<T; t++){///Ū��� gets() �@���
		int N=0;
		while(gets(line)!= NULL){///2.Ū���ѷ|��NULL
			if(strcmp(line,"")== 0) break;///�Ŧ�]�n���}
            //printf("%s\n",line);
            N++;
		}
		printf("���X�ʼ�? %d\n",N);
		printf("=====���j�u=====\n");
	}
}
