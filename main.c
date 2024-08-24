#include "stdio.h"

int funcRef() {

}

int funcVal(int *a, float b, char c) {
    *a = 20;

    return 0;
}

int main()  {
    int value = 0;

    value = 10;

    funcVal(&value, 1.0, 'c');

    printf("a = %d\n", value);

    return 0;
}