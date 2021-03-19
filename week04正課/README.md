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
