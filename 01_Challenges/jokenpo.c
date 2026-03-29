#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice = 0, computerChoice = 0;
    srand(time(0));
 
    printf("### Jokenpô - Pedra, Papel ou Tesoura ###\n");
    printf("\n");

    while (playerChoice != 1) {  
        printf("MENU INICIAL:\n");
        printf("(1) Iniciar o jogo\n");
        printf("(2) Regras do jogo\n");
        printf("(3) Sair\n");
        printf("\n");
        printf("Escolha uma opção: ");
            scanf("%d", &playerChoice);
        printf("\n");

        switch (playerChoice) {
            case 1:
                printf("Iniciando o jogo...\n");
                printf("\n");
                break;
            case 2:
                printf("Regras do jogo:\n");
                printf("PEDRA vence TESOURA\n");
                printf("TESOURA vence PAPEL\n");
                printf("PAPEL vence PPEDRA\n");
                printf("Em caso de empate, ninguém ganha!\n");
                printf("\n");
                printf("Pressione ENTER para voltar ao MENU INICIAL.\n");
                getchar();
                getchar();
                continue;
            case 3:
                printf("Saindo do jogo... Até a próxima!\n");
                printf("Pressione ENTER para sair.\n");
                getchar();
                getchar();
                return 0;
            default:
                printf("Opção inválida, tente novamente...\n");
                continue;
        }
    }

    while (playerChoice != 2) {
        printf("Escolha sua jogada:\n");
        printf("(1) PEDRA\n");
        printf("(2) PAPEL\n");
        printf("(3) TESOURA\n");
        printf("\n");
        printf("Opção: ");
            scanf("%d", &playerChoice);
        printf("\n");

        computerChoice = (rand() % 3) + 1; // Gera número aleatório entre 1 e 3 para o computador

        switch (playerChoice) {
            case 1:
                printf("Você escolheu PEDRA.\n");
                break;
            case 2:
                printf("Você escolheu PAPEL.\n");
                break;
            case 3:
                printf("Você escolheu TESOURA.\n");
                break;
            default:
                printf("Opção inválida, tente novamente...\n");
                continue;;
        }

        switch (computerChoice) {
            case 1:
                printf("O computador escolheu PEDRA.\n");
                break;
            case 2:
                printf("O computador escolheu PAPEL.\n");
                break;
            case 3:
                printf("O computador escolheu TESOURA.\n");
                break;
        }

        if (computerChoice == playerChoice) {
            printf("\n### EMPATE! ###\n");
        } else if (playerChoice == 1 && computerChoice == 3 || // Pedra vence Tesoura
                playerChoice == 2 && computerChoice == 1 || // Papel vence Pedra
                playerChoice == 3 && computerChoice == 2) { // Tesoura vence Papel
            printf("\n### VOCÊ VENCEU! ###\n");
        } else {
            printf("\n### O COMPUTADOR VENCEU! ###\n");
        }
        
        printf("\n");

        printf("(1) Tentar novamente?\n");
        printf("(2) Sair\n");
        printf("\n");
        printf("Escolha uma opção: ");
            scanf("%d", &playerChoice);
        printf("\n");
        
        switch (playerChoice) {
            case 1:
                printf("Iniciando o jogo...\n");
                printf("\n");
                continue;
            case 2:
                printf("Saindo do jogo... Até a próxima!\n");
                printf("Pressione ENTER para sair.\n");
                getchar();
                getchar();
                break;
            default:
                printf("Opção inválida, saindo do jogo!\n");
                break;
        }
    }    
        
    return 0;
}