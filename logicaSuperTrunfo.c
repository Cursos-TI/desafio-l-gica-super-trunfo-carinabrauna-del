#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    printf("===== SUPER TRUNFO - CIDADES =====\n\n");

    // ----------- CARTA 1 -----------
    char Estado1[3];
    char Codigo1[100];
    char Cidade1[1000];
    int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;

    // ----------- CARTA 2 -----------
    char Estado2[3];
    char Codigo2[100];
    char Cidade2[1000];
    int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;

    // ===== Cadastro da Carta 1 =====
    printf("---- Cadastro da Carta 1 ----\n");
    printf("Digite o Estado (ex: SP): ");
    scanf("%2s", Estado1);

    printf("Digite o Código da cidade: ");
    scanf("%99s", Codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%999s", Cidade1);

    printf("Digite a População: ");
    scanf("%d", &Populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &Area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &Pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    // ===== Cadastro da Carta 2 =====
    printf("\n---- Cadastro da Carta 2 ----\n");
    printf("Digite o Estado (ex: RJ): ");
    scanf("%2s", Estado2);

    printf("Digite o Código da cidade: ");
    scanf("%99s", Codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%999s", Cidade2);

    printf("Digite a População: ");
    scanf("%d", &Populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &Area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &Pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    // ===== Exibição dos dados =====
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões\n", Pib1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões\n", Pib2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);

    // ===== Comparações =====
    printf("\n===== RESULTADOS =====\n");

    // População
    if (Populacao1 > Populacao2)
        printf("Maior População: %s (%d habitantes)\n", Cidade1, Populacao1);
    else if (Populacao2 > Populacao1)
        printf("Maior População: %s (%d habitantes)\n", Cidade2, Populacao2);
    else
        printf("As duas cidades têm a mesma população.\n");

    // Área
    if (Area1 > Area2)
        printf("Maior Área: %s (%.2f km²)\n", Cidade1, Area1);
    else if (Area2 > Area1)
        printf("Maior Área: %s (%.2f km²)\n", Cidade2, Area2);
    else
        printf("As duas cidades têm a mesma área.\n");

    // PIB
    if (Pib1 > Pib2)
        printf("Maior PIB: %s (%.2f bilhões)\n", Cidade1, Pib1);
    else if (Pib2 > Pib1)
        printf("Maior PIB: %s (%.2f bilhões)\n", Cidade2, Pib2);
    else
        printf("As duas cidades têm o mesmo PIB.\n");

    // Pontos turísticos (corrigido)
    if (PontosTuristicos1 > PontosTuristicos2)
        printf("Mais Pontos Turísticos: %s (%d pontos)\n", Cidade1, PontosTuristicos1);
    else if (PontosTuristicos2 > PontosTuristicos1)
        printf("Mais Pontos Turísticos: %s (%d pontos)\n", Cidade2, PontosTuristicos2);
    else
        printf("As duas cidades têm o mesmo número de pontos turísticos.\n");
    return 0;
}

 
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
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