#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);//�N�r��Ū�J�ȩ̀ǩ�J�}�C�A�̫�۰ʥ['\0'
	int i=0;
	while(a[i] != '\0'){
		if(a[i] != '2')
			printf("%c",a[i]);
			i++;
	}
	printf("\n");
}
