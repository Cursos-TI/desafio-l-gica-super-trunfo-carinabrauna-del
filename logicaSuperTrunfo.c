#include <stdio.h>

int main() {
    printf("===== JOGO SUPER TRUNFO - CIDADES =====\n");

    // ----------- CARTA 1 -----------
    char Estado1[3];
    char Codigo1[100];
    char Cidade1[100];
    int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;
    float Densidade1;

    // ----------- CARTA 2 -----------
    char Estado2[3];
    char Codigo2[100];
    char Cidade2[100];
    int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;
    float Densidade2;

    // ===== Cadastro da Carta 1 =====
    printf("---- Cadastro da Carta 1 ----\n");
    printf("Digite o Estado (ex: SP): ");
    scanf("%2s", Estado1);

    printf("Digite o Código da cidade: ");
    scanf("%99s", Codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %99[^\n]", Cidade1);

    printf("Digite a População: ");
    scanf("%d", &Populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &Area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &Pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    // Cálculo da densidade
    Densidade1 = (Area1 > 0) ? Populacao1 / Area1 : 0;

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

    // Cálculo da densidade
    Densidade2 = (Area2 > 0) ? Populacao2 / Area2 : 0;

    // ===== Menu interativo =====
    int escolha;
    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demográfica\n");
    printf("5 - Pontos Turísticos\n");
    printf("Escolha o atributo para comparar (1-5): ");
    scanf("%d", &escolha);

    printf("\n===== RESULTADO =====\n");

    switch (escolha) {
        case 1:
            printf("Atributo escolhido: População\n");
            printf("%s: %d habitantes\n", Cidade1, Populacao1);
            printf("%s: %d habitantes\n", Cidade2, Populacao2);
            if (Populacao1 > Populacao2)
                printf("🏆 %s venceu!\n", Cidade1);
            else if (Populacao2 > Populacao1)
                printf("🏆 %s venceu!\n", Cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", Cidade1, Area1);
            printf("%s: %.2f km²\n", Cidade2, Area2);
            if (Area1 > Area2)
                printf("🏆 %s venceu!\n", Cidade1);
            else if (Area2 > Area1)
                printf("🏆 %s venceu!\n", Cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões\n", Cidade1, Pib1);
            printf("%s: %.2f bilhões\n", Cidade2, Pib2);
            if (Pib1 > Pib2)
                printf("🏆 %s venceu!\n", Cidade1);
            else if (Pib2 > Pib1)
                printf("🏆 %s venceu!\n", Cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo escolhido: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", Cidade1, Densidade1);
            printf("%s: %.2f hab/km²\n", Cidade2, Densidade2);
            if (Densidade1 > Densidade2)
                printf("🏆 %s venceu!\n", Cidade1);
            else if (Densidade2 > Densidade1)
                printf("🏆 %s venceu!\n", Cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("%s: %d pontos\n", Cidade1, PontosTuristicos1);
            printf("%s: %d pontos\n", Cidade2, PontosTuristicos2);
            if (PontosTuristicos1 > PontosTuristicos2)
                printf("🏆 %s venceu!\n", Cidade1);
            else if (PontosTuristicos2 > PontosTuristicos1)
                printf("🏆 %s venceu!\n", Cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    printf("\n===== FIM DO JOGO =====\n");
    return 0;
}
