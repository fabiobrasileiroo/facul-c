#include <stdio.h>
//    Solicitar um número entre 1 e 4. Se a pessoas digitar um número diferente, mostrar a mensagem "entrada inválida" e solicitar o número novamente. Se digitar correto mostrar o número digitado. 

int main() {
    int num;
    printf("digite um numero entre 1 e 4: ");
    scanf("%d",&num);
    while(num < 1 || num > 4) {
        printf("Entrada invalida\n");
        printf("Digite um numero entre 1 e 4: \n");
        scanf("%d",&num);
    }
    printf("O numero digitado foi %d",num);
    return 0;
}

