#include <stdio.h>
#include <ctype.h>

#define TAMANHO 10

void mostrarPadroes() {
    int i, j;
    printf("Modelos de triângulos com 10 linhas:\n\n");

    // Triângulo A
    printf("(A)\n");
    for (i = 1; i <= TAMANHO; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Triângulo B
    printf("(B)\n");
    for (i = TAMANHO; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Triângulo C
    printf("(C)\n");
    for (i = TAMANHO; i >= 1; i--) {
        for (j = 1; j <= TAMANHO - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Triângulo D
    printf("(D)\n");
    for (i = 1; i <= TAMANHO; i++) {
        for (j = 1; j <= TAMANHO - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}


void imprimirTrianguloA() {
    for (int i = 1; i <= TAMANHO; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}


void imprimirTrianguloB() {
    for (int i = TAMANHO; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}


void imprimirTrianguloC() {
    for (int i = TAMANHO; i >= 1; i--) {
        for (int j = 1; j <= TAMANHO - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}


void imprimirTrianguloD() {
    for (int i = 1; i <= TAMANHO; i++) {
        for (int j = 1; j <= TAMANHO - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    char escolha;
    char continuar;

    mostrarPadroes();

    do {
        do {
            printf("Escolha o tipo de triângulo (A, B, C, D): ");
            scanf(" %c", &escolha);
            escolha = tolower(escolha);

            if (escolha != 'a' && escolha != 'b' && escolha != 'c' && escolha != 'd') {
                printf("Opção inválida. Por favor, escolha A, B, C ou D.\n");
            }
        } while (escolha != 'a' && escolha != 'b' && escolha != 'c' && escolha != 'd');

        printf("\n");

        switch (escolha) {
            case 'a':
                imprimirTrianguloA();
                break;
            case 'b':
                imprimirTrianguloB();
                break;
            case 'c':
                imprimirTrianguloC();
                break;
            case 'd':
                imprimirTrianguloD();
                break;
        }

        printf("\nDeseja imprimir outro triângulo? (s/n): ");
        scanf(" %c", &continuar);
    } while (tolower(continuar) == 's');

    printf("Programa encerrado.\n");
    return 0;
}
