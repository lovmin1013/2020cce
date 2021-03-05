# 2020cce
程式設計(二)

## 第一週實習課
基礎題-找零錢 : 假設有50元、5元和1元等3種硬幣，請輸入一個金額，並顯示等同於該金額所需的最少硬幣組合。    
數字範圍：整數1 – 1000
```C
#include <stdio.h>
int main()
{Cancel Changes
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
基礎題-找倍數 : 連續讀入10個整數(1 – 1000)，找出所讀入的整數有幾個是3的倍數。 
整數範圍：1 – 1000
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
基礎題-整數轉換為等級 : 輸入一個整數，如果所輸入的整數大於或等於90，則輸出A；   
如果輸入的整數小於90但大於或等於80則輸出B，如果小於80但大於或等於60，則輸出C；
如為其他整數，則輸出F。
```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=90) printf("A\n");
	else if(a<90 && a>=80) printf("B\n");
	else if(a<80 && a>=60) printf("C\n");
	else printf("F\n");
}
```
進階題-分式化簡 : 輸入分式的分子及分母(分母不可為0)，將其化簡後的分式輸出。 
數字範圍：整數1 – 10000
```C
#include <stdio.h>
int main()
{
	int a,b,ans=0;
	scanf("%d%d",&a,&b);
	for(int i=1; i<=b; i++){
		if(a%i==0 && b%i==0){
			ans=i;
		}
	}
	printf("%d %d\n",a/ans,b/ans);
}
```
## 第二週正課
指標
```C
#include <stdio.h>
int main()
{
    int n1=10, n2=20, n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p = &n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p2 = &n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
```
![week02-2](https://user-images.githubusercontent.com/79676872/110062354-137d0100-7da4-11eb-9aab-c85526904ba3.png)
陣列
```C
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p = &n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p2 = &n[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
    
    p2=p;
    *p2=400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
}
```
![week02-3](https://user-images.githubusercontent.com/79676872/110071447-01f12480-7db7-11eb-9ae2-c3aad4986937.png)


