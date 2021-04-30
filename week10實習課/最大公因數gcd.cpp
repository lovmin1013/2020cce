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
