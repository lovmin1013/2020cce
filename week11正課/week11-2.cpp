#include <stdio.h>
#include <string.h> ///strcmp()
#include <stdlib.h> ///qsort()
char line[2000][80];
char other[100];///�Ψӧ�᭱�����Ū��
int compare(const void *p1, const void *p2)
{
	char *s1 = (char*)p1;
	char *s2 = (char*)p2;

	int reslut = strcmp(s1,s2);
	if(reslut>0) return 1;
	if(reslut==0) return 0;
	if(reslut<0) return -1;
}
int main()
{
	int n;///step01: Input
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%s",line[i]);
		gets(other);///�Ψӧ�᭱�����Ū��
	}

	qsort(line, n, 80, compare);///�Ƨ�

	printf("%s ",line[0]);///�}�Y
	int ans=1;///�}�Y
	for(int i=0; i<n-1; i++){///step02: Output
		if(strcmp(line[i],line[i+1])==0) ans++; ///�Y�ⵧ�ۦP,�h��0
		else{
			printf("%d\n",ans);///���� (�e�@����)
			printf("%s ",line[i+1]);///�}�Y(�U�@��)
			ans=1;
		}
	}
	printf("%d\n",ans);///����
}
