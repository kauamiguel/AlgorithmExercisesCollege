#include <stdio.h>
#include <stdio.h>
#include <math.h>

/*(2.5 pontos). A. Um Colégio está com um novo projeto, no qual deseja ensinar matemática aos alunos do
ensino médio, por meio de algoritmos de resolução de formulas. Assim, você foi contratado para escrever
um algoritmo que receba os valores de ‘a’ e ‘b’, ou seja, os valores dos catetos oposto e adjacente,
respectivamente, de um triângulo. Com esses valores, calcule o valor da hipotenusa, usando o teorema de
Pitágoras, e o valor de seno. Ao final, apresente todos os resultados calculados, com 3 casas depois da
vírgula.
• Teorema de Pitágoras: (hipotenusa) 2 = (cateto oposto) 2 + (cateto adjacente) 2
• Seno: cateto oposto / hipotenusa*/


void triangle(){
    int i, j;
   for (i = 1; i <= 4; ++i) {
    printf("\t");
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
}

float teoremaDePitagoras(float a, float b){
    float x,y;
    x = a*a;
    y = b*b;
    return sqrt(x+y);
}

int main(){

    float catetoOposto,catetoAdjacente,hipotenusa;

    printf("PROGRAMA PARA CALCULAR O TEOREMA DE PITAGORAS!!\n\n");
    triangle();
    printf("\n\nDado o triangulo, informe o valor do cateto oposto ao angulo referente: \n");
    scanf("%f", &catetoOposto);
    printf("Dado o triangulo, informe o valor do cateto adjacente ao angulo referente: \n");
    scanf("%f", &catetoAdjacente);

    hipotenusa = teoremaDePitagoras(catetoOposto,catetoAdjacente);
    printf("TEOREMA: %.3f² + %.3f² = %f \n", catetoOposto,catetoAdjacente,hipotenusa);
    printf("Seno do angulo referente: %.3f \n", (catetoOposto/hipotenusa));

    printf("\n\n\n\n\n");
    return 0;
}