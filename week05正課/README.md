5-1 字串輸入
```C
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};
    printf("%s\n",line);
    printf("%s\n",line2);

    char line3[]="majority";
    printf("%s\n",line3);
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("line4:==%s==\n",line4);
}
```
![week05-2](https://user-images.githubusercontent.com/79676872/112566851-b57b9080-8e1a-11eb-8d29-0955d679991c.png)
5-2
```C
#include <stdio.h>
int main()
{///5個字串,每個字串有10格

    char line[5][10]={"decline","proper","majority","bullet","shop"};
    for(int i=0; i<5; i++){
        printf("%s\n",line[i]);
    }
}
```
![week05-3](https://user-images.githubusercontent.com/79676872/112571034-270b0d00-8e22-11eb-9d01-d4b0aa30e77e.png)
5-3
```C
#include <stdio.h>
#include <string.h>
int main()
{
    char line[10]="majority";
    char line2[10]="ask";
    if(strcmp(line,line2)>0){
        printf("右邊大\n");
    }
    else printf("左邊大\n");
}
```
![week05-5](https://user-images.githubusercontent.com/79676872/112572027-3ee39080-8e24-11eb-8d6a-ce57106b0e80.png)
字串排序
```C
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%s",line[i]);
	}///讀進來
	char temp[10];///用來交換的temp字串
	for(int i=0; i<N; i++){
		for(int j=i+1; j<N; j++){
			if(strcmp(line[i],line[j])>0){///如果大小排序錯
				strcpy(temp,line[i]);///temp=a;
				strcpy(line[i],line[j]);///a=b;
				strcpy(line[j],temp);///b=temp;
			}///就交換
		}
	}
	for(int i=0; i<N; i++){
		printf("%s\n",line[i]);
	}///印出去
}
```
![week05-6](https://user-images.githubusercontent.com/79676872/112572202-a7cb0880-8e24-11eb-8034-a5ed1b07b677.png)

