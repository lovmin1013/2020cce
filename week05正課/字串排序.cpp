#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%s",line[i]);
	}///Ū�i��
	char temp[10];///�Ψӥ洫��temp�r��
	for(int i=0; i<N; i++){
		for(int j=i+1; j<N; j++){
			if(strcmp(line[i],line[j])>0){///�p�G�j�p�Ƨǿ�
				strcpy(temp,line[i]);///temp=a;
				strcpy(line[i],line[j]);///a=b;
				strcpy(line[j],temp);///b=temp;
			}///�N�洫
		}
	}
	for(int i=0; i<N; i++){
		printf("%s\n",line[i]);
	}///�L�X�h
}
