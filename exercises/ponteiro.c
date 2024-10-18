#include <stdio.h> 


int main() {
    char v[] = "pucrs";
    char *p = v;

    for(int i = 0; i < 5; i++) {
        printf("%c", *p);
        p++;
    }

}