#include <stdio.h>
int main() {
    char state1[20] = "standart", state2[20] = "standart", cityname1[20] = "standart", cityname2[20] = "standart", chartercode1[10] = "standart", chartercode2[10] = "standart";
    int turisticpoints1 = 0, turisticpoints2 = 0, menu = 0, menu1 = 0, menu2 = 0;
    unsigned long int population1 = 0, population2 = 0;
    float area1 = 0.0, area2 = 0.0, PIB1 = 0.0, PIB2 = 0.0, populationaldensity1 = 0.0, populationaldensity2 = 0.0, PIBperC1 = 0.0, PIBperC2 = 0.0, superpower1 = 0.0, superpower2 = 0.0, inversedensity1 = 0.0, inversedensity2 = 0.0;

        printf("Super Trunfo - Cartas de Cidades Brasileiras\n");
            printf("\n");

        while (1) {          
        printf("MENU INICIAL\n");
            printf("\n");
                printf("(1) Iniciar o jogo\n");
                printf("(2) Regras do jogo\n");
                printf("(3) Sair\n");
            printf("\n");
                printf("Escolha uma opção: ");
                    scanf("%d", &menu);
                printf("\n");
                    switch (menu) {
                    case 1:
                        printf("Insira os dados das cartas:\n");
                        printf("\n");
                            printf("Carta 1:\n");
                            printf("\n Estado: ");
                                scanf("%s", state1);
                            printf("\n Código: ");
                                scanf("%s", chartercode1);
                            printf("\n Nome da cidade: ");
                                scanf("%s", cityname1);
                            printf("\n População: ");
                                scanf("%lu", &population1);
                            printf("\n Área (em km²): ");
                                scanf("%f", &area1);
                            printf("\n PIB (bilhões de reais): ");
                                scanf("%f", &PIB1);
                            printf("\n Número de pontos turísticos: ");
                                scanf("%d", &turisticpoints1);
                        printf("\n");
                            printf("Carta 2:\n");
                            printf("\n Estado: ");
                                scanf("%s", state2);
                            printf("\n Código: ");
                                scanf("%s", chartercode2);
                            printf("\n Nome da cidade: ");
                                scanf("%s", cityname2);
                            printf("\n População: ");
                                scanf("%lu", &population2);
                            printf("\n Área (em km²): ");
                                scanf("%f", &area2);
                            printf("\n PIB (bilhões de reais): ");
                                scanf("%f", &PIB2);
                            printf("\n Número de pontos turísticos: ");
                                scanf("%d", &turisticpoints2);
                            printf("\n");
                        break;
                    case 2:
                        printf("Regras do jogo:\n");
                            printf("Cada carta representa uma cidade brasileira com os seguintes atributos:\n");
                            printf("- População\n");
                            printf("- Área (em km²)\n");
                            printf("- PIB (bilhões de reais)\n");
                            printf("- Número de pontos turísticos\n");
                            printf("- Densidade populacional (habitantes por km²)\n");
                            printf("- PIB per capita (reais)\n");
                            printf("- Super Poder (soma ponderada dos atributos)\n");
                            printf("\n");
                            printf("Pressione ENTER para voltar ao MENU INICIAL.\n");
                            getchar();
                            getchar();
                        continue;
                    case 3:
                        printf("Saindo do jogo. Até a próxima!\n");
                        printf("Pressione ENTER para sair.\n");
                            getchar();
                            getchar();
                        return 0;
                    default:
                        printf("Opção inválida, tente novamente.\n");
                        continue;
                    }
        
        populationaldensity1 = (float) population1 / area1;
        populationaldensity2 = (float) population2 / area2;
        inversedensity1 = 1.0 / populationaldensity1;
        inversedensity2 = 1.0 / populationaldensity2;   
        PIBperC1 = (float) PIB1 / population1;
        PIBperC2 = (float) PIB2 / population2;
        superpower1 = (float) population1 + area1 + PIB1 + turisticpoints1 + PIBperC1 + inversedensity1;
        superpower2 = (float) population2 + area2 + PIB2 + turisticpoints2 + PIBperC2 + inversedensity2;

        printf("Confira os dados das cidades %s (%s) e %s (%s):\n", cityname1, state1, cityname2, state2);
            printf("\n");
            printf("Carta 1:\n");
                printf("Estado: %s\n", state1);
                printf("Código: %s\n", chartercode1);
                printf("Nome da cidade: %s\n", cityname1);
                printf("População: %lu\n", population1);
                printf("Área: %.2f km²\n", area1);
                printf("PIB: %.2f\n", PIB1);
                printf("Número de pontos turísticos: %d\n", turisticpoints1);
                printf("Densidade populacional: %.2f hab/km²\n", populationaldensity1);
                printf("PIB per capita: %.2f reais\n", PIBperC1);
            printf("\n");
                printf("Carta 2:\n");
                printf("Estado: %s\n", state2);
                printf("Código: %s\n", chartercode2);
                printf("Nome da cidade: %s\n", cityname2);
                printf("População: %lu\n", population2);
                printf("Área: %.2f km²\n", area2);
                printf("PIB: %.2f\n", PIB2);
                printf("Número de pontos turísticos: %d\n", turisticpoints2);
                printf("Densidade populacional: %.2f hab/km²\n", populationaldensity2);
                printf("PIB per capita: %.2f reais\n", PIBperC2);
            printf("\n");

        printf("Selecione um ATRIBUTO para comparar as cidades: %s (%s) e %s (%s):\n", cityname1, state1, cityname2, state2);
        printf("\n");
            printf("(1) POPULAÇÃO\n");
            printf("(2) ÁREA\n");
            printf("(3) PIB\n");
            printf("(4) PONTOS TURÍSTICOS\n");
            printf("(5) DENSIDADE POPULACIONAL\n");
            printf("(6) PIB PER CAPITA\n");
            printf("(7) SUPER PODER\n");
            printf("(8) Encerrar o jogo.\n");
        printf("\n");        
            printf("Escolha o PRIMEIRO atributo: ");
                scanf("%d", &menu1);
            printf("\n");
            printf("Escolha o SEGUNDO atributo: ");
                scanf("%d", &menu2);
            printf("\n");

        switch (menu1) {
            case 1:    
                printf("Comparação das cartas - ATRIBUTO: POPULAÇÃO\n");
                    printf("Carta 1, cidade de %s (%s) - População: %lu\n", cityname1, state1, population1);
                    printf("Carta 2, cidade de %s (%s) - População: %lu\n", cityname2, state2, population2);
                        if (population1 > population2) {
                            printf("Vencedor: Carta 1 - %s (%s)\n", cityname1, state1);
                        } else if (population2 > population1) {
                            printf("Vencedor: Carta 2 - %s (%s)\n", cityname2, state2);
                        } else {
                            printf("Empate na população!\n");
                        }
                    printf("\n");
                break;
            case 2:    
                printf("Comparação das cartas - ATRIBUTO: ÁREA\n");
                    printf("Carta 1, cidade de %s (%s) - Área: %.2f km²\n", cityname1, state1, area1);
                    printf("Carta 2, cidade de %s (%s) - Área: %.2f km²\n", cityname2, state2, area2);
                        if (area1 > area2) {
                            printf("Vencedor: Carta 1 - %s (%s)\n", cityname1, state1);
                        } else if (area2 > area1) {
                            printf("Vencedor: Carta 2 - %s (%s)\n", cityname2, state2);
                        } else {
                            printf("Empate na área!\n");
                        }
                    printf("\n");
                break;
            case 3:
                printf("Comparação das cartas - ATRIBUTO: PIB\n");
                    printf("Carta 1, cidade de %s (%s) - PIB: %.2f\n", cityname1, state1, PIB1);
                    printf("Carta 2, cidade de %s (%s) - PIB: %.2f\n", cityname2, state2, PIB2);
                        if (PIB1 > PIB2) {
                            printf("Vencedor: Carta 1 - %s (%s)\n", cityname1, state1);
                        } else if (PIB2 > PIB1) {
                            printf("Vencedor: Carta 2 - %s (%s)\n", cityname2, state2);
                        } else {
                            printf("Empate no PIB!\n");
                        }
                    printf("\n");
                break;
            case 4:
                printf("Comparação das cartas - ATRIBUTO: PONTOS TURÍSTICOS\n");
                    printf("Carta 1, cidade de %s (%s) - Pontos Turísticos: %d\n", cityname1, state1, turisticpoints1);
                    printf("Carta 2, cidade de %s (%s) - Pontos Turísticos: %d\n", cityname2, state2, turisticpoints2);
                        if (turisticpoints1 > turisticpoints2) {
                            printf("Vencedor: Carta 1 - %s (%s)\n", cityname1, state1);
                        } else if (turisticpoints2 > turisticpoints1) {
                            printf("Vencedor: Carta 2 - %s (%s)\n", cityname2, state2);
                        } else {
                            printf("Empate nos pontos turísticos!\n");
                        }
                    printf("\n");
                break;
            case 5:
                printf("Comparação das cartas - ATRIBUTO: DENSIDADE POPULACIONAL\n");
                    printf("Carta 1, cidade de %s (%s) - Densidade Populacional: %.2f hab/km²\n", cityname1, state1, populationaldensity1);
                    printf("Carta 2, cidade de %s (%s) - Densidade Populacional: %.2f hab/km²\n", cityname2, state2, populationaldensity2);
                        if (populationaldensity1 < populationaldensity2) {
                            printf("Vencedor: Carta 1 - %s (%s)\n", cityname1, state1);
                        } else if (populationaldensity2 < populationaldensity1) {
                            printf("Vencedor: Carta 2 - %s (%s)\n", cityname2, state2);
                        } else {
                            printf("Empate na densidade populacional!\n");
                        }
                    printf("\n");
                break;
            case 6:
                printf("Comparação das cartas - ATRIBUTO: PIB PER CAPITA\n");
                    printf("Carta 1, cidade de %s (%s) - PIB per capita: %.2f reais\n", cityname1, state1, PIBperC1);
                    printf("Carta 2, cidade de %s (%s) - PIB per capita: %.2f reais\n", cityname2, state2, PIBperC2);
                        if (PIBperC1 > PIBperC2) {
                            printf("Vencedor: Carta 1 - %s (%s)\n", cityname1, state1);
                        } else if (PIBperC2 > PIBperC1) {
                            printf("Vencedor: Carta 2 - %s (%s)\n", cityname2, state2);
                        } else {
                            printf("Empate no PIB per capita!\n");
                        }
                    printf("\n");
                break;
            case 7:
                printf("Comparação das cartas - ATRIBUTO: SUPER PODER\n");
                    printf("Carta 1, cidade de %s (%s) - Super Poder: %.2f\n", cityname1, state1, superpower1);
                    printf("Carta 2, cidade de %s (%s) - Super Poder: %.2f\n", cityname2, state2, superpower2);
                        if (superpower1 > superpower2) {
                            printf("Vencedor: Carta 1 - %s (%s)\n", cityname1, state1);
                        } else if (superpower2 > superpower1) {
                            printf("Vencedor: Carta 2 - %s (%s)\n", cityname2, state2);
                        } else {
                            printf("Empate no Super Poder!\n");
                        }
                    printf("\n");
                break;
            case 8:
                printf("Saindo do jogo. Até a próxima!\n");
                    return 0;
                break;
            default:
                printf("Opção inválida. Nenhum atributo selecionado.\n");
            }

        switch (menu2) {
            case 1:    
                printf("Comparação das cartas - ATRIBUTO: POPULAÇÃO\n");
                    printf("Carta 1, cidade de %s (%s) - População: %lu\n", cityname1, state1, population1);
                    printf("Carta 2, cidade de %s (%s) - População: %lu\n", cityname2, state2, population2);
                        if (population1 > population2) {
                            printf("Vencedor: Carta 1 - %s (%s)\n", cityname1, state1);
                        } else if (population2 > population1) {
                            printf("Vencedor: Carta 2 - %s (%s)\n", cityname2, state2);
                        } else {
                            printf("Empate na população!\n");
                        }
                    printf("\n");
                break;
            case 2:    
                printf("Comparação das cartas - ATRIBUTO: ÁREA\n");
                    printf("Carta 1, cidade de %s (%s) - Área: %.2f km²\n", cityname1, state1, area1);
                    printf("Carta 2, cidade de %s (%s) - Área: %.2f km²\n", cityname2, state2, area2);
                        if (area1 > area2) {
                            printf("Vencedor: Carta 1 - %s (%s)\n", cityname1, state1);
                        } else if (area2 > area1) {
                            printf("Vencedor: Carta 2 - %s (%s)\n", cityname2, state2);
                        } else {
                            printf("Empate na área!\n");
                        }
                    printf("\n");
                break;
            case 3:
                printf("Comparação das cartas - ATRIBUTO: PIB\n");
                    printf("Carta 1, cidade de %s (%s) - PIB: %.2f\n", cityname1, state1, PIB1);
                    printf("Carta 2, cidade de %s (%s) - PIB: %.2f\n", cityname2, state2, PIB2);
                        if (PIB1 > PIB2) {
                            printf("Vencedor: Carta 1 - %s (%s)\n", cityname1, state1);
                        } else if (PIB2 > PIB1) {
                            printf("Vencedor: Carta 2 - %s (%s)\n", cityname2, state2);
                        } else {
                            printf("Empate no PIB!\n");
                        }
                    printf("\n");
                break;
            case 4:
                printf("Comparação das cartas - ATRIBUTO: PONTOS TURÍSTICOS\n");
                    printf("Carta 1, cidade de %s (%s) - Pontos Turísticos: %d\n", cityname1, state1, turisticpoints1);
                    printf("Carta 2, cidade de %s (%s) - Pontos Turísticos: %d\n", cityname2, state2, turisticpoints2);
                        if (turisticpoints1 > turisticpoints2) {
                            printf("Vencedor: Carta 1 - %s (%s)\n", cityname1, state1);
                        } else if (turisticpoints2 > turisticpoints1) {
                            printf("Vencedor: Carta 2 - %s (%s)\n", cityname2, state2);
                        } else {
                            printf("Empate nos pontos turísticos!\n");
                        }
                    printf("\n");
                break;
            case 5:
                printf("Comparação das cartas - ATRIBUTO: DENSIDADE POPULACIONAL\n");
                    printf("Carta 1, cidade de %s (%s) - Densidade Populacional: %.2f hab/km²\n", cityname1, state1, populationaldensity1);
                    printf("Carta 2, cidade de %s (%s) - Densidade Populacional: %.2f hab/km²\n", cityname2, state2, populationaldensity2);
                        if (populationaldensity1 < populationaldensity2) {
                            printf("Vencedor: Carta 1 - %s (%s)\n", cityname1, state1);
                        } else if (populationaldensity2 < populationaldensity1) {
                            printf("Vencedor: Carta 2 - %s (%s)\n", cityname2, state2);
                        } else {
                            printf("Empate na densidade populacional!\n");
                        }
                    printf("\n");
                break;
            case 6:
                printf("Comparação das cartas - ATRIBUTO: PIB PER CAPITA\n");
                    printf("Carta 1, cidade de %s (%s) - PIB per capita: %.2f reais\n", cityname1, state1, PIBperC1);
                    printf("Carta 2, cidade de %s (%s) - PIB per capita: %.2f reais\n", cityname2, state2, PIBperC2);
                        if (PIBperC1 > PIBperC2) {
                            printf("Vencedor: Carta 1 - %s (%s)\n", cityname1, state1);
                        } else if (PIBperC2 > PIBperC1) {
                            printf("Vencedor: Carta 2 - %s (%s)\n", cityname2, state2);
                        } else {
                            printf("Empate no PIB per capita!\n");
                        }
                    printf("\n");
                break;
            case 7:
                printf("Comparação das cartas - ATRIBUTO: SUPER PODER\n");
                    printf("Carta 1, cidade de %s (%s) - Super Poder: %.2f\n", cityname1, state1, superpower1);
                    printf("Carta 2, cidade de %s (%s) - Super Poder: %.2f\n", cityname2, state2, superpower2);
                        if (superpower1 > superpower2) {
                            printf("Vencedor: Carta 1 - %s (%s)\n", cityname1, state1);
                        } else if (superpower2 > superpower1) {
                            printf("Vencedor: Carta 2 - %s (%s)\n", cityname2, state2);
                        } else {
                            printf("Empate no Super Poder!\n");
                        }
                    printf("\n");
                break;
            case 8:
                printf("Saindo do jogo. Até a próxima!\n");
                    return 0;
                break;
            default:
                printf("Opção inválida. Nenhum atributo selecionado.\n");
            }

        }
        printf("Fim do Super Trunfo.\n");
    return 0;
}
