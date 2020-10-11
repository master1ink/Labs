#include <stdio.h>
#include <stdlib.h>

# define N 5
# define M 5

int main()
{
    int A[N][M];
    for (int i = 0; i < N; i++ ) {
        for (int j = 0; j < M; j++ ) {
            A[i][j] = rand()% 10 - 5;
            printf("%d ",A[i][j]);
        }
        puts("\n");
    }

    puts("\n");
    float B[N][M];

    for (int i = 0; i < N; i++ ) {
        for (int j = 0; j < M; j++ ) {
            int num=0, top=0, right=0, bot=0, left=0, tes;
            if (i-1>=0) {
                top=A[i-1][j];
                num++;
            }
            if (j+1<=M-1) {
                right=A[i][j+1];
                num++;
            }
            if (i+1<=N-1) {
                bot=A[i+1][j];
                num++;
            }
            if (j-1>=0) {
                left=A[i][j-1];
                num++;
            }
            tes=(top+right+bot+left)%num;
            B[i][j]=(float)(top+right+bot+left)/(float)num;
            if (tes==0) {
                printf("%.0f ",B[i][j]);
            } else printf("%.2f ",B[i][j]);
        }
        puts("\n");
    }
    return 0;
}