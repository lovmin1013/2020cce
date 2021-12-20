進階題-數字個數 : 設計一個程式，該程式可以連續讀入正整數(輸入0表示結束，至多不超過10個正整數)，之後顯示所輸入正整數的個數。  
```C
#include <stdio.h>
int main()
{
	int a, ans=0;
	while(scanf("%d",&a)!=EOF){
		if(a==0) break;
		else ans++;
	}
	printf("%d",ans);
}
```
```C
#include <stdio.h>
int main()
{
	int a, ans=0;
	while(scanf("%d",&a) !=EOF){
		ans++;
	}
	printf("%d",ans-1);
}
```
基礎題-剩餘啤酒有幾手又幾瓶 :假設購買啤酒瓶數有p瓶，喝掉d手（一手六瓶）後，試回答共剩幾手啤酒又幾瓶？  
```C
#include <stdio.h>
int main()
{
	int p,d;
	scanf("%d %d",&p,&d);
	printf("%d %d",(p-d*6)/6,(p-d*6)%6);
}
```
基礎題-三數最小 : 寫一方法能接受三個正整數，並回傳其最小值  
```C
#include <stdio.h>
int ans(int a, int b, int c)
{
	if(a<b&&a<c) return a;
	if(b<a&&b<c) return b;
	if(c<a&&c<b) return c;
}
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d\n",ans(a,b,c));
}
```
基礎題-計算立方值 : 依序輸入六個整數，輸出六個數的立方值。  
```C
#include <stdio.h>
int main()
{
	int a[6];
	for(int i=0; i<6; i++){
		scanf("%d",&a[i]);
		printf("%d\n",a[i]*a[i]*a[i]);
	}
}
```
進階題-判斷平方數 : 讀入一個1 – 1000000的數字，  
判斷該數字是否為某數字的平方數：如果是，則印出該數字為哪個數字的平方數；如果不是，則印出0。  
```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		if(n==i*i) ans=i;	
	}
	printf("%d",ans);
}
```
進階題-計算質數個數 : 從鍵盤讀入2個 2 - 10000的數字，請計算出兩數字間(含兩數字，假設第2個數字較大)，有幾數字是質數。  
```C
#include <stdio.h>
int main()
{
	int a,b,ans=0;//計算質數個數
	scanf("%d %d",&a,&b);
	int j;
	for(int i=a; i<=b; i++){
		for( j=2; j<i; j++){
			if(i%j==0) break;; 
		}
		if(j==i) ans++;//第二層for完整跑完，表示沒有數字可整除i
	}
	printf("%d",ans);
}
```
進階題-三數組合 : 讀入三個 0 - 9 的數字，將其組合成最大的數字，並計算將該數字加1的結果。  
```C
#include <stdio.h>
int main()
{
	int a[3], i;
	for( i=0; i<3; i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<3; i++){
		for(int j=i+1; j<3; j++){
			if(a[i]<a[j]){
				int temp= a[j];
				a[j]= a[i];
				a[i]=temp;
			} 
		}
	}
	printf("%d",a[0]*100+a[1]*10+a[2]+1);
}
```
基礎題-找千位數 : 讀入 1000 - 100000 的數字，找出其千位數的數字  
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",n/1000%10);
}
```
