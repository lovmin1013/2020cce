進階題-奇數反流 :輸入一個整數N，後接N個整數。請將這N個數中的奇數，依照出現順序反向印出。  
數字範圍：N與整數的範圍 為 1 – 99。  
```C
#include <stdio.h>
int main()
{
	int n,a[100];
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for(int i=n-1; i>=0; i--){
		if(a[i]%2!=0) printf("%d ",a[i]);
	}
}
```
基礎題-大位王 :輸入一個整數，輸出該整數的最大位的數字。  
例如：-357的最大位數字為3、1578的最大位數字為1，而0的最大位數字為0。  
數字範圍：整數 9999 ~ -9999  
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<0) n=-n;
	while(n/10>0){
		n/=10;
	}
	printf("%d\n",n);
}
```
基礎題-輸入西元y年，判斷該y年是否為閏年 : 輸入西元y年，判斷該y年是否為閏年，輸出相對訊息。  
{閏年定義：西元年份除以4可整除，且除以100不可整除，為閏年。 西元年份除以100可整除，且除以400不可整除，為平年}  
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%4==0 && n%100!=0) printf("%d is a leap year.\n",n);
	else printf("%d is not a leap year.\n",n);
}
```
基礎題-把數字倒著印出來 :輸入10個整數，把這10個數字倒著印出來。數字範圍：整數1 – 100  
```C
#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0; i<10; i++){
		scanf("%d",&a[i]);
	}
	for(int i=9; i>=0; i--){
		printf("%d ",a[i]);
	}
}
```
基礎題-區間測速 :龜山區萬壽路1段裝設區間測速器，長度1.2公里，輸入1個整數(車輛通過該區間所行駛的秒數)，  
輸出它的時速印出來(只印整數部分，小數部分無條件捨去)。(時速的單位是每小時幾公里( km/hour)。1小時有60分鐘，1分鐘有60秒，輸入的是秒數)  
數字範圍：整數1 – 1000  
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int s=60*60*1.2/n;
	printf("%d",s);
}
```
