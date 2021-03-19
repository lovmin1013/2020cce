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
進階題-A的B次方函數 : 題目內容：請撰寫一個函數MYPOWER(A,B)，可以計算A^B結果。      
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
進階題-漸增數列相加 : 輸入正整數n，計算1 * 2 + 2 * 3 +3 * 4 +… + (n-1) * n之和
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
進階題-2進位轉10進位 : 讀入一個0000 ~ 1111的2進位整數(固定4位數)，請顯示出對應的10進位數字。 數字範圍：0000 – 1111
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
