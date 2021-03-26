字串輸入
```C
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};
    printf("%s\n",line);
    printf("%s\n",line2);

    char line3[]="majority";
    printf("%s\n",line3);
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("line4:==%s==\n",line4);
}
```
![week05-2](https://user-images.githubusercontent.com/79676872/112566851-b57b9080-8e1a-11eb-8d29-0955d679991c.png)

