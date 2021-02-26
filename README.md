# 2020cce
程式設計(二)

## 第一週實習課
找零錢 : 假設有50元、5元和1元等3種硬幣，請輸入一個金額，並顯示等同於該金額所需的最少硬幣組合。 
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
因數個數 : 輸入一個正整數，顯示所有該正整數因數的個數。 
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
