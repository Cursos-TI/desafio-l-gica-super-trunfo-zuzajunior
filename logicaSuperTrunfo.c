#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    printf("**CARTA 1**\n");
    printf("\n");

     char estado[20];
     char codigo[2] ;
     int carta = 0;
     char nome[20] = "";
     int quantidade = 0;
     float pib = 0.0;
     float area = 0.0;
     int pontos = 0;


     printf("Digite o nome do Estado: \n");
     scanf("%s", &estado);

     printf("Digite o código da carta: \n");
     scanf("%c %d", &codigo, &carta);

     printf("Digite o nome da cidade: \n");
     scanf("%s", &nome);

     printf("Digite a quantidade da  população: \n");
     scanf("%d", &quantidade);

     printf("Digite o Pib: \n");
     scanf("%f", &pib);

     printf("Digite a Àrea: \n");
     scanf("%f", &area);

     printf("Digite os pontos Turísticos>\n");
     scanf("%d", &pontos);


     printf("Estado: %s\n", estado);
     printf("Código: %c\n", codigo);
     printf("População: %d", quantidade);
     printf("Pib: %f\n", pib);
     printf("Ârea: \n", area);
     printf("Pontos: %d\n", pontos);

     printf("**CARTA 2**\n");

     printf("Digite o nome do Estado: \n");
     scanf("%s", &estado);

     printf("Digite o código da carta: \n");
     scanf("%c %d", &codigo, &carta);

     printf("Digite o nome da cidade: \n");
     scanf("%s", &nome);

     printf("Digite a quantidade da  população: \n");
     scanf("%d", &quantidade);

     printf("Digite o Pib: \n");
     scanf("%f", &pib);

     printf("Digite a Àrea: \n");
     scanf("%f", &area);

     printf("Digite os pontos Turísticos>\n");
     scanf("%d", &pontos);


     printf("Estado: %s\n", estado);
     printf("Código: %c\n", codigo);
     printf("População: %d", quantidade);
     printf("Pib: %f\n", pib);
     printf("Ârea: \n", area);
     printf("Pontos: %d\n", pontos);







    
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
