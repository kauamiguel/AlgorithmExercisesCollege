#include <stdio.h>
#include <stdio.h>

/*O usuário deseja verificar se seu ano de nascimento é um ano bissexto ou não. Para tal, é
preciso solicitar o nome do usuário e ano de nascimento, garantindo que seja um ano válido, ou seja, entre
1900 e 2022.
OBS. Para saber se um ano é bissexto, devemos verificar se ele se encaixa em um dos casos:
Caso 1) É um número divisível por 4, mas não é divisível por 100.
Caso 2) É um número divisível por 4, por 100 e por 400.*/

int main(){

    char name[30];
    int anoNascimento;

    printf("Informe o nome: \n");
    scanf("%29s", &name);
    printf("Informe o ano de nascimento: \n");
    scanf("%d", &anoNascimento);
    
    if(anoNascimento < 1900 || anoNascimento > 2022){
        printf("nforme um ano valido: \n");
        scanf("%d", &anoNascimento);
    }

    if(anoNascimento % 4 == 0 && anoNascimento % 100 != 0 || anoNascimento % 4 == 0 && 
    anoNascimento % 100 == 0 && anoNascimento % 400 == 0){
        printf("Ano bissexto. \n");
    } else{
        printf("Ano nao bissexto. \n");
    }
    

    return 0;
}