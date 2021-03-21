#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	int i=0;
	while(i<(strlen(a)-1)){
		printf("%c   ",a[i]);
		i++;
	}
	printf("%c",a[i]);
}

