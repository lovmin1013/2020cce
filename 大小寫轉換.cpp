#include <stdio.h>
int main()
{
	char c[10];
	scanf("%s",&c);
	for(int i=0; i<10; i++){
		scanf("%s",&c[i]);
		if(c[i]>='A' && c[i]<='Z'){
			c[i]+=32;
		}
		else if(c[i]>='a'&&c[i]<='z'){
			c[i]-=32;
		}
	}
	printf("%s",c);
	printf("\n");
}

