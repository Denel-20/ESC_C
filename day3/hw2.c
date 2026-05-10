#include <stdio.h>

struct Data {
    int val;
    int val2;
    int val3;
};

void swap(struct Data *A, struct Data *B) {
    struct Data c = *A;
    *A = *B;
    *B = c;
}

int main() {
    struct Data a = {1, 2, 3};
    struct Data b = {3, 2, 1};
    
    printf("a: %d %d %d\n", a.val, a.val2, a.val3);
    printf("b: %d %d %d\n", b.val, b.val2, b.val3);

    swap(&a, &b);

    printf("a: %d %d %d\n", a.val, a.val2, a.val3);
    printf("b: %d %d %d\n", b.val, b.val2, b.val3);

    return 0;
}