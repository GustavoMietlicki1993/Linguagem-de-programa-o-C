#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], i;
    char fizz = "Fizz", buzz = "Buzz";
    for( i=0;i<=10;i++){
            vetor[i] = i;
        if(vetor[i]%3==0){
            printf(fizz," \n");
        }else if(vetor[i]%3==0 & vetor[i]%5==0){
            printf(fizz,buzz," \n");
        }else{
            printf(vetor[i]," \n");
            };

    };
     printf("Fim do nosso programiguia. ");

    system("pause");
    return 0;
}
