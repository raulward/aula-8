#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int simetrica = 1; 


    printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verifica se a matriz é simétrica
    for(i = 0; i < 3; i++) {
        for(j = 0; j < i; j++) {  
            if(matriz[i][j] != matriz[j][i]) {
                simetrica = 0; 
                break;
            }
        }
        if (!simetrica) break; 
    }


    if(simetrica) {
        printf("A matriz é simétrica.\n");
    } else {
        printf("A matriz não é simétrica.\n");
    }

    return 0;
}