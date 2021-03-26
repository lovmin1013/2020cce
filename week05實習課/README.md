進階題-反序數字 : 輸入1個正整數，將該整數所有數字反序排列後組成一個的新整數，計算出兩者相加的結果。   
數字範圍：整數 1 – 10000  
```C
#include <stdio.h>
int main()
{
	int n,b;
	scanf("%d",&n);
	b=n;
	int a=0;
	while(n>=1){
		a = n%10+a*10;
		n/=10;
		
	}
	printf("%d+%d=%d\n",b,a,b+a);
}
```
進階題-絕對值函數:設計一個函數f(n)，會回傳n的絕對值。  
數字範圍：整數1 – 10000  
程式限制：不得使用abs()函數。不得變更已給定的主程式。  
```C
#include <stdio.h>
int f(int n)
{
	return (n>0)? n:-n; //條件 ()? T:F
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```
```C
#include <stdio.h>
int f(int n)
{
	if(n<0) n=0-n;
	return n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```
基礎題-N數之和 : 輸入一個整數N，之後讀入N個整數，請輸出其和。   
數字範圍：N=整數1 – 10，其餘整數1 – 100。  
```C
#include <stdio.h>
int a[10];
int main()
{
	int N;
	int ans=0;
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d",&a[i]);
		ans+=a[i];
	}
	printf("%d",ans);
	printf("\n");
}
```
基礎題-三數極大 : 輸入三個正整數，輸出其最大值。   
數字範圍：整數1 – 100  
```C
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c) printf("%d",a);
	if(b>a&&b>c) printf("%d",b);
	if(c>a&&c>b) printf("%d",c);
	printf("\n");
}
```
基礎題-計算商數 : 輸入兩個整數a，b，輸出a除以b的商。   
數字範圍：整數 1 – 10000  
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",a/b);
}
```
