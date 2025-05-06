#include <stdio.h>


int main() {
    //Criando variáveis
    int opcao;
    int numeroDeCasasTorre = 5;
    int numeroDeCasasBispo = 5;
    int numeroDeCasasDama = 8;

    do{
        //Selecionar o movimento
        printf("\nSelecione uma opção\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Dama\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);

        
        if(opcao == 1){ //Movimento da torre
            while(numeroDeCasasTorre > 0){
                printf("Direita\n");
                numeroDeCasasTorre--;
            }
            //Reiniciando contagem de casas da torre
            int numeroDeCasasTorre = 5;

        }else if(opcao == 2){ //Movimento do bispo
            do
            {
                printf("Cima\n");
                printf("Direita\n");
                numeroDeCasasBispo--;
            } while (numeroDeCasasBispo > 0);
            //Reiniciando contagem de casas do bispo
            int numeroDeCasasBispo = 5;
            
        }else if(opcao == 3){ //Movimento da rainha
            for(int i = 1; i <= numeroDeCasasDama; i++){
                printf("Esquerda\n");
            }
            //Reiniciando contagem de casas da dama
            int numeroDeCasasDama = 8;
        }

    }while(opcao != 4);

    return 0;
}
