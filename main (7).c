#include <stdio.h>
#include <stdlib.h>
int main() {
    int P, N;
    scanf("%d %d", &P, &N);
    int canos[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &canos[i]);
    }
    for(int i = 0; i < N - 1; i++) {
        int diferenca = abs(canos[i] - canos[i + 1]);
        if(diferenca > P) {
            printf("GAME OVER\n");
            return 0;
        }
    }
    printf("YOU WIN\n");
    return 0;
}