#include <iostream>
int main () {
    int a;

    printf("Digite sua idade: ");
    scanf("%d", &a);

    if ( a >= 18) {
        printf("Voce é maior de idade.\n");
    } else {
        printf("Você é menor de idade!\n");

    }
    return false;
    }