#include <stdio.h>

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a = 123;
    int b = 321;

    int *A = &a;
    int *B = &b;

    printf("a: %d   b: %d", *A, *B);

    swap(A, B);
    printf("\n###############\n");
    
    printf("a: %d   b: %d", *A, *B);

    return 0;
}