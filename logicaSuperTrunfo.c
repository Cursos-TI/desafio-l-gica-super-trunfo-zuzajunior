#include <stdio.h>

int main() {
    
    // Definição das variáveis para armazenar as propriedades 
    printf("**CARTA 1**\n");
    printf("\n");

     char estadoA[20];
     char estadoB[20];
     char codigoA;
     char codigoB ;
     char cidadeA[20] = "";
     char cidadeB[20]= "";
     int populacaoA = 0;
     int populacaoB = 0;
     float pibA = 0.0;
     float pibB = 0.0;
     float areaA = 0.0;
     float areaB = 0.0;
     int pontosA = 0;
     int pontosB = 0;

     //
     printf("Digite o nome do Estado: \n");
     //Entrada de dados 
     scanf("%s", &estadoA);

     printf("Digite o código da carta: \n");
     scanf("%s", &codigoA);

     printf("Digite o nome da cidade: \n");
     scanf("%s", &cidadeA);

     printf("Digite a quantidade da  população: \n");
     scanf("%d", &populacaoA);

     printf("Digite o Pib: \n");
     scanf("%f", &pibA);

     printf("Digite a Àrea: \n");
     scanf("%f", &areaA);

     printf("Digite a quantidadade de pontos Turísticos: \n");
     scanf("%d", &pontosA);

     printf("\n");


     printf("Estado: %s\n", estadoA);
     printf("Código: %c\n", codigoA);
     printf("Cidade: %s\n", cidadeA);
     printf("População: %d\n", populacaoA);
     printf("Pib: %f\n", pibA);
     printf("Ârea: %f\n", areaA);
     printf("Pontos: %d\n", pontosA);
     printf("\n");

     printf("**CARTA 2**\n");
     printf("\n");

     printf("Digite o nome do Estado: \n");
     scanf("%s", &estadoB);

     printf("Digite o código da carta: \n");
     scanf("%s", &codigoB);

     printf("Digite o nome da cidade: \n");
     scanf("%s", &cidadeB);

     printf("Digite a quantidade da  população: \n");
     scanf("%d", &populacaoB);

     printf("Digite o Pib: \n");
     scanf("%f", &pibB);

     printf("Digite a Àrea: \n");
     scanf("%f", &areaB);

     printf("Digite a quantidade de pontos Turísticos: \n");
     scanf("%d", &pontosB);

     printf("Estado: %s\n", estadoB);
     printf("Código: %c\n", codigoB);
     printf("Cidade: &s\n", cidadeB);
     printf("População: %d\n", populacaoB);
     printf("Pib: %f\n", pibB);
     printf("Ârea: %f\n", areaB);
     printf("Pontos: %d\n", pontosB);
     printf("\n");
     

     if (populacaoA > populacaoB) {
           printf("Cidade 1 tem maior população.\n");
       } else {
           printf("Cidade 2 tem maior população.\n");
       }

       if (pibA > pibB) {
           printf("Cidade 1 tem maior pib.\n");
       } else {
           printf("Cidade 2 tem maior pib.\n");
       }

       if (areaA > areaB) {
           printf("Cidade 1 tem maior área.\n");
       } else {
           printf("Cidade 2 tem maior área.\n");
       }


    if (pontosA > pontosB) {
           printf("Cidade 1 tem maior quantidade de pontos Turísticos.\n");
       } else {
           printf("Cidade 2 tem maior quantidade de pontos Turísticos.\n");
       }




    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
   

    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;


}
