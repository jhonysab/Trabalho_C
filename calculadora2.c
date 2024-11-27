// Jhonatan de Sant'Anna Brum - 1240110333
// JosÃ© Victor Ferreira da Silva - 1240111232 

#include <stdio.h>
#include <math.h>

void menu() {
    printf("\nEscolha uma operacao entre dois numeros: \n\n");
    printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Potencia\n6 - Raiz Quadrada\n 0 - Sair\n");
}

double soma(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

double multi(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    if (b == 0) {
        printf("Erro: nao pode dividir por 0 \n");
        return 0;
    }
    return a / b;
}

int main() {
    int opcao;
    double a, b, resultado = 0;
    int usarResultadoAnterior = 0;

    do {
        menu();
        printf("\nDigite o numero da operacao: \n");
        scanf("%d", &opcao);

        if (opcao == 6) { 
            
            if (!usarResultadoAnterior) {
                printf("Digite o numero para calcular a raiz quadrada: \n");
                scanf("%lf", &a);
            } else {
                a = resultado;
                printf("Usando o resultado anterior (%.2lf) para a raiz quadrada.\n", resultado);
            }

            if (a < 0) {
                printf("!!!Erro: nao existe raiz para numero negativo!!!\n");
            } else {
                resultado = sqrt(a);
                printf("\n---> O resultado da raiz quadrada eh: %.2lf <---\n", resultado);
            }
        } else if (opcao >= 1 && opcao <= 5) {
            
            if (!usarResultadoAnterior) {
                printf("Digite o primeiro numero: \n");
                scanf("%lf", &a);
            } else {
                a = resultado;
                printf("Usando o resultado anterior (%.2lf) como primeiro numero.\n", resultado);
            }

            printf("Digite o segundo numero: \n");
            scanf("%lf", &b);

            switch (opcao) {
                case 1:
                    resultado = soma(a, b);
                    printf("\n---> O resultado da soma eh = %.2lf <---\n", resultado);
                    break;
                case 2:
                    resultado = sub(a, b);
                    printf("---> O resultado da subtracao eh = %.2lf <---\n", resultado);
                    break;
                case 3:
                    resultado = multi(a, b);
                    printf("\n---> O resultado da multiplicacao eh = %.2lf <---\n", resultado);
                    break;
                case 4:
                    resultado = divisao(a, b);
                    printf("\n---> O resultado da divisao eh = %.2lf <---\n", resultado);
                    break;
                case 5:
                    resultado = pow(a, b);
                    printf("\n---> O resultado da potencia eh = %.2lf <---\n", resultado);
                    break;
            }
        } else if (opcao == 0) {
            printf("\nDesligando calculadora...\n");
        } else {
            printf("\nopcao invalida!! Escolha de 0 a 6!!\n");
        }

        if (opcao != 0) {
            // Pergunta se deseja continuar com o resultado atual
            printf("\nDeseja continuar com o resultado atual (%.2lf)? (1 - Sim / 0 - Nao): ", resultado);
            scanf("%d", &usarResultadoAnterior);
        }

    } while (opcao != 0);

    return 0;
}