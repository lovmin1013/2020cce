指標 (*) 及 陣列 ([ ]) :  
NOTE 1
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll(){
    for(int i=0; i<5; i++) printf("%d ",a[i]);
        printf("\n");
}
int main()
{
            printAll();
    int *p = &a[2];
    *p = 222;
            printAll();
 }
 ```
NOTE 2
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll(){
    for(int i=0; i<5; i++) printf("%d ",a[i]);
        printf("\n");
}
int main()
{
            printAll();
    int *p = &a[2];
    *p = 222;
            printAll();
    p = p+2;
    *p=666;
            printAll();
    p--;
    *p=555;
            printAll();
}
```
![image](https://user-images.githubusercontent.com/79676872/111024316-1e293d00-8419-11eb-9da0-cc5703ee3f96.png)
住址(&) :
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll(){
    for(int i=0; i<5; i++) printf("%d ",a[i]);
        printf("\n");
}
int main()
{
            printAll();
    int *p = &a[2];
    *p = 222;
            printAll();
            printf("p心裡記的小紙條是:%d\n",p);
    p = p+2;
    *p=666;
            printAll();
            printf("p心裡記的小紙條是:%d\n",p);
    p--;
    *p=555;
            printAll();
            printf("p心裡記的小紙條是:%d\n",p);
}
```
![image](https://user-images.githubusercontent.com/79676872/111024351-49ac2780-8419-11eb-9e25-9c31eb8a11fd.png)
malloc()函式 :
```C
#include <stdio.h>
#include <stdlib.h>

int a[10];
int main()
{
    int b[10];
    
    int *p = (int*) malloc( sizeof(int)*10 );
    
    return 0;
}
```
![image](https://user-images.githubusercontent.com/79676872/111024374-69435000-8419-11eb-94fc-12ea8dd87c0a.png)
