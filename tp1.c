/*
* Nome: António Marques
* Turma: TPSICAS0725
* Trabalho: Trabalho 1 - Revisões Sequencial
*/

#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "pt-PT.UTF-8");
    // Ex 1
    printf("\nEx1:\n");
    printf("olá mundo\n");

    // Ex 2
    printf("\nEx2:\n");
    int num1;
    printf("\nIntroduza um número inteiro: ");
    scanf("%i", &num1);
    printf("\nIntroduziu o número: %i", num1);
    
    // Ex3
    printf("\nEx3:\n");
    int num2, num3;
    printf("\n\nIntroduza um número inteiro: ");
    scanf("%i", &num2);
    printf("\nIntroduza outro número inteiro: ");
    scanf("%i", &num3);
    printf("\nA soma de %i com %i é igual a %i", num2, num3, num2+num3);
    
    // Ex4
    printf("\nEx4:\n");
    float num4, soma = 0.0;
    int vezes = 4;
    for (int i = 0; i < vezes; i++){
        printf("\n%i Introduza um número inteiro: ",i+1);
        scanf("%f", &num4);
        soma += num4;
    }
    printf("\nA média é %.2f", soma/vezes);
    
    // Ex5
    printf("\nEx5:\n");
    float num5;
    printf("\n\nIntroduza o número de metros: ");
    scanf("%f", &num5);
    printf("\n%.2f metros são %.2f centímetros", num5, num5*100);
    
    // Ex6
    printf("\nEx6:\n");
    float num6;
    float pi=3.14159;
    printf("\n\nIntroduza o raio de círculo: ");
    scanf("%f", &num6);
    printf("\nUm círculo de raio %.2f tem área de %.2f ", num6, num6*num6*pi);
    
    // Ex7
    printf("\nEx7:\n");
    float num7;
    printf("\n\nIntroduza o lado do quadrado: ");
    scanf("%f", &num7);
    printf("\nO dobro de um quadrado de lado %.2f tem área de %.2f ", num7, num7*num7*2);
    
    // Ex8
    printf("\nEx8:\n");
    float num8, num9;
    printf("\n\nQual o salário hora: ");
    scanf("%f", &num8);
    printf("\n\nHoras trabalhadas no mês: ");
    scanf("%f", &num9);
    printf("\nO salário do mês e' %.2f ", num8*num9);
    
    // Ex9
    printf("\nEx9:\n");
    float num10;
    printf("\n\nTemperatura em Fahrenheit: ");
    scanf("%f", &num10);
    printf("\nA temperatura Fahrenheit %.2f corresponde a %.2f Celsius.", num10, 5*(num10-32)/9);
    
    // Ex10
    printf("\nEx10:\n");
    float num11;
    printf("\n\nTemperatura em Celsius: ");
    scanf("%f", &num11);
    printf("\nA temperatura Celsius %.2f corresponde a %.2f Fahrenheit", num11, 32+9*num11/5);
    
    // Ex11
    printf("\nEx11:\n");
    int num12, num13;
    float num14;
    printf("\nIntroduza um número inteiro: ");
    scanf("%i", &num12);
    printf("\nIntroduza outro número inteiro: ");
    scanf("%i", &num13);
    printf("\nIntroduza um número real: ");
    scanf("%f", &num14);
    printf("\nProduto do dobro do primeiro com metade do segundo %.2f ", 2*num12*(float)num13/2);
    printf("\nSoma do triplo do primeiro com o terceiro %.2f ", 3*num12 + num14);
    printf("\nO terceiro elevado ao cubo %.2f", num14*num14*num14);
    
    // Ex12 
    printf("\nEx12:\n");
    float altura;
    printf("\nIntroduza a sua altura em metros: ");
    scanf("%f", &altura);
    altura = altura * 72.7 - 58;          // 
    printf("\nO seu peso ideal é %.2f", altura);
    
    // Ex13  
    printf("\nEx13:\n");
    float altura2;
    char sexo;
    printf("\nIntroduza a sua altura em metros: ");
    scanf("%f", &altura2);
    printf("\nIndique se é homem ou senhora h/s: ");
    scanf(" %c", &sexo);
    if (sexo == 's' || sexo == 'S') {
        altura2 = altura2 * 62.1 - 44.7;          // 
    } else {  
        altura2 = altura2 * 72.7 - 58;
    }          // 
    printf("\nO seu peso ideal e' %.2f", altura2);
    
    // Ex14
    printf("\nEx14:\n");
    float pescado, excesso = 0.0, multa = 0.0;
    char sair;
    int continuar = 1;
    while (continuar) {
        printf("Peixe de hoje (em kg)? ");
        scanf("%f", &pescado);
        if (pescado > 50) {
            excesso += pescado - 50;
            multa += 4 * (pescado - 50);
        }
        printf("\nContinuar ou terminar (c/t): ");
        scanf(" %c", &sair);
        if (sair == 't' || sair == 'T') {
            printf("pescou mais %.2f kg do que devia e a multa e' de %.2f reais", excesso, multa);
            continuar = 0;
        }  
    }
    
    // Ex15
    printf("\nEx15:\n");
    int IR = 11;
    int INSS = 8;
    int SIND = 5;
    float salario, horas, salhora;
    float dIR, dINSS, dSIND; 
    printf("Quanto ganha por hora? ");
    scanf("%f", &salhora);
    printf("Quantas horas trabalhou? ");
    scanf("%f", &horas);
    salario = salhora * horas;
    printf("Salário Bruto: %.2f \n", salario);
    dIR = salario * IR /100;
    dINSS = salario * INSS /100;
    dSIND = salario * SIND /100;
    printf("- IR (%d %%): %.2f euros\n- INSS (%d %%): %.2f euros\n- Sindicato (%d %%): %.2f euros\n", IR, dIR, INSS, dINSS, SIND, dSIND);
    salario -= dIR + dINSS + dSIND;
    printf("= Salário Liquido: %.2f euros", salario);
    
    // Ex16
    printf("\nEx16:\n");
    float PRECOLATA = 80.;
    int LATA = 54; // 3 * 18
    float metrosq, preco; 
    int latas;
    printf("Quantos metros quadrados? ");
    scanf("%f", &metrosq);
    latas = (int)(metrosq/LATA);
    if ((int)metrosq%LATA > 0) latas++; 
    printf("Sao %d latas com o custo total de %.2f reais.", latas, (float)latas*PRECOLATA);
    
    return 0;
}