#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float mediaFinal, nota1, nota2, nota3, nota4;

    printf("Calcule sua media final \ncom o resultado de quatro provas!!!\n");
    printf("Digite sua primeira nota:");
    scanf("%.f", &nota1);

    printf("Digite sua segunda nota:");
    scanf("%.2f", &nota2);

    printf("Digite sua terceira nota:");
    scanf("%.2f", &nota3);

    printf("Digite sua quarta nota:");
    scanf("%.2f", &nota4);

    mediaFinal = (nota1+nota2+nota3+nota4)/ 4;
    if(mediaFinal>= 7.0){
        printf("Voce foi aprovado!! \nSua media final foi: %.2f\n", mediaFinal);
        }else{
        printf("Voce foi reprovado!! \nSua media final foi: %.2f\n", mediaFinal);
        };
    system("pause");
    return 0;
};
