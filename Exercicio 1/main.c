#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
Uma certa empresa fez uma pesquisa de mercado para saber se as pessoas
gostaram ou não do seu último produto lançado. Para isto, coletou o sexo do entrevistado
e a sua resposta (sim ou não). Sabendo que foram entrevistadas 150 pessoas, fazer um
algoritmo que calcule e mostre ao final:
• O número de pessoas que responderam sim;
• O número de pessoas que responderam não;
• A percentagem de pessoas do sexo feminino que responderam sim;
• A percentagem de pessoas do sexo masculino que responderam não;
Para a resposta SIM/NÃO. Utilize uma variável do tipo CHAR, que armazena S ou N,
ou use uma variável do tipo INT que armazena 1 (para SIM) e 2 (para NÃO).
*/

int main(void){
    int hRespSim =0;                        //Homens que responderam SIM.
    float mRespSim =0;                        //Mulheres que responderam SIM.
    float pRhN =0;                            //Porcentagem de resposta do sexo masculino que responderam NAO.
    float pRmS =0;                            //Porcentagem de resposta do sexo masculino que responderam SIM.
    char nome[13];                       //Nome do Usuario.
    char sexo[2];                        //Sexo do Usuario.
    char respostaUsuario[3];             //Resposta do usuario.
    int pessoa=0, numeroDeSim=0, numeroDeNao=0;

    printf("Digite seu nome, \nseu sexo e sua resposta(SIM ou NAO) \nnos campos abaixo:\n");

    //Loop com o FOR que fara a contagem e limitará a quantidade de usuarios em 150.

    for(pessoa = 0;pessoa<149; pessoa++){

        printf("Seu nome:\n");
        scanf("%s", nome);
        printf("\n O nome do usuario = %s \n", nome);

        printf("Seu sexo(M para MASCULINO ou F para FEMININO):\n");
        scanf("%s", sexo);
        printf("\n O sexo = %s \n", sexo );

        printf("Sua resposta(SIM ou NAO):\n");
        scanf("%s", respostaUsuario);
        printf("\n Resposta usuario = %s \n", respostaUsuario);

        if((strcmp(respostaUsuario,"SIM")== 0) && (strcmp(sexo,"M" )== 0)){
            printf("caiu no if respostaUsuario masculino \n");
            numeroDeSim++;
            hRespSim++;

            }else if((strcmp(respostaUsuario,"NAO")==0) && (strcmp(sexo,"M")== 0)){
                printf("caiu no if respostaUsuario masculino \n");
                numeroDeNao++;
                pRhN++;

            }else if((strcmp(respostaUsuario,"SIM")==0) && (strcmp(sexo,"F")==0)){
                printf("caiu no if respostaUsuario feminino \n");
                numeroDeSim++;
                mRespSim++;

            }else if((strcmp(respostaUsuario,"NAO")==0) && (strcmp(sexo,"F")==0)){
                printf("caiu no if respostaUsuario feminino \n");
                numeroDeNao++;

            }else{
                printf("Deu algum erro");
                };
    };
    printf("\n");

    //Calculo para ter a porcentagem de pessoas do sexo feminino que responderam SIM:
    pRmS = (mRespSim/150) * 100;

    //Calculo para ter a porcentagem de pessoas do sexo masculino que responderam NAO:
    pRhN = (pRhN / 150)* 100;

    printf("O numero de pessoas que responderam SIM foi de %d \n", numeroDeSim);

    printf("O numero de pessoas que responderam NAO foi de: %d \n" , numeroDeNao);

    printf("A porcentagem de pessoas do sexo feminino que responderam SIM: %.2f %%\n", pRmS);

    printf("A porcentagem de pessoas do sexo masculino que responderam NAO: %.2f %%\n", pRhN);

    system("pause");
    return 0;
};
