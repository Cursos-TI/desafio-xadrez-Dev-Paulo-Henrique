#include <stdio.h>
void Torre(int t) {
    if (t > 0) {
        printf("Movimento para a direita: %d\n", t);
        Torre(t - 1);
    }
}
void Bispo(int b) {
    for (int i = 0; i < b; i++) {
        printf("Movimento diagonal Cima-Direita: %d\n", i+1);
        printf("Movimento diagonal Cima-Esquerda: %d\n", i+1);
    }
}
void Rainha(int r) {
    if (r > 0) {
        printf("Movimento para a esquerda: %d\n", r);
        Rainha(r - 1);
    }
}
void Cavalo() {
    printf("Movimento do Cavalo em L:\n");
    printf("1: 2 casas para frente e 1 para o lado.\n");
    printf("2: 2 casas para trás e 1 para o lado.\n");
    printf("3: 1 casa para frente e 2 para o lado.\n");
    printf("4: 1 casa para trás e 2 para o lado.\n");
}

int main() {
    printf("Movimento da Torre:\n");
    Torre(5);

    printf("\nMovimento do Bispo:\n");
    Bispo(5);

    printf("\nMovimento da Rainha:\n");
    Rainha(8);

    printf("\nMovimento do Cavalo:\n");
    Cavalo();

    return 0;
}
