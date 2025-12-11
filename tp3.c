/*
* Nome: António Marques
* Turma: TPSICAS0725
* Trabalho: Trabalho 3 - arrays 2D + string
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LARGURA 10
#define COMPRIMENTO 32

int main(void) {
    setlocale(LC_ALL, "pt-PT.UTF-8");
    // Ex 1
    int matriz[LARGURA][LARGURA];
    for (int i = 0; i < LARGURA; i++) {
        for (int j = 0; j < LARGURA; j++){
            matriz[j][i] = (int) rand() % 100;
        }
    }

    int diagP = 0, diagS = 0;
    for (int i = 0; i < LARGURA; i++) {
        diagP += matriz[i][i];
        diagS += matriz[i][LARGURA - i - 1];
    }
    printf("\n\nA soma da diagonal principal é %d ", diagP);
    printf("\nA soma da diagonal secundária é %d ", diagS);

    // Ex2

    char nomes [LARGURA][COMPRIMENTO];

    int continuar = 1;
    int contador = 0;
    printf("\n\n\nIntroduza até %d nomes (0 para terminar)\n", LARGURA);
    do {
        printf("Nome %d: ", contador+1);
        // scanf("%s", nomes[contador]);
        fgets(nomes[contador], COMPRIMENTO, stdin);
        nomes[contador][strcspn(nomes[contador], "\n")] = 0;
        if (nomes[contador][0] == '0') continuar = 0;
        else contador++;
    }while (continuar && contador < LARGURA);

    for (int i = 0; i < contador; i++) printf("\n  Nome %d > %s ", i+1, nomes[i]);



    // Ex3

    char tabela[LARGURA][3][COMPRIMENTO] =
    {{"Alberto","Vieira","123454789"},{"Bernardino","Tomaz","219456789"},
     {"Carlos","Silva","123456729"},{"Deolinda","Rodrigues","213456289"},
     {"Eduardo","Quintas","123496789"},{"Fernando","Pereira","219456789"},
     {"Gualter","Antunes","123456719"},{"Helena","Natalina","213456389"},
     {"Isabel","Marques","123458789"},{"Joaquim","Lopes","213454789"}
    };
    printf("\n\n\n%-16s%-16s%-16s\n\n","Nome","Apelido","Telefone");
    for (int i = 0; i < LARGURA; i++){
        for (int j = 0; j < 3; j++) 
            printf("%-16s",tabela[i][j]);
        printf("\n");
    };



    return 0;
}
