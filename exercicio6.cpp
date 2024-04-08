#include <iostream>
int main () {

    int a;
    printf("Digite um número de 1 a 7:");
    scanf("%d", &a);
        
        if (a == 1) {
       printf("Domingo.\n"); 
    }
        else if (a == 2) { 
            printf("O seu dia é Segunda-feira!\n");
        }
        else if (a == 3)  {
            printf("O seu dia é Terça-feira!\n");
        }
        else if (a == 4) {
            printf("O seu dia é Quarta-feira!\n");
        }
        else if (a == 5) { 
            printf("O seu dia é Quinta-feira!\n");
        }
        else if (a == 6)  {
            printf("O seu dia é Sexta-feira!\n");
        }
        else if (a == 7) {
            printf("O seu dia é Sábado!\n");
        }
        return false;
}