#include <stdio.h>
typedef struct data{
    int ans;///¦³´X­Ó??
    char c;///¦r¥À
}DATA;
///struct data box;
DATA box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c,box.ans);
}
