#include <stdio.h>


int main (){

    int qtd_casas_rainha;
    int cont_casas_rainha = 0;
      
    printf("Quantas casas deseja movimentar a Rainha ?: \n");
    scanf("%d", &qtd_casas_rainha);

    do {
        if (qtd_casas_rainha > 8 || qtd_casas_rainha < 1){
            printf("Você não se moveu! \n");
            break;
        } else {
            printf("Esquerda \n");
            cont_casas_rainha++;    
        }
        
    } while (cont_casas_rainha < qtd_casas_rainha);


    int qtd_casas_torre;
    int cont_casas_torre = 0;


    printf("Quantas casas deseja movimentar a Torre ?: \n");
    scanf("%d", &qtd_casas_torre);


    while (cont_casas_torre < qtd_casas_torre){
        if (qtd_casas_torre > 8 || qtd_casas_torre < 1){
            printf("Você não se moveu! \n");
            break;
        } else {
            printf("Direita \n");
            cont_casas_torre++;
        }

    }

    int qtd_casas_bispo;

    printf("Quantas casas deseja movimentar a Torre ?: \n");
    scanf("%d", &qtd_casas_bispo);

    for (int cont = 0; cont < qtd_casas_bispo; cont++ ){
        if (qtd_casas_bispo > 8 || qtd_casas_bispo < 1){
            printf("Você não se moveu! \n");
        } else {
            printf("Cima, Direita \n");
        }

    }
    printf("\n### Movimento Cavalo ###\n");
    printf("1 - Direita \n");
    printf("2 - Esquerda \n");
    printf("Pra que lado deseja mover o cavalo?: ");
    int lado_cavalo;
    scanf("%d", &lado_cavalo);
    printf("\n");
    
    int movimento_cavalo = 1;

    switch (lado_cavalo){
        case 1:

            while (movimento_cavalo--){

                for(int i = 0; i < 2; i++){
                    printf("Cima \n");
                }
                printf("Direita\n");
                break;
            }
            break;
        case 2:
            while (movimento_cavalo--){

                for(int i = 0; i < 2; i++){
                    printf("Cima \n");
                }
                printf("Esquerda\n");
                break;
            }
            break;

        default:
            printf("Você não se moveu!");
    }

    

    return 0;
}