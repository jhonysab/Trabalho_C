// Jhonatan de Sant'Anna Brum - 1240110333
// José Victor Ferreira da Silva - 1240111232 

// Elabore um programa em linguagem C que solicite ao usuário um número inteiro e informe se esse número é um número primo. Após informar se é um número primo, o programa deverá informar os 3 menores números //primos que sejam maiores que o número fornecido. 

#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool isPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    
    int numero, contador = 0, atual;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (isPrimo(numero)) {
        printf("%d eh um numero primo.\n", numero);
    } else {
        printf("%d nao eh um numero primo.\n", numero);
    }

    printf("Os 3 menores numeros primos maiores que %d sao:\n", numero);
    atual = numero + 1; 
    while (contador < 3) {
        if (isPrimo(atual)) {
            printf("%d\n", atual);
            contador++;
        }
        atual++;
    }

    return 0;
}