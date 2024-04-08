#include <iostream>
int main () {

    int a;
    printf("Digite um número:");
    scanf("%d", &a);
    if (a > 10) {
       printf("O numero é maior que 10.\n"); 
    }
        else if (a == 10) { 
            printf("O número é igual a 10.\n");
        }
        else  {
            printf("O número é menor que 10.\n");

        }
        return false;
}