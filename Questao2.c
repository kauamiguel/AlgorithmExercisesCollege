#include <stdio.h>
#include <stdio.h>

/*Deve ser construído um menu, com switch case, que dê acesso as 3 questões. Ou seja,
para executar a questão A, digite ‘A’; para questão B, digite ‘B’ e; para a questão C, digite ‘C’. Caso a
opção desejada não seja válida, imprimir “Opcao invalida”.*/

int main(){
    char resposta;

    printf("Informe a questao desejada: \n");
    scanf(" %c", &resposta);

    switch(resposta){
        case 'A':
            printf("Questao A.\n");
            break;
        case 'B':
            printf("Questao B.\n");
            break;
        case 'C':
            printf("Questao C.\n");    
            break;
        default:
            printf("Opcao invalida: \n");  
            break;  
    }


    return 0;
}