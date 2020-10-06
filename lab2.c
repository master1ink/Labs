#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main() {
    int a[N], i, q, max, num_max;
    float sum;
    q = 0;
    sum = 0;
    max = 0;
    num_max = 0;
    srand(time(NULL));
    for (i=0; i<N; i++) {
        a[i] = rand() % 10 - 5;
        if (a[i+1]==a[N]) {
            printf("%d.", a[i]);
        } else {
            printf("%d, ", a[i]);
        }
        if (a[i] > 0) {
            sum += a[i];
            q++;
        }
    }
    for (i=0; i<N; i++) {
        if (max<a[i]) max=a[i];
    }
    for (i = 0; i < N; i++) {
        if (max==a[i]) ++num_max;
    }
    printf("\n");
    printf("average: %.2f;\n", sum/q);
    printf("max: %d;\n", max);
    printf("num of max: %d;", num_max);
    return 0;
}