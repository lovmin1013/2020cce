```C
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,1,9,2,6,10};
int compare(const void *p1, const void *p2)
{
    int d1 = *(char*)p1;
    int d2 = *(char*)p2;
    if(d1 > d2) return 1;
    if(d1 == d2) return 0;
    if(d1 < d2) return -1;
}
int main()
{
    qsort(a, 10, sizeof(int), compare);

    for(int i=0; i<10; i++){
        printf("%d ",a[i]);
    }
}
```
![week11-1](https://user-images.githubusercontent.com/79676872/117411214-ee447480-af45-11eb-9ac3-da5d5ea928ca.png)
