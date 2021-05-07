#include <stdio.h>
int main()
{
    char a[90];
    scanf("%s",&a);
    int i=0,ans=0;
    while(a[i]!='\0'){
        if(a[i] >= '0' && a[i]<='9') ans++;
        i++;
    }
    printf("%d",ans);
}
