#include <stdio.h>
#include <string.h>
char line[1000];
char tree[1000000][35];///4.�}�C tree
int main()
{
	int T;
	scanf("%d\n\n",&T);///1.Ū���

	for(int t=0; t<T; t++){///Ū��� gets() �@���
		int N=0;
		while(gets(line)!= NULL){///2.Ū���ѷ|��NULL
			if(strcmp(line,"")== 0) break;///�Ŧ�]�n���}

			strcpy(tree[N],line);///4.��𪺦W�r��itree
            //printf("%s\n",line);
            N++;///3.�έp�𪺼ƥ�
		}
		printf("���X�ʼ�? %d\n",N);
		for(int i=0; i<N; i++){
            printf("%s\n",tree[i]);///4.��tree[i]�L�X��
		}
		printf("=====���j�u=====\n");
	}
}
