#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][35];///4.�}�C tree
int compare(const void *p1, const void *p2)
{
    return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);///1.Ū���

	for(int t=0; t<T; t++){///Ū��� gets() �@���
		int N=0;///�ݭn���D�𦳴X��?
		while(gets(line)!= NULL){///2.Ū���ѷ|��NULL
			if(strcmp(line,"")== 0) break;///�Ŧ�]�n���}

			strcpy(tree[N],line);///4.��𪺦W�r��itree
            //printf("%s\n",line);
            N++;///3.�έp�𪺼ƥ�
		}
		//printf("���X�ʼ�? %d\n",N);
		///5.�Ӿ𪺦W�r�ӱƧ�=>4.�}�C�b����
		qsort(tree, N, 35, compare);

		int ans=1;
		printf("%s ",tree[0]);
		for(int i=0; i<N; i++){
            if(strcmp(tree[i],tree[i+1])==0) ans++;///�ۦP
            else{///���ۦP�A����+�s���}�l
                printf("%d\n",ans);///����
                ans=1;///�s���}�l
                printf("%s ",tree[i+1]);///�s���}�l
            }
            //printf("%s\n",tree[i]);///4.��tree[i]�L�X��
		}
		//printf("=====���j�u=====\n");
	}
}
