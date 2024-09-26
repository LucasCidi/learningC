int countRepeatedNumbers(int list[], int *length) {
    int repeated = 0;

    for(int i = 0; i < *length; i++) {
        for(int j = i+1; j < *length; j++) {
            if(list[i] == list[j]) {
                repeated++;
            }
        }
    }

    return repeated;
}

int main() {
    int list[] = {1, 2, 3, 4, 5, 3, 6, 7, 2, 8, 2};
    int length = sizeof(list)/sizeof(list[0]);

    printf("%d\n", countRepeatedNumbers(list, &length));
    return 0;
}