/*Faça um programa que leia N números e ao final  
mostre os 3 maiores números digitados. */

#include <stdio.h>

int main() {
    int n, i = 0, a = 0, m1, m2, m3;

    printf("Quantos numeros serao contados: ");
    scanf("%d", &n);

    // Inicialize os maiores valores como muito baixos (negativo infinito, por exemplo).
    m1 = m2 = m3 = 0; // Menor valor possível de um int.

    while (i < n) {
        printf("Digite um numero: ");
        scanf("%d", &a);

        // Atualize os maiores números na ordem correta.
        if (a > m1) {
            m3 = m2;
            m2 = m1;
            m1 = a;
        } else if (a > m2 && a <=m1) {
            m3 = m2;
            m2 = a;
        } else if (a > m3 && a <= m2) {
            m3 = a;
        }

        i++;
    }

    // Exiba os 3 maiores números.
    printf("O 1 maior e: %d\n", m1);
    printf("O 2 maior e: %d\n", m2);
    printf("O 3 maior e: %d\n", m3);

    return 0;
}