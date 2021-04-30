進階題-最大公因數gcd : 輸入二整數 a b，輸出a b最大公因數  
```C
#include <stdio.h>
int main()
{
	int a,b,ans=0;
	scanf("%d%d",&a,&b);
	printf("Enter two integers: \n");
	for(int i=1; i<=a; i++){
		if(a%i==0&&b%i==0) ans=i;
	}
	printf("The greatest common divisor of %d and %d is %d\n",a,b,ans);
}
```
進階題-字串長度 : 輸入兩個很大的正整數a與 b，如果a>b則輸出 1，  
如果 a<b則輸出 -1, 如果 a=b 則輸出 0。 (暗示：可用字串輸入，用字串的觀點來比大小。)  
```C
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	scanf("%s%s",&a,&b);
	int A=strlen(a),B=strlen(b);
	if(A>B) printf("1");
	else if(A<B) printf("-1");
	else printf("%d",strcmp(a,b));//若兩字串長度相同，用strcmp比較數字大小
}
```
進階題-函數判斷質數 : 設計一個函數prime(n)，可以判斷n是否為質數：如果是質數則回傳1，否則回傳0。  
```C
#include <stdio.h>
#include <iostream>
using namespace std;
int prime(int n)
{
	int i,ans=0;
	for(i=1; i<=n; i++){
		if(n%i==0) ans++;
	}
	if(ans==2) return 1;
	else return 0; 
}
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* 上方 C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
```
進階題-判斷迴文 : 讀入一個至多80個字的字串，判斷字串是否為迴文(即由左而右，由右而左，順序相同，大小寫字母視為相異)。  
如果是迴文則輸出YES，如果不是則輸出NO。  
```C
#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char a[100];
	scanf("%s",&a);
	
	int len=strlen(a);
	for(i=0; i<(len/2); i++){
		if(a[i]!= a[len-1-i]) break;
	}
	if(i==(len/2)) printf("YES");
	else printf("NO");
}
```
基礎題-計算餘數及列印 : 撰寫一個程式，要求使用者輸入兩個數字(變數名稱分別為x,y)，  
再從使用者取得這兩個數字，x為被除數，y為除數，然後印出計算後的餘數(remainder)。  
```C
#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("Enter two numbers: ");
	printf("The remainder is %d\n",x%y);
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
	printf("Enter two numbers:  ");
	if(a==b) printf("It is a square ");
	else printf("It is not a square ");
}
```
基礎題-將一連串整數相乘 : 請撰寫一個會將一連串整數相乘的程式。假定以scanf所讀取的第一個整數，  
是用於指出接下來要輸入的數值的個數。你的程式每執行一次scanf，必須只能讀取一個數值。  
底下是一個輸入列的範例 3 20 50 12 其中3表示後面共有3筆資料要輸入。  
```C
#include <stdio.h>
int a[100];
int main()
{
	int n,ans=1;
	scanf("%d",&n);
	printf("Enter the number of values to be processed: ");
	for(int i=0; i<n; i++){
		printf("Enter a value: ");
		scanf("%d",&a[i]);
		ans*=a[i];
	}
	printf("Product of the %d values is %d",n,ans);
}
```
基礎題-平年月份的天數 : 輸入一個整數N，輸出平年中N月的天數。  
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n==2) printf("28");
	else if(n==1||n==3||n==5||n==7||n==8||n==10||n==12) printf("31");
	else printf("30");
}
```
