#include <stdio.h>

int main(void) {

    int m[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite um valor para a posicao %d %d: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }


}