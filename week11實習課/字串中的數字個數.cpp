#include <stdio.h>
int main()
{
	int ans=0;
	char c[90];
	scanf("%s",&c);
	for(int i=0; c[i]!='\0'; i++){
		if(c[i]=='1'||c[i]=='2'||c[i]=='3'||c[i]=='4'||c[i]=='5'||c[i]=='6'||c[i]=='7'||c[i]=='8'||c[i]=='9'||c[i]=='0') ans++;
	}
	printf("%d",ans);
}
