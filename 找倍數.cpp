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
