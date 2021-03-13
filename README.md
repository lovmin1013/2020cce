# 2020cce
程式設計(二)

## 第三週實習課
進階題-計算陣列的平方值 : 輸入一個整數N，再依序輸入N個整數置於陣列中，   
計算各元素的平方值，再列出此算出平方值後的陣列。    
數字範圍：整數N範圍 1 – 10；其他整數1 – 100 
```C
#include <stdio.h>
int main()
{
	int N;
	int a[10];
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");
}
```
進階題-大小寫轉換 : 讀入一個字串(至多10個字元)，     
將字串中的大小寫英文字母相互轉換(大寫轉為小寫，小寫轉為大寫)後輸出。     
```C
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
```
基礎題-計算幾週與幾天 : 一週有7 天，讀入天數，計算該天數是幾週又幾天。   
數字範圍：整數1 – 365  
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d %d\n",n/7,n%7);
}
```
基礎題-計程車資計算 : 輸入里程公尺數，輸出應付的車資。  
計程車資計算方式為：起跳100 元(2000公尺)，續跳5元(每500公尺)。   
數字範圍：整數1 – 100000。  
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=2000) printf("100\n");
	else printf("%d\n",100+(n-2000+499)/500*5);
}
```
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=2000) printf("100\n");
	else if((n-2000)%500>0) printf("%d\n",100+(((n-2000)/500)+1)*5);
	else printf("%d\n",100+(n-2000)/500*5);
}
```
基礎題-兩數間可被5整除的整數 : 輸入兩個整數，找出兩數之間所有可以被5整除的整數。   
數字範圍：2個整數1 – 10000  
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(b>a){
		for(int i=a; i<=b; i++){
			if(i%5==0) printf("%d\n",i);
		}
	}
	else 
		for(int i=b; i<=a; i++){
			if(i%5==0) printf("%d\n",i);
		}
}
```
基礎題-整數間最大距離 : 輸入3個相異整數，找出整數間最大的距離。   
數字範圍：整數1 – 10000  
```C
#include <stdio.h>
int main()
{
	int a[3];
	for(int i=0; i<3; i++)
		scanf("%d",&a[i]);
	int min=a[0];
	int max=a[0];
	for(int i=0; i<3; i++){
		if(min>a[i]) min=a[i];
		if(max<a[i]) max=a[i];
	}
	printf("%d\n",max-min);
}
```
```C
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
```
