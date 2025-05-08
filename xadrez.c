#include <stdio.h>

void movimentoTorre(int numeroDeCasas){
    if(numeroDeCasas > 0){
        printf("Direita\n");
        movimentoTorre(numeroDeCasas - 1);
    }
}

void movimentoBispo(int numeroDeCasas){
    if(numeroDeCasas > 0){
        printf("Cima\n");
        printf("Direita\n");
        movimentoBispo(numeroDeCasas - 1);
    }    
}

void movimentoDama(int numeroDeCasas){
    if(numeroDeCasas > 0){
        printf("Esquerda\n");
        movimentoDama(numeroDeCasas - 1);
    }
}

void movimentoCavalo(){
    int numeroDeCasas = 1;

    for(int i = 1; i <= numeroDeCasas; i++){
        for(int j = 1; j <= numeroDeCasas*2; j++){
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

int main() {
    //Criando variáveis
    int opcao, numeroDeCasas;

    do{
        //Selecionar o movimento
        printf("\nSelecione uma opção\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Dama\n");
        printf("4 - Cavalo\n");
        printf("5 - Sair\n");
        scanf("%d", &opcao);      
        if(opcao != 4 && opcao != 5){
            printf("Qual a quantidade de casas você deseja andar?\n");
            scanf("%d", &numeroDeCasas);
        }


        
        if(opcao == 1){                           //Movimento da torre
            movimentoTorre(numeroDeCasas);
        }else if(opcao == 2){                     //Movimento do bispo
            movimentoBispo(numeroDeCasas);
        }else if(opcao == 3){                     //Movimento da dama
            movimentoDama(numeroDeCasas);
        }else if(opcao == 4){                     //Movimento do cavalo
            movimentoCavalo();
        }

    }while(opcao != 5);

    return 0;
}
