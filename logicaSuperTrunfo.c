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



    // ===== Comparações =====
    printf("\n===== RESULTADOS =====\n");

    // População
    if (Populacao1 > Populacao2)
        printf("A Cidade1 tem maior população\n");
    else
        printf("A Cidade2 tem maior população.\n");

    // Área
    if (Area1 > Area2)
        printf("A Cidade1 tem maior área\n");
        else
        printf("A Cidade2 tem maior populaçãomaior área.\n");

    // PIB
    if (Pib1 > Pib2)
        printf("A Cidade1 tem maior PIB\n");
    else
        printf("A Cidade2 tem maior PIB.\n");

    // Pontos turísticos 
    if (PontosTuristicos1 > PontosTuristicos2)
        printf("A Cidade1 tem mais Pontos Turísticos\n");
    else
        printf("A Cidade2 tem mais pontos turísticos.\n");

        // ===== Comparação =====
    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");

    // Atributo escolhido: PIB
    printf("Atributo utilizado para comparação: PIB (em bilhões)\n\n");
    printf("%s (PIB: %.2f) VS %s (PIB: %.2f)\n\n", Cidade1, Pib1, Cidade2, Pib2);

    if (Pib1 > Pib2) {
        printf("Cidade1 venceu! Possui o maior PIB.\n", Cidade1);
    } else 
        printf("Cidade2 venceu! Possui o maior PIB.\n", Cidade2);
            return 0;
}

 

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

