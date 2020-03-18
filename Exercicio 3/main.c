#include <stdio.h>
#include <stdlib.h>

/*
Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma dos
elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos
das diagonais principal e secundária são todas iguais. Dada uma matriz quadrada
dimensão MxM, verifique se ela é um quadrado mágico através de um algoritmo.
Exemplo de matriz quadrado mágico:
[
8 0 7
4 5 6
3 10 2
]
*/

int main()
{
    int i, j, quadradoMagico[3][3] = {{8,0,7},{4,5,6},{3,10,2}};

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("[%d],[%d]", quadradoMagico[i][j]);
        };
    };




    return 0;
}
