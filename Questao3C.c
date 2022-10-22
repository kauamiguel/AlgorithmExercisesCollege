#include <stdio.h>

/*A Secretaria de Estado de Obras do Distrito Federal está preocupada com os atrasos das
obras que estão sendo realizadas e pediu que fosse feito um levantamento sobre a real situação de cada
uma. Por isso, você foi contratado para fazer um algoritmo que receba: o nome da obra, o mês de início e o
mês de término, e código que identifica a sua situação, conforme a tabela abaixo:*/

int main(){

    char nomeDaObra[30];
    int id = 0, mesIncio,MesFinal;


    printf("Infome o nome da Obra: \n");
    scanf("%s", &nomeDaObra);

    printf("Informe o mes de inicio: \n");
    scanf("%d", &mesIncio);

    printf("Informe o mes de termino: \n");
    scanf("%d", &MesFinal);

    while(id < 1 || id > 6){
        printf("Informe o ID da obra: \n");
        scanf("%d", &id);
    }
    
    printf("Nome da obra: %s\n", nomeDaObra);
    
    switch (id)
    {
    case 1:
        printf("Situacao: Obra concluida. \n");
        break;
    case 2:
        printf("Situacao: Porblemas no projeto. \n");
        break;
    case 3:
        printf("Situacao: Atraso no repasse financeiro. \n");
        break;
    case 4:
        printf("Situacao: Greve dos trabalhadores. \n");
        break;
    case 5:
        printf("Situacao: Falta de materiais \n");
        break;
    case 6:
        printf("Situacao: Falta de equipamentos. \n");
        break;                    
    }
    
    printf("Tempo de execucao: %d. \n", (MesFinal - mesIncio));

    return 0;
}