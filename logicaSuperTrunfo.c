#include <stdio.h>
#include <string.h>

int main (){
    //Variáveis para a carta 1
    char estado1; //Estado (A-H) (Exemplo: A01)
    char codigo1[5]; // Código da carta
    char nomeCidade1 [50];//Nome da Cidade
    int populacao1;//População
    float area1; //Área em km²
    float pib1; // PIB
    int pontosTuristicos1; // Número de pontos turisticos

    //Calculados
    float densidadePopulacional1;
    float pibPerCapita1;
    //Função para calcular densidade populacional
    float calcularDensidade(int populacao1, float area1){
        return populacao1/area1;
    }
    
 
    //Variáveis para a carta 2
    char estado2; //Estado (A-H)(Exemplo: B01)
    char codigo2[5]; // Código da carta
    char nomeCidade2 [50];//Nome da Cidade
    int populacao2;//População
    float area2; //Área em km²
    float pib2; // PIB
    int pontosTuristicos2; // Número de pontos turisticos

    //Calculados
    float densidadePopulacional2;
    float pibPerCapita2;
    //Função para calcular densidade populacional
    float calcularDensidade(int populacao2, float area2){
        return populacao2/area2;
    }
    
    
    

    // Instruções para o usuário
    printf ("Vamos cadastrar as informações da carta 1:\n");
    printf ("Digite o Estado (uma letra de A a H):");
    scanf ("%c", &estado1);
    printf ("Digite o código da carta (exemplo: A01): ");
    scanf("%s", codigo1);
    printf ("Digite o Nome da Cidade: ");
    scanf ("%[^\n]", nomeCidade1);
    printf ("Digite a População: ");
    scanf ("%d", &populacao1);
    printf ("Digite a Área (em km²):");
    scanf ("%f", &area1);
    printf ("Digite o PIB (em bilhões de reais): ");
    scanf ("%f", &pib1);
    printf ("Digite o Número de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf ("Vamos cadastrar as informações da carta 2:\n");
    printf ("Digite o Estado (uma letra de A a H):");
    scanf ("%c", &estado2);
    printf ("Digite o código da carta (exemplo: B01): ");
    scanf("%s", codigo2);
    printf ("Digite o Nome da Cidade: ");
    scanf ("%[^\n]", nomeCidade2);
    printf ("Digite a População: ");
    scanf ("%d", &populacao2);
    printf ("Digite a Área (em km²):");
    scanf ("%f", &area2);
    printf ("Digite o PIB (em bilhões de reais): ");
    scanf ("%f", &pib2);
    printf ("Digite o Número de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //Exibição das informações da Carta 1
    printf ("\nCarta 1:\n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %d\n", nomeCidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("PIB: %.2f bilhões de reais \n", pib1);
    printf ("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    //Exibição das informações da Carta 2
    printf ("\nCarta 2:\n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %d\n", nomeCidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f bilhões de reais \n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    carta densidadePopulacional1= calcularDensidade (carta populacao1, carta area1);
    carta pibPerCapita1= calcularpibPerCapita1(pib1, populacao1);

    carta densidadePopulacional2 = calcularDensidade (carta populacao1, carta area1);
    carta pibPerCapita2= calcularpibPerCapita1(pib1, populacao1);

    printf ("Comparando as cartas com base: %s \n\n", atributoEscolhido);

    if (strcmp (atributoEscolhido, "populacao")== 0){
        printf ("População:\n");
        printf ("%s:%d\n", nomeCidade1, populacao1);
        printf("%s:%d\n", nomeCidade2, populacao2);
        if (populacao1> populacao2){
            printf ("Vencedor: %s\n", nomeCidade1);
        } else if (populacao2> populacao1){
            printf ("Vencedor: %s\n", nomeCidade2);
        }else {
            printf ("Empate! \n");
        }
        }

        return 0;
    }





}
