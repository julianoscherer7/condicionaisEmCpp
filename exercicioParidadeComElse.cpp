#include <iostream>
    int main () {
    int a;

    printf("Digite um número: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("O numero digitado é par.\n");

    } else {
        printf("O número digitado é ímpar.\n");
    }
    return false;
    }