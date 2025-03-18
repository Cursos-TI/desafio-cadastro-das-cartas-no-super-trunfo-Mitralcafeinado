#include <stdio.h>

int main() {
    char estado[2], estado2[2]; 
    char codigo[3], codigo2[3]; 
    char cidade[20], cidade2[20];
    int pop, pop2;
    float area, area2;
    float PIB, PIB2; 
    int numpontosturisticos, numpontosturisticos2;
    float densidadepop, densidadepop2;
    float PIBPERCAPTA, PIBPERCAPTA2;
    //CARTA 1

    printf("Insira a letra referente ao Estado (letras de A a H): \n");
    scanf(" %c", estado);
    
    printf("Insira o código do Estado (letras de A a H com o respectivo número de 1 a 8): \n");
    scanf("%s", codigo); 

    printf("Insira a cidade: \n");
    scanf("%s", cidade); 

    printf("Insira a população: \n");
    scanf("%i", &pop); 

    printf("Insira a área do Estado em km²: \n");
    scanf("%f", &area); 

    printf("Insira o PIB do Estado: \n");
    scanf("%f", &PIB); 

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%i", &numpontosturisticos); 

    PIBPERCAPTA = PIB / pop;
    densidadepop = (float) pop / area;

    printf("VAMOS PREENCHER A SEGUNDA CARTA: \n");

    //CARTA 2

           

    printf("Insira a letra referente ao Estado (letras de A a H): \n");
    scanf(" %c", estado2);

    printf("Insira o código do Estado (letras de A a H com o respectivo número de 1 a 8: \n");
    scanf("%s", codigo2);

    printf("Insira a cidade: \n");
    scanf("%s", cidade2); 

    printf("Insira a população: \n");
    scanf("%i", &pop2); 

    printf("Insira a área do Estado em km²: \n");
    scanf("%f", &area2); 

    printf("Insira o PIB do Estado: \n");
    scanf("%f", &PIB2); 

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%i", &numpontosturisticos2); 

    PIBPERCAPTA2 = PIB2 / pop2;
    densidadepop2 = (float) pop2 / area2;
    

    printf("Carta 1\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %i\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %i\n"
        "Densidade populacional: %.2f\n"
        "PIB per capta: %.2f\n", 
        estado[0],
        codigo,
        cidade,
        pop,
        area,
        PIB, 
        numpontosturisticos,
        densidadepop,
        PIBPERCAPTA);

    printf("Carta 2 \n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %d\n"
        "Área: %.2f km²\n"
        "PIB: %.2f\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade populacional: %.2f\n"
        "PIB per capta: %.2f\n",
        estado2[0],
        codigo2,
        cidade2,
        pop2,
        area2,
        PIB2,
        numpontosturisticos2,
        densidadepop2,
        PIBPERCAPTA2);


        // Comparativo das cartas

       

        printf("Comparação de Cartas:"

                "População: Carta 1 venceu %d\n"

               "Área: Carta 1 venceu %d\n"

                "PIB: Carta 1 venceu %d\n"

                "Pontos Turísticos: Carta 1 venceu %d\n"

                "Densidade Populacional: Carta 1 venceu %d\n"

                "PIB per Capita: Carta 1 venceu %d\n"

               "Super Poder: Carta 1 venceu %d",
                pop2 < pop,
                area2 < area,
                PIB2 < PIB,
                numpontosturisticos2 < numpontosturisticos,
                1/(densidadepop2) < 1/(densidadepop),
                PIBPERCAPTA2 < PIBPERCAPTA, ((float)(pop2 +
                area2 +
                PIB2 +
                numpontosturisticos2 +
                1/(densidadepop2) +
                PIBPERCAPTA2) < (float)(pop +
                    area +
                    PIB +
                    numpontosturisticos +
                    1/(densidadepop) +
                    PIBPERCAPTA)));        





    return 0; 


                

}