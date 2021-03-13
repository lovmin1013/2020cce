#include <stdio.h>
int main()
{
	int a[3];
	for(int i=0; i<3; i++)
		scanf("%d",&a[i]);
	int min=a[0];
	int max=a[0];
	for(int i=0; i<3; i++){
		if(min>a[i]) min=a[i];
		if(max<a[i]) max=a[i];
	}
	printf("%d\n",max-min);
}
