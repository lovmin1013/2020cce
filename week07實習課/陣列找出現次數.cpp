#include <stdio.h>
int main()
{
	int i;
	int a[11];
	for(i=0; i<11; i++){
		scanf("%d",&a[i]);
		if(a[i]==0) break;
	}
	int x;
	scanf("%d",&x);//��x�b�ƦC���X�{������
	int n=i;//�����}�C�Ӽ�
	int count=0;
	for(i=0; i<n; i++){
		if(a[i]==x) count++;
	}
	printf("%d\n",count);
}
