qsort 函式 字串排序
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
char temp[10];
int compare (const void *p1, const void *p2)
{
    char *s1 = (char*) p1;
    char *s2 = (char*) p2;
    return strcmp(s1,s2);
}
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%s",line[i]);
	}

	qsort(line, N, 10, compare);

	for(int i=0; i<N; i++){
		printf("%s\n",line[i]);
	}
}
```
![week07-2](https://user-images.githubusercontent.com/79676872/114122811-a40aac00-9923-11eb-9307-6983f7be14b7.png)
計算國名次數
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[2000][75];
char other[100];
int compare(const void *p1, const void *p2)
{
	char *s1 = (char*) p1;
	char *s2 = (char*) p2;
	return strcmp(s1,s2);
}
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0; i<n; i++){
		scanf("%s",line[i]);
		gets(other);
	}
	qsort(line, n, 75, compare);
	
	int ans=1;
	for(int i=0; i<n; i++){
		if(strcmp(line[i],line[i+1])==0) ans++;
		else{
			printf("%s %d\n",line[i],ans);
			ans=1;
		}
	}
}
```
```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[2000][75];
char other[100];
int compare(const void *p1, const void *p2)
{
	char *s1 = (char*) p1;
	char *s2 = (char*) p2;
	return strcmp(s1,s2);
}
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0; i<n; i++){
		scanf("%s",line[i]);
		gets(other);
	}
	qsort(line, n, 75, compare);
	
	int ans=1;
	printf("%s ",line[0]);
	for(int i=0; i<n-1; i++){
		if(strcmp(line[i],line[i+1])!=0){
			printf("%d\n",ans);
			printf("%s ",line[i+1]);
			ans=1;
		}
		else ans++;
	}
	printf("%d\n",ans);
}
```
![week07-3](https://user-images.githubusercontent.com/79676872/115133726-e5ded500-a03c-11eb-8887-17b6f62d0642.png)
