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
![week04-1](https://user-images.githubusercontent.com/79676872/111724887-07636a00-88a1-11eb-9360-d57b1c25fe96.png)
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
![week04-2](https://user-images.githubusercontent.com/79676872/111724911-0f230e80-88a1-11eb-90b7-48edb0804162.png)
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
![week04-3](https://user-images.githubusercontent.com/79676872/111724935-13e7c280-88a1-11eb-8f8b-467d6ed984a1.png)
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
![week04-4](https://user-images.githubusercontent.com/79676872/111724949-19450d00-88a1-11eb-826e-d5063dd47c0a.png)
