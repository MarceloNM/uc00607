/*
* Nome: António Marques
* Turma: TPSICAS0725
* Trabalho: Trabalho 2 - Revisões Decisão
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

void ler_num13(int num);


int main(void) {
    setlocale(LC_ALL, "pt-PT.UTF-8");
    // Ex 1
    printf("\nEx1:\n");
    int num11, num12;
    printf("Introduza um número inteiro: ");
    scanf("%d", &num11);
    printf("\nIntroduza outro número inteiro: ");
    scanf("%d", &num12);
    if (num11 > num12) printf("%d é maior que %d", num11, num12);
    else printf("%d é maior que %d", num12, num11);

    // Ex 2
    printf("\nEx2:\n");
    int num2;
    printf("Introduza um número inteiro: ");
    scanf("%d", &num2);
    if (num2>0) printf("%d é um número positivo", num2);
    else 
        if (num2<0) printf("%d é um número negativo",num2);
        else  printf("%d é o número zero", num2);

    // Ex 3
    printf("\nEx3:\n");
    char letra3;
    printf("Qual o seu sexo (M/F): ");
    scanf(" %c", &letra3);
    if (letra3 == 'M' || letra3 == 'm') printf("M - Masculino");
    else
        if (letra3 == 'F' || letra3 == 'f') printf("F - Femimino");
        else printf("Sexo Inválido");
    
    // Ex 4
    printf("\nEx4:\n");
    char l4;
    printf("Escreva uma letra: ");
    scanf(" %c", &l4);
    if ((l4 > 64 && l4 < 91) || (l4 > 96 && l4 < 123)) {
        switch (l4) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                printf("'%c' é uma vogal", l4);
                break;
            default:
                printf("'%c' é uma consoante", l4);
                break;
        };
    } else printf("não é uma letra");


    // Ex 5
    printf("\nEx5:\n");
    float f51, f52, f53;
    printf("\nPrimeira nota parcial: ");
    scanf(" %f", &f51);
    printf("\nSegunda nota parcial: ");
    scanf(" %f", &f52);
    f53 = (f51 + f52)/2;
    if (f53 == 10) printf ("\nAprovado com distinção!(%.2f)",f53);
    else 
        if (f53 >= 7) printf ("\nAprovado!(%.2f)",f53);
        else printf ("\nReprovado!(%.2f)",f53);

    
    // Ex 6
    printf("\nEx6:\n");
    int f61, f62, f63;
    printf("\nPrimeiro número inteiro: ");
    scanf(" %d", &f61);
    printf("\nSegundo número inteiro: ");
    scanf(" %d", &f62);
    printf("\nTerceiro número inteiro: ");
    scanf(" %d", &f63);
    if (f61 > f62)
        if (f61 > f63) printf("\n%d é o maior", f61);
        else 
            if (f63 > f61) printf("\n%d é o maior", f63);
            else  printf("\n%d e %d são iguais e os maiores", f61, f63);
    else
        if (f62 > f61)
            if (f62 > f63) printf("\n%d é o maior", f62);
            else
                if (f63 > f62) printf("\n%d é o maior", f63);
                else printf("\n%d e %d são iguais e os maiores", f62, f63);
        else  // aqui f61 e f62 têm de ser iguais
            if (f63 > f61) printf("\n%d é o maior", f63);
            else
                if (f61 > f63) printf("\n%d e %d são iguais e os maiores", f61, f62);
                else  printf("\nOs três números são iguais a %d", f61);
    
    // Ex 7
    printf("\nEx7:\n");
    int n7, n71, n72, n73;
    printf("\nPrimeiro número inteiro: ");
    scanf("%d", &n71);
    printf("\nSegundo número inteiro: ");
    scanf("%d", &n72);
    printf("\nTerceiro número inteiro: ");
    scanf("%d", &n73);
    if (n71 < n72) { 
        n7 = n72;
        n72 = n71;
        n71 = n7;
    }
    if (n71 < n73) {
        n7 = n73;
        n73 = n71;
        n71 = n7;
    }
    if (n72 < n73) {
        n73 = n72;
    }
    printf("\n%d é o maior", n71);
    printf("\n%d é o menor", n73);

    // Ex 8
    printf("\nEx8:\n");
    float f81, f82, f83;
    printf("\nPreço do primeiro produto: ");
    scanf("%f", &f81);
    printf("\nPreço do segundo produto: ");
    scanf("%f", &f82);
    printf("\nPreço do terceiro produto: ");
    scanf("%f", &f83);
    if (f81 < f82)
        if (f81 < f83) printf("O primeiro é o melhor");
        else 
            if (f83 < f81) printf("O terceiro é o melhor");
            else  printf("O primeiro e o terceiro são igualmente bons");
    else
        if (f82 < f81)
            if (f82 < f83) printf("O segundo é o melhor");
            else
                if (f83 < f82) printf("O terceiro é o melhor");
                else printf("O segundo e o terceiro são igualmente bons");
        else  // aqui f81 e f82 têm de ser iguais
            if (f83 < f81) printf("O terceiro é o melhor");
            else
                if (f81 < f83) printf("O primeiro e o segundo são igualmente bons");
                else  printf("Qualquer dos produtos é bom");

    
    // Ex 9
    printf("\nEx9:\n");
    int n9, n91, n92, n93;
    printf("\nPrimeiro número inteiro: ");
    scanf("%d", &n91);
    printf("\nSegundo número inteiro: ");
    scanf("%d", &n92);
    printf("\nTerceiro número inteiro: ");
    scanf("%d", &n93);
    if (n91 < n92) { 
        n9 = n92;
        n92 = n91;
        n91 = n9;
    }
    if (n91 < n93) {
        n9 = n93;
        n93 = n91;
        n91 = n9;
    }
    if (n92 < n93) {
        n9 = n93;
        n93 = n92;
        n92 = n9;
    }
    printf("\nNumeros por ordem decrescente: %d %d %d", n91, n92, n93);

    // Ex 10
    printf("\nEx10:\n");
    char opcao10;
    printf("Qual é o seu turno de estudo: ");
    printf("\nM - matutino  V - vespertino  N - noturno ");
    scanf(" %c", &opcao10);
    switch (opcao10) {
        case 'M': case 'm':
            printf("Bom dia!");
            break;
        case 'V': case 'v':
            printf("Boa tarde!");
            break;
        case 'N': case 'n':
            printf("Boa noite!");
            break;
        default:
            printf("Valor inválido!");
            break;
    }
    


    // Ex 11
    printf("\nEx11:\n");
    int ano11;
    printf("Ano para saber se é bissexto: ");
    scanf("%d", &ano11);
    if (ano11%100 == 0)
        if (ano11%400 == 0) printf("%d é bissexto.", ano11);
        else  printf("%d não é bissexto.", ano11);
    else
        if (ano11%4 == 0) printf("%d é bissexto.", ano11);
        else  printf("%d não é bissexto.", ano11);


    // Ex 12
    printf("\nEx12:\n");
    char c12[11];
    char s121, s122;
    char f12 = '1'; // flag de correto
    int d12, m12, a12;
    printf("Insira uma data (dd/mm/aaaa) ");
    scanf("%s", c12);
    d12 = (c12[0] - 48) * 10 + c12[1] - 48;
    m12 = (c12[3] - 48) * 10 + c12[4] - 48;
    a12 = (c12[6] - 48) * 1000 + (c12[7] - 48) * 100 +(c12[8] - 48) * 10 + c12[9] - 48;
    printf("\n%s -> %d, %d, %d\n", c12, d12, m12, a12);
    if (d12 > 0 && d12 <32) {  
        switch (m12) {
            case 1: case 3: case 5: case 7:
            case 8: case 10: case 12:
                break;
            case 4: case 6: case 9: case 11:
                if (d12 > 30) f12 = '0';
                break;
            case 2:
                //printf("%d d12", d12);
                if (d12 == 29)  // presume ano bissexto
                    if (a12%100 == 0) {
                        if (a12%400 != 0) f12 = '0';
                    } else {
                        if (a12%4 != 0) f12 = '0';
                    }
                break;
            default:
                f12 = '0';
                break;
        }
    } else f12 = '0';
    if (f12 == '0') printf("data errada");
    else  printf("data correta");



    // Ex 13
    printf("\nEx13:\n");
    int ateste13[] = {326,300,100,320,310,305,301,101,311,111,25,20,10,21,11,1,7,16};  // 18
    int num13;
    for (int i = 0; i < 18; i++) ler_num13(ateste13[i]);
    printf("\nInsira um número inteiro menor do que 1000: ");
    scanf("%d", &num13);
    if (num13 < 1000)
        ler_num13(num13);
    else printf("\n%d fora do pedido",num13);

    // Ex 14
    printf("\nEx14:\n");
    float f141, f142, f143, f144;
    printf("\nPrimeira nota parcial: ");
    scanf(" %f", &f141);
    printf("\nSegunda nota parcial: ");
    scanf(" %f", &f142);
    printf("\nTerceira nota parcial: ");
    scanf(" %f", &f143);
    f144 = (f141 + f142 + f143)/3;
    if (f144 == 10) printf ("\nAprovado com distinção!(%.2f)",f144);
    else 
        if (f144 >= 7) printf ("\nAprovado!(%.2f)",f144);
        else printf ("\nReprovado!(%.2f)",f144);



    // Ex 15
    printf("\nEx15:\n");
    int trocos[] = {100,50,10,5,1}; // 5
    char palavras[5][10] = {"cem", "cinquenta","dez","cinco","um"};  
    int num15;
    int conta = 0;
    printf("\nInsira valor a levantar (inteiro positivo): ");
    scanf("%d", &num15);
    if (num15>1) {
        for (int i = 0; i < 5; i++ ){
            if (num15 >= trocos[i]){
                conta = num15/trocos[i];
                num15 = num15 - conta * trocos[i];
                if (conta > 1) printf("%d notas de %s ", conta, &palavras[i]);
                else  printf("%d nota de %s ", conta, &palavras[i]);
                conta = 0;
            }
            if (num15 > 0) printf("+ ");
        }
    }
    else printf("\nValor inválido.");

    // Ex 16
    printf("\nEx16:\n");
    int num16;
    printf("\nInsira um número inteiro: ");
    scanf("%d", &num16);
    if (num16%2 == 0) printf("O número %d é par", num16);
    else printf("O número %d é ímpar", num16);





    // Ex 17
    printf("\nEx17:\n");
    float fnum17;
    int inum17;
    printf("\nInsira um número: ");
    scanf("%f", &fnum17);
    inum17 = floor(fnum17);
    if (fnum17 == inum17)  printf("O número %.2f é inteiro", fnum17);
    else printf("O número %.2f é decimal", fnum17);



    return 0;
}

// função para o exercício 13
void ler_num13(int num) {
    int uni, dez, cen;
    cen = abs(num);  
    uni = cen % 10;
    cen = cen - uni;
    dez = cen % 100;
    cen = cen - dez;
    dez = dez / 10;
    cen = cen / 100;
    printf("\n %d = ",num);
    if (num < 0) printf("menos ");
    else if (num == 0) printf("zero!");
    if (cen > 0){
        if (cen > 1) printf("%d centenas",cen);
        else printf("1 centena",cen);
        if (dez > 0) {
            if (uni > 0) printf(", ");
            else printf(" e ");
            if (dez > 1) printf("%d dezenas",dez);
            else printf("%d dezena",dez);
        }
        if (uni > 0)
            if (uni > 1)  printf(" e %d unidades",uni);
            else printf(" e %d unidade",uni);
    }
    else if (dez > 0) {
        if (dez > 1) printf("%d dezenas",dez);
        else printf("%d dezena",dez);
        if (uni > 0)
            if (uni > 1)  printf(" e %d unidades",uni);
            else printf(" e %d unidade",uni);
    }
    else if (uni > 0)
        if (uni > 1)  printf("%d unidades",uni);
        else printf("%d unidade",uni);

}

