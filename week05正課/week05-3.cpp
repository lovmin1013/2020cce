#include <stdio.h>
int main()
{///5個字串,每個字串有10格

    char line[5][10]={"decline","proper","majority","bullet","shop"};
    for(int i=0; i<5; i++){
        printf("%s\n",line[i]);
    }
}
