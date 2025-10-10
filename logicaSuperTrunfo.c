#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    printf("===== SUPER TRUNFO - CIDADES =====\n\n");

    // ----------- CARTA 1 -----------
    char Estado1[3];
    char Codigo1[100];
    char Cidade1[100];
    int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;
    float Densidade1; // novo atributo

    // ----------- CARTA 2 -----------
    char Estado2[3];
    char Codigo2[100];
    char Cidade2[100];
    int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;
    float Densidade2; // novo atributo

    // ===== Cadastro da Carta 1 =====
    printf("---- Cadastro da Carta 1 ----\n");
    printf("Digite o Estado (ex: SP): ");
    scanf("%2s", Estado1);

    printf("Digite o Código da cidade: ");
    scanf("%99s", Codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %99[^\n]", Cidade1); // lê o nome completo da cidade (com espaços)

    printf("Digite a População: ");
    scanf("%d", &Populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &Area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &Pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    // Cálculo da densidade demográfica
    if (Area1 > 0)
        Densidade1 = Populacao1 / Area1;
    else
        Densidade1 = 0;

    // ===== Cadastro da Carta 2 =====
    printf("\n---- Cadastro da Carta 2 ----\n");
    printf("Digite o Estado (ex: RJ): ");
    scanf("%2s", Estado2);

    printf("Digite o Código da cidade: ");
    scanf("%99s", Codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %99[^\n]", Cidade2);

    printf("Digite a População: ");
    scanf("%d", &Populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &Area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &Pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    // Cálculo da densidade demográfica
    if (Area2 > 0)
        Densidade2 = Populacao2 / Area2;
    else
        Densidade2 = 0;

    // ===== Exibição dos resultados =====
    printf("\n===== RESULTADOS =====\n");

    // População
    if (Populacao1 > Populacao2)
        printf("A cidade %s tem maior população.\n", Cidade1);
    else
        printf("A cidade %s tem maior população.\n", Cidade2);

    // Área
    if (Area1 > Area2)
        printf("A cidade %s tem maior área.\n", Cidade1);
    else
        printf("A cidade %s tem maior área.\n", Cidade2);

    // PIB
    if (Pib1 > Pib2)
        printf("A cidade %s tem maior PIB.\n", Cidade1);
    else
        printf("A cidade %s tem maior PIB.\n", Cidade2);

    // Pontos turísticos 
    if (PontosTuristicos1 > PontosTuristicos2)
        printf("A cidade1 tem mais pontos turísticos.\n");
    else
        printf("A cidade2 tem mais pontos turísticos.\n");

    // Densidade demográfica
    printf("\n===== Densidade Demográfica =====\n");
    printf("%s: %.2f hab/km²\n", Cidade1, Densidade1);
    printf("%s: %.2f hab/km²\n", Cidade2, Densidade2);

    if (Densidade1 > Densidade2)
        printf("A cidade %s tem maior densidade demográfica.\n", Cidade1);
    else if (Densidade2 > Densidade1)
        printf("A cidade %s tem maior densidade demográfica.\n", Cidade2);
    else
        printf("Ambas as cidades possuem a mesma densidade demográfica.\n");

    // ===== Comparação final (exemplo: PIB) =====
    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
    printf("Atributo utilizado para comparação: PIB (em bilhões)\n\n");

    if (Pib1 > Pib2)
        printf("%s venceu! Possui o maior PIB.\n", Cidade1);
    else if (Pib2 > Pib1)
        printf("%s venceu! Possui o maior PIB.\n", Cidade2);
    else
        printf("Empate! Ambas possuem o mesmo PIB.\n");

    return 0;
}
