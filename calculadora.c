// Jhonatan de Sant'Anna Brum - 1240110333
// José Victor Ferreira da Silva - 1240111232

#include <stdio.h>
#include <math.h>

#define RESET "\033[0m"
#define VERMELHO "\033[1;31m"
#define VERDE "\033[0;32m"
#define AZUL "\033[1;34m"
#define DOURADO "\033[1;33m"

void menu() {
    printf(AZUL "\nEscolha uma operacao entre dois numeros: \n\n"RESET);
    printf(VERDE "1 - Soma\n" RESET);
    printf(VERDE "2 - Subtracao\n" RESET);
    printf(VERDE "3 - Multiplicacao\n" RESET);
    printf(VERDE "4 - Divisao\n" RESET);
    printf(VERDE "5 - Potencia\n" RESET);
    printf(VERDE "6 - Raiz Quadrada\n" RESET);
    printf(VERMELHO "0 - Sair\n" RESET);
}

double soma(double a, double b){
    return a + b;
}

double sub(double a, double b){
    return a - b;
}

double multi(double a, double b){
    return a * b;
}

double divisao(double a, double b){
    if (b == 0 ){
        printf(VERMELHO"!!!Erro: nao pode dividir por 0!!! \n"RESET);
        return 0;
    }
    return a / b;
}

int main() {
    int opcao;
    double a, b, resultado;
    
    do {
        menu();
        printf(AZUL"\nDigite o numero da operacao: \n"RESET);
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1: // soma
                printf(AZUL"Digite o primeiro numero: \n"RESET);
                scanf("%lf", &a);
                printf(AZUL"Digite o segundo numero: \n"RESET);
                scanf("%lf", &b);
                resultado = soma(a, b);
                printf(DOURADO"\n---> O resultado da soma entre eles eh = %.2lf <---\n", resultado, RESET);
                break;
            
            case 2: // subtração
                printf(AZUL"Digite o primeiro numero: \n"RESET);
                scanf("%lf", &a);
                printf(AZUL"Digite o segundo numero: \n"RESET);
                scanf("%lf", &b);
                resultado = sub(a, b);
                printf(DOURADO"---> O resultado da subtracao eh = %.2lf <---\n", resultado, RESET);
                break;

            case 3: // multiplicação
                printf(AZUL"Digite o primeiro numero: \n"RESET);
                scanf("%lf", &a);
                printf(AZUL"Digite o segundo numero \n"RESET);
                scanf("%lf", &b);
                resultado = multi(a, b);
                printf(DOURADO"\n---> O resultado da multiplicacao eh = %.2lf <---\n", resultado,RESET);
                break;

            case 4: // divisão
                printf(AZUL"Digite o primeiro numero: \n"RESET);
                scanf("%lf",&a);
                printf(AZUL"Digite o segundo numero: \n"RESET);
                scanf("%lf",&b);
                resultado = divisao(a, b);
                printf(DOURADO"\n---> O resultadado da divisao entre os dois numeros eh = %.2lf <---\n", resultado,RESET);
                break;

            case 5: // potenciação
                printf(AZUL"Digite a base: \n"RESET);
                scanf("%lf",&a);
                printf(AZUL"Digite a potencia: \n"RESET);
                scanf("%lf",&b);
                resultado = pow(a, b);
                printf(DOURADO"\n---> o resultado da potencia eh = %.2lf <---\n", resultado,RESET);
                break;

            case 6: // raiz quadrada
                printf(AZUL"Digite o numero que quer saber a raiz quadrada: \n"RESET);
                scanf("%lf", &a);
                if (a < 0){
                    printf(VERMELHO"!!!Erro: nao existe raiz para numero negativo!!!\n"RESET);
                } else{
                resultado = sqrt(a);
                printf(DOURADO"\n---> O resultado da raiz quadrada desse numero eh: %.2lf <---\n", resultado,RESET);
                }
                break;

            case 0: // para finalizar
                printf(VERMELHO"\nDesligando calculadora...\n"RESET);
                break;

            default: // para quando escolherem uma opção q n existe
                printf(VERMELHO"\nOpcao invalida!! Escolha de 0 a 6!!\n"RESET);
                break;
        }
    } while (opcao != 0);
    
    return 0;
}
