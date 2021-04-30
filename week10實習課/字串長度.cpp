#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	scanf("%s%s",&a,&b);
	int A=strlen(a),B=strlen(b);
	if(A>B) printf("1");
	else if(A<B) printf("-1");
	else printf("%d",strcmp(a,b));//若兩字串長度相同，用strcmp比較數字大小
}
