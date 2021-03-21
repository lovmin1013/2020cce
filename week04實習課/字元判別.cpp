#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);

	if('A'<=a && a<='Z')
		printf("U");

	else if('a'<=a && a<='z')
		printf("L");

	else if('0'<=a && a<='9')
		printf("D");

	else printf("O");
}
