```C
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,1,9,2,6,10};
int compare(const void *p1, const void *p2)
{
    int d1 = *(char*)p1;
    int d2 = *(char*)p2;
    if(d1 > d2) return 1;
    if(d1 == d2) return 0;
    if(d1 < d2) return -1;
}
int main()
{
    qsort(a, 10, sizeof(int), compare);

    for(int i=0; i<10; i++){
        printf("%d ",a[i]);
    }
}
```
![week11-1](https://user-images.githubusercontent.com/79676872/117411214-ee447480-af45-11eb-9ac3-da5d5ea928ca.png)
```C
#include <stdio.h>
#include <string.h> ///strcmp()
#include <stdlib.h> ///qsort()
char line[2000][80];
char other[100];///用來把後面的資料讀調
int compare(const void *p1, const void *p2)
{
	char *s1 = (char*)p1;
	char *s2 = (char*)p2;

	int reslut = strcmp(s1,s2);
	if(reslut>0) return 1;
	if(reslut==0) return 0;
	if(reslut<0) return -1;
}
int main()
{
	int n;///step01: Input
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%s",line[i]);
		gets(other);///用來把後面的資料讀調
	}

	qsort(line, n, 80, compare);///排序

	printf("%s ",line[0]);///開頭
	int ans=1;///開頭
	for(int i=0; i<n-1; i++){///step02: Output
		if(strcmp(line[i],line[i+1])==0) ans++; ///若兩筆相同,則為0
		else{
			printf("%d\n",ans);///收尾 (前一筆的)
			printf("%s ",line[i+1]);///開頭(下一筆)
			ans=1;
		}
	}
	printf("%d\n",ans);///收尾
}
```
![week11-2](https://user-images.githubusercontent.com/79676872/117411370-1338e780-af46-11eb-9cb0-79f6fc137571.png)
```C
#include <stdio.h>
struct data{
    int ans;///有幾個?
    char c;///字母
};
struct data box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c,box.ans);
}
```
![week11-3](https://user-images.githubusercontent.com/79676872/117411434-21870380-af46-11eb-943f-9a442c279e46.png)
```C
#include <stdio.h>
typedef struct data{
    int ans;///有幾個?
    char c;///字母
}DATA;
///struct data box;
DATA box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c,box.ans);
}
```
![week11-4](https://user-images.githubusercontent.com/79676872/117411499-3368a680-af46-11eb-9015-50a8f080f620.png)
```C
#include <stdio.h>
char line[2000];
int main()
{
    for(int t=0; gets(line); t++){
        if(t>0) printf("\n");
        printf("blahblahblah\n");
        printf("blahblahblah\n");
        printf("blahblahblah\n");
    }
}
```
![week11-5](https://user-images.githubusercontent.com/79676872/117411545-42e7ef80-af46-11eb-9754-72c00b34ab32.png)
```C
  
#include <stdio.h>
char line[2000];
int ans[256];
int main()
{
    for(int t=0; gets(line);t++){///讀資料
        for(int i=0; i<256; i++) ans[i]=0;

        for(int i=0; line[i]!=0; i++){
            char c = line[i];
            ans[c]++;
        }
        if(t>0) printf("\n");
        for(int i=0; i<256; i++){
            if(ans[i]>0) printf("%d %d\n",i,ans[i]);
        }
    }
}
```
![week11-6](https://user-images.githubusercontent.com/79676872/117411591-509d7500-af46-11eb-9354-34e725781fb8.png)
