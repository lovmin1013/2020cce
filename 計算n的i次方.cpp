#include <stdio.h>
int main()
{
    int n,i,a=1;
    scanf("%d%d",&n,&i);
    for(int k=1;k<=i;k++){
        a=n*a;
    }
    printf("%d",a);
}
