進階題-除惡務盡 : 輸入一個字串，將所有字元2去除後輸出。  
```C
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
```
進階題-擲骰統計 : 輸入一字串為擲骰的結果，統計1到6點出現的狀況。  
```C
#include <stdio.h>
int main()
{
	char count[7]={0};
	char a[100];
	scanf("%s",&a);
	int i=0; 
	while(a[i]!='\0'){
		count [a[i]-'0']++;//a[i]為字元
		i++;
	}
	for(int i=1; i<=6; i++){
		printf("%d:%d\n",i,count[i]);
	}
}
```
