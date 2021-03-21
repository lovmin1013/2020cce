#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);//將字串讀入並依序放入陣列，最後自動加'\0'
	int i=0;
	while(a[i] != '\0'){
		if(a[i] != '2')
			printf("%c",a[i]);
			i++;
	}
	printf("\n");
}
