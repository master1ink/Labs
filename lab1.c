/*	Используя оператор цикла for
#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c;
    float startX, endX, dX;
    float F;
    printf("Input:\n");
    printf("\ta = "); scanf("%f", &a);
    printf("\tb = "); scanf("%f", &b);
    printf("\tc = "); scanf("%f", &c);
    printf("\tX Start = "); scanf("%f", &startX);
    printf("\tX End = "); scanf("%f", &endX);
    printf("\tdX = "); scanf("%f", &dX);
    for (float x = startX; x <= endX; x += dX) {
        if (x>c+b && a!=0) {
            F = sqrt(x + a + pow(b, 2)) / cos(x);
        }
        else if (x<c+b && a!=0 && x!=0) {
            F = log(a) + log(b) / a * x + pow(c, 2);
        }
        else {
            F= (a+b+x) / pow(x, 2);
        }
        printf("x = %.2f\tF = %.2f\n", x, F);
    }
    return 0;
} */

/*	Используя оператор цикла while
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float a,b,c;
    float startX, endX, dX;
    float F;
    printf("Input:\n");
    printf("\ta = "); scanf("%f", &a);
    printf("\tb = "); scanf("%f", &b);
    printf("\tc = "); scanf("%f", &c);
    printf("\tX Start = "); scanf("%f", &startX);
    printf("\tX End = "); scanf("%f", &endX);
    printf("\tdX = "); scanf("%f", &dX);
    float x= startX;
    while (x <= endX) {
        if (x>c+b && a!=0) {
            F = sqrt(x + a + pow(b, 2)) / cos(x);
        }
        else if (x<c+b && a!=0 && x!=0) {
            F = log(a) + log(b) / a * x + pow(c, 2);
        }
        else {
            F= (a+b+x) / pow(x, 2);
        }
        printf("x = %.2f\tF = %.2f\n", x, F);
        x= x+dX;
    }
    return 0;
}
*/

//	Используя оператор цикла  do while
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float a,b,c;
    float startX, endX, dX;
    float F;
    printf("Input:\n");
    printf("\ta = "); scanf("%f", &a);
    printf("\tb = "); scanf("%f", &b);
    printf("\tc = "); scanf("%f", &c);
    printf("\tX Start = "); scanf("%f", &startX);
    printf("\tX End = "); scanf("%f", &endX);
    printf("\tdX = "); scanf("%f", &dX);
    float x= startX;
    do {
        if (x>c+b && a!=0) {
            F = sqrt(x + a + pow(b, 2)) / cos(x);
        }
        else if (x<c+b && a!=0 && x!=0) {
            F = log(a) + log(b) / a * x + pow(c, 2);
        }
        else {
            F= (a+b+x) / pow(x, 2);
        }
        printf("x = %.2f\tF = %.2f\n", x, F);
        x= x+dX;
    } while (x <= endX);
    return 0;
}
