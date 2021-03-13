#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c && b>c) printf("%d\n",a-c);
	else if(a>b && a>c && c>b) printf("%d\n",a-b);
	else if(b>a && b>c && a>c) printf("%d\n",b-c);
	else if(b>a && b>c && c>a) printf("%d\n",b-a);
	else if(c>a && c>a && a>b) printf("%d\n",c-b);
	else if(c>a && c>a && b>a) printf("%d\n",c-a);
}
