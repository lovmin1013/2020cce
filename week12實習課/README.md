進階題-數字個數 : 設計一個程式，該程式可以連續讀入正整數(輸入0表示結束，至多不超過10個正整數)，之後顯示所輸入正整數的個數。  
```C
#include <stdio.h>
int main()
{
	int a[20],ans=0;
	for(int i=0; i<10; i++){
		scanf("%d",&a[i]);
		if(a[i]==0)
		break;
		ans++;
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

