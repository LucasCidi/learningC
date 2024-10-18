int index(int list[], int length, int find) {
    int *ptr = list;

    for(int i = 0; i < length; i++) {
        if(*ptr == find) { 
            return i;
        }   
        *ptr++;
    }
    return -1;
}
    
void copyVet(int list1[], int list2[], int length) {
    int *ptr1 = list1;
    int *ptr2 = list2;

    for(int i = 0; i < length; i++) {
        *ptr2 = *ptr1;
        *ptr1++;
        *ptr2++;
    }
}

void inverte(int list[], int len) {
    int *p = list;
    int aux = 0;
    int *p2 = list;
    p2 += len - 1;

    while(p < p2) {
        aux = *p;
        *p = *p2;
        *p2 = aux;
        p++;
        p2--;
    }
}



int main() {
    int list1[] = {1,2,3,4,5,6,7,8,9};
    int list2[] = {9,8,7,6,5,4,3,2,1};

    int len = sizeof(list1)/sizeof(list1[0]);

    //int position = index(list1, len, 9);
    //copyVet(list1, list2, len);

    inverte(list2, len);

    for(int i = 0; i < len; i++) {
        printf("%d", list2[i]);
    }

    //printf("%d", position);
}