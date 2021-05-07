#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(b>a){
		for(int i=a; i<=b; i++){
			if(i%7==0) printf("%d ",i);
		}
	}
	else{
		for(int i=b; i<=a; i++){
			if(i%7==0) printf("%d ",i);
		}
	}
}

