#include <stdio.h>

int main() {
    
    // Definição das variáveis para armazenar as propriedades 
    printf("**CARTA 1**\n");
    printf("\n");

     char estadoA[20] = "";
     char estadoB[20] = "";
     char codigoA[1] = "" ;
     char codigoB[1] = "";
     char cidadeA[20] = "";
     char cidadeB[20] = "";
     int populacaoA = 0;
     int populacaoB = 0;
     float pibA = 0.0;
     float pibB = 0.0;
     float areaA = 0.0;
     float areaB = 0.0;
     int pontosA = 0;
     int pontosB = 0;
     char cidadeVencedora[20] = "";

     //Inserção de Dados
     printf("Digite o nome do Estado: \n");
     //Entrada de dados 
     scanf("%s", &estadoA);

     printf("Digite o código da carta: \n");
     //Entrada de dados 
     scanf("%s", &codigoA);

     printf("Digite o nome da cidade: \n");
     //Entrada de dados 
     scanf("%s", &cidadeA);

     printf("Digite a quantidade da  população: \n");
     //Entrada de dados 
     scanf("%d", &populacaoA);
     
     printf("Digite o Pib: \n");
     //Entrada de dados 
     scanf("%f", &pibA);

     printf("Digite a Àrea: \n");
     //Entrada de dados 
     scanf("%f", &areaA);
 
     printf("Digite a quantidadade de pontos Turísticos: \n");
     //Entrada de dados 
     scanf("%d", &pontosA);

     printf("\n");

     //Saída de Dados
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

     //Inserção de Dados
     printf("Digite o nome do Estado: \n");
     //Entrada de dados 
     scanf("%s", &estadoB);

     //Inserção de Dados
     printf("Digite o código da carta: \n");
     //Entrada de dados 
     scanf("%s", &codigoB);

     //Inserção de Dados
     printf("Digite o nome da cidade: \n");
     //Entrada de dados 
     scanf("%s", &cidadeB);

     //Inserção de Dados
     printf("Digite a quantidade da  população: \n");
     //Entrada de dados 
     scanf("%d", &populacaoB);

     //Inserção de Dados
     printf("Digite o Pib: \n");
     //Entrada de dados 
     scanf("%f", &pibB);

     //Inserção de Dados
     printf("Digite a Àrea: \n");
     //Entrada de dados 
     scanf("%f", &areaB);

     //Inserção de Dados
     printf("Digite a quantidade de pontos Turísticos: \n");
     //Entrada de dados 
     scanf("%d", &pontosB);

     //Saída de Dados
     printf("Estado: %s\n", estadoB);
     printf("Código: %c\n", codigoB);
     printf("Cidade: &s\n", cidadeB);
     printf("População: %d\n", populacaoB);
     printf("Pib: %f\n", pibB);
     printf("Ârea: %f\n", areaB);
     printf("Pontos: %d\n", pontosB);
     printf("\n");
     
     //Comparação de Cartas
       if (populacaoA < populacaoB) {
           printf("Cidade 1 é Vencedora! pois tem a menor população.\n", cidadeVencedora);
       } else {
           printf("Cidade 2 é Vencedora! pois tem a menor população.\n", cidadeVencedora);
       }

        if (pibA > pibB) {
           printf("Cidade 1 tem maior pib.\n", cidadeVencedora);
       } else {
           printf("Cidade 2 tem maior pib.\n", cidadeVencedora);
       }

        if (areaA > areaB) {
           printf("Cidade 1 tem maior área.\n", cidadeVencedora);
       } else {
           printf("Cidade 2 tem maior área.\n", cidadeVencedora);
       }


        if (pontosA > pontosB) {
           printf("Cidade 1 tem maior quantidade de pontos Turísticos.\n");
       } else {
           printf("Cidade 2 tem maior quantidade de pontos Turísticos.\n");
       }
           


    return 0;


}
