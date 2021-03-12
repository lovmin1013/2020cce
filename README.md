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
指標 - 利用*p改變n1以及n3之數值
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
## 第二週實習課
進階題-讀入整數反序列印 : 設計一個程式，該程式可以連續讀入正整數(輸入0表示結束，至多不超過10個正整數)，
之後將所輸入的正整數以相反序顯示在畫面上。 
數字範圍：整數 1 – 1000  
```C
#include <stdio.h>
int a[1000];
int main()
{
	int N=0;
	for(int i=0;i<1000;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){ 
		N=i; 
		break;
		}
	}
	for(int i=N-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	printf("\n");
}
```
```C
#include <stdio.h>
int a[11];
int main()
{
	int N=0;
	for(int i=0; i<10; i++){
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		N++;
	}
	for(int i=N-1; i>=0; i--){
		printf("%d ",a[i]);
	}
	printf("\n");
}
```
進階題-A的B次方函數 : 
題目內容：請撰寫一個函數MYPOWER(A,B)，可以計算A^B結果。     
數字範圍：整數 1 – 9。       
程式限制：不得使用power()函數。不得變更已給定的主程式。
```C
#include <stdio.h>
int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=1; i<=b; i++){
		ans=ans*a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}

```
```C
#include <stdio.h>
int MYPOWER(int a,int b);
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}

int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=1; i<=b; i++){
		ans=ans*a;
	}
	return ans;
}
```
進階題-漸增數列相加 : 輸入正整數n，計算1*2+2*3+3*4+…+(n-1)*n之和              
數字範圍：整數 1 – 1000  
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=2; i<=n; i++){
		ans += (i-1)*i;
	}
	printf("%d\n",ans);
}
```
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=1; i<=n-1; i++){
		ans += i*(i+1);
	}
	printf("%d\n",ans);
}
```
基礎題-判別正方形 : 撰寫一個程式要求使用者輸入矩形的長與寬，然後讀進這兩個整數。  
假如長與寬相同則印出訊息「It is a square」，否則印出訊息「It is not a square」。  
只能使用本章所學到的單一if敘述式。
```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);	
	printf("Enter two numbers:");
	if(a!=b) printf("  It is not a square ");
	else printf("  It is a square ");
}
```
進階題-2進位轉10進位 : 讀入一個0000 ~ 1111的2進位整數(固定4位數)，請顯示出對應的10進位數字。 
數字範圍：0000 – 1111
```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",8*(a/1000)+4*(a%1000/100)+2*(a%100/10)+(a%10));
}
```
```C
#include <stdio.h>
int main()
{
	char c[4];
	int n=1,ans=0;
	scanf("%s",&c);
	for(int i=3; i>-1; i--){
		ans+=(c[i]-'0')*n;
		n*=2;
	}
	printf("%d\n",ans);
}
```
均標與前標計算 : 輸入整數N, 再輸入N個同學的分數, 計算並且輸出均標(float 小數點後一位數),   
均標是全部學生的平均分數, 再計算並且輸出前標(float 小數點後一位數),    
本題的前標是大於或等於均標的同學的平均分數。   
```C
#include <stdio.h>
int main()
{
	int n,a[100];
	float b,c,t=0,d=0,e=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
		t+=a[i];
	}
	b=t/n;
	for(int i=0; i<n; i++){
		if(a[i]>=b){
			d++;
			e+=a[i];
		}
		c=e/d;
	}
	printf("均標:%.1f\n",b);
	printf("前標:%.1f\n",c);
}
```
## 第三週正課
指標 (*) 及 陣列 ([ ]) :        
NOTE 1
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll(){
    for(int i=0; i<5; i++) printf("%d ",a[i]);
        printf("\n");
}
int main()
{
            printAll();
    int *p = &a[2];
    *p = 222;
            printAll();
 }
```
NOTE 2
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll(){
    for(int i=0; i<5; i++) printf("%d ",a[i]);
        printf("\n");
}
int main()
{
            printAll();
    int *p = &a[2];
    *p = 222;
            printAll();
    p = p+2;
    *p=666;
            printAll();
    p--;
    *p=555;
            printAll();
}
```
![week03-2](https://user-images.githubusercontent.com/79676872/110890102-5bfb6800-832a-11eb-9997-671d238cd20a.png)
住址(&) : 
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll(){
    for(int i=0; i<5; i++) printf("%d ",a[i]);
        printf("\n");
}
int main()
{
            printAll();
    int *p = &a[2];
    *p = 222;
            printAll();
            printf("p心裡記的小紙條是:%d\n",p);
    p = p+2;
    *p=666;
            printAll();
            printf("p心裡記的小紙條是:%d\n",p);
    p--;
    *p=555;
            printAll();
            printf("p心裡記的小紙條是:%d\n",p);
}
```
![week03-3](https://user-images.githubusercontent.com/79676872/110890072-48e89800-832a-11eb-967d-197ee2573cf1.png)
malloc()函式 : 
```C
#include <stdio.h>
#include <stdlib.h>

int a[10];
int main()
{
    int b[10];
    
    int *p = (int*) malloc( sizeof(int)*10 );
    
    return 0;
}
```
![week03-4](https://user-images.githubusercontent.com/79676872/110890083-50a83c80-832a-11eb-9889-b6af0000bf0b.png)

