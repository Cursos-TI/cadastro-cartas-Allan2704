#include <stdio.h>

int main() {
    int escolha;

    // Cidade 1
    char estado1[50] = "SP";
    int codigo1 = A1;
    char nome1[50] = "São Paulo";
    int populacao1 = 12325232;
    float area1 = 1521.11;
    float pib1 = 567.8;
    int pontos1 = 15;

    // Cidade 2
    char estado2[] = "RJ";
    int codigo2 = B2;
    char nome2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1182.3;
    float pib2 = 240.5;
    int pontos2 = 20;

    printf("Super Trunfo de Cidades\n");
    printf("Carta 1: [%d] %s - %s\n", codigo1, nome1, estado1);
    printf("Carta 2: [%d] %s - %s\n", codigo2, nome2, estado2);

    printf("Escolha a característica para competir:\n");
    printf("1 - População\n");
    printf("2 - Área (km²)\n");
    printf("3 - PIB (bilhões)\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("Digite: ");
    scanf("%d", &escolha);

    printf("\nComparando %s com %s...\n", nome1, nome2);

    // Comparação
    if (escolha == 1) {
        if (populacao1 > populacao2)
            printf("%s venceu na População!\n", nome1);
        else if (populacao1 < populacao2)
            printf("%s venceu na População!\n", nome2);
        else
            printf("Empate na População!\n");
    }
    else if (escolha == 2) {
        if (area1 > area2)
            printf("%s venceu na Área!\n", nome1);
        else if (area1 < area2)
            printf("%s venceu na Área!\n", nome2);
        else
            printf("Empate na Área!\n");
    }
    else if (escolha == 3) {
        if (pib1 > pib2)
            printf("%s venceu no PIB!\n", nome1);
        else if (pib1 < pib2)
            printf("%s venceu no PIB!\n", nome2);
        else
            printf("Empate no PIB!\n");
    }
    else if (escolha == 4) {
        if (pontos1 > pontos2)
            printf("%s venceu em Pontos Turísticos!\n", nome1);
        else if (pontos1 < pontos2)
            printf("%s venceu em Pontos Turísticos!\n", nome2);
        else
            printf("Empate em Pontos Turísticos!\n");
    }
    else {
        printf("Opção inválida!\n");
    }

    return 0;
}
