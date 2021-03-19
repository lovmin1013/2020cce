04-1
```C
#include <stdio.h>
struct POINT{
    float x,y;
};
int main()
{
    struct POINT a;
}
```
04-2
```C
#include <stdio.h>
struct POINT{
    float x,y;
};
int main()
{
    struct POINT a={4.1,3.2};
    printf("%f %f\n",a.x,a.y);
}
```
04-3
```C
#include <stdio.h>
struct POINT{
    float x,y;
};
int main()
{
    struct POINT a={4.1,3.2};
    printf("%f %f\n",a.x,a.y);

    a.x=1;
    a.y=2;
    printf("%f %f\n",a.x,a.y);
}
```
04-4
```C
#include <stdio.h>
struct DATA{
    int x,y;
}a[3];
struct DATA b={100,200};

int main()
{
    for(int i=0; i<3; i++)
    {
        printf("a[%d] : %d %d\n",i,a[i].x,a[i].y);
    }
    printf("b : %d %d\n",b.x,b.y);
    struct DATA c;
    printf("c : %d %d 像亂碼\n",c.x,c.y);
    c=b;
    printf("c : %d %d\n",c.x,c.y);
}
```
