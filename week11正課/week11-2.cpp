#include <stdio.h>
#include <string.h> ///strcmp()
#include <stdlib.h> ///qsort()
char line[2000][80];
char other[100];///用來把後面的資料讀調
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
		gets(other);///用來把後面的資料讀調
	}

	qsort(line, n, 80, compare);///排序

	printf("%s ",line[0]);///開頭
	int ans=1;///開頭
	for(int i=0; i<n-1; i++){///step02: Output
		if(strcmp(line[i],line[i+1])==0) ans++; ///若兩筆相同,則為0
		else{
			printf("%d\n",ans);///收尾 (前一筆的)
			printf("%s ",line[i+1]);///開頭(下一筆)
			ans=1;
		}
	}
	printf("%d\n",ans);///收尾
}
