#include <stdio.h>
#include <string.h>

struct CartaSuperTrunfo {
    char estado[50];
    int codigo;
    char nomeCidade[50];
    int populacao;
    float area;
    double pib;
    int pontosTuristicos;
};

void mostrarCarta(struct CartaSuperTrunfo carta) {
    printf("\n--- Carta Super Trunfo ---\n");
    printf("Estado: %s\n", carta.estado);
    printf("Código da Carta: %d\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: R$ %.2lf\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    struct CartaSuperTrunfo rio = {
        "RJ", 1, "Rio de Janeiro", 6748000, 1182.3, 407000000000.00, 25
    };

    struct CartaSuperTrunfo sp = {
        "SP", 2, "São Paulo", 12330000, 1521.1, 760000000000.00, 30
    };

    printf("Carta 1:");
    mostrarCarta(rio);

    printf("\nCarta 2:");
    mostrarCarta(sp);

    int pontosRio = 0, pontosSP = 0;

    // Comparação: População
    if (rio.populacao > sp.populacao) pontosRio++;
    else if (sp.populacao > rio.populacao) pontosSP++;

    // Comparação: Área
    if (rio.area > sp.area) pontosRio++;
    else if (sp.area > rio.area) pontosSP++;

    // Comparação: PIB
    if (rio.pib > sp.pib) pontosRio++;
    else if (sp.pib > rio.pib) pontosSP++;

    // Comparação: Pontos turísticos
    if (rio.pontosTuristicos > sp.pontosTuristicos) pontosRio++;
    else if (sp.pontosTuristicos > rio.pontosTuristicos) pontosSP++;

    printf("\nResultado da Comparação:\n");
    printf("Pontos do Rio de Janeiro: %d\n", pontosRio);
    printf("Pontos de São Paulo: %d\n", pontosSP);

    if (pontosRio > pontosSP)
        printf("Vencedor: Rio de Janeiro!\n");
    else if (pontosSP > pontosRio)
        printf("Vencedor: São Paulo!\n");
    else
        printf("Empate!\n");

    return 0;
}