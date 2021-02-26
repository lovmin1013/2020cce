# 2020cce
程式設計(二)

## 第一週實習課
基礎題-找零錢 : 假設有50元、5元和1元等3種硬幣，請輸入一個金額，並顯示等同於該金額所需的最少硬幣組合。 
數字範圍：整數1 – 1000
```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d=50*%d+5*%d+1*%d\n",a,a/50,(a%50)/5,(a%5)/1);
}
```
基礎題-因數個數 : 輸入一個正整數，顯示所有該正整數因數的個數。 
數字範圍：整數1 – 10000。
```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int n=0;
	for(int i=1; i<=a; i++){
		if(a % i == 0)
		n++;
	}
	printf("%d\n",n);
}
```
基礎題-找倍數 : 連續讀入10個整數(1 - 1000)，找出所讀入的整數有幾個是3的倍數。
整數範圍 : 1 - 1000
```C
#include <stdio.h>
int main()
{
	int a[9];
	int n=0;
	for(int i=0; i<10; i++){
		scanf("%d",&a[i]);
	}
	for(int j=0; j<10; j++){
		if(a[j] % 3 == 0){
		n+=1;
		}
	}
	printf("%d\n",n);
}

```
基礎題-整數轉換為等級 : 
```C
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=90) printf("A");
    else if(n<90&&n>=80) printf("B");
    else if(n<80&&n>=60) printf("C");
    else printf("F");
}
```
