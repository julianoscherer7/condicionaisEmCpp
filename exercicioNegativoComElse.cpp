#include <iostream>
    int main () {
    int a;

    printf("Digite um número: ");
    scanf("%d", &a);

    if (a > 0 ) {
        printf("O numero digitado é positivo ou zero.\n");
    } else {
        printf("O número digitado é negativo.\n ");
    }

    return 0;
    }