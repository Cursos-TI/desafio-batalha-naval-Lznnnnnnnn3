#include <stdio.h>

int main() {

    const int linhas   = 10;
    const int colunas  = 10;
    int tabuleiro[linhas][colunas];
    char linhaHORIZONTAL [] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; //Linha Horizontal 

    // 1. Inicializa tudo com água (0)
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            tabuleiro[i][j] = 0;}
        }   


    // 2. Exibição do navio em forma de cone
    int altura      = 3;
    int linha_off   = 4;   // ex.: inicia na linha 4
    int col_off     = -3;  // ex.: desloca 2 colunas à esquerda do centro

    for (int i = 0; i < altura; i++) {
        int linha  = i + linha_off;
        int meio   = colunas/2 + col_off;
        int inicio = meio - i;
        int fim    = meio + i;
        for (int j = inicio; j <= fim; j++) {
            if (linha >= 0 && linha < linhas && j >= 0 && j < colunas)
                tabuleiro[linha][j] = 3;
        }
    }

    //3. Exibição do navio em forma de ecteadro
    int arm = 1;
    int center_row = linhas - 8;    // uma linha acima do último índice
    int center_col = colunas - 3;   // uma coluna antes da última coluna

    // vertical
    for (int k = -arm; k <= arm; k++) {
        int r = center_row + k;
        if (r >= 0 && r < linhas)
            tabuleiro[r][center_col] = 2;
    }
    // horizontal
    for (int k = -arm; k <= arm; k++) {
        int c = center_col + k;
        if (c >= 0 && c < colunas)
            tabuleiro[center_row][c] = 2;
    }

    //4. Exibição do navio em forma de cruz
    int arm2 = 2;
    int center_row2 = linhas - 3;    // uma linha acima do último índice
    int center_col2 = colunas - 4;   // uma coluna antes da última coluna

    // vertical
    for (int k = -arm2; k <= arm2; k++) {
        int r = center_row2 + k;
        if (r >= 0 && r < linhas)
            tabuleiro[r][center_col2] = 1;
    }
    // horizontal
    for (int k = -arm2; k <= arm2; k++) {
        int c = center_col2 + k;
        if (c >= 0 && c < colunas)
            tabuleiro[center_row2][c] = 1;
    }


    // 5. Imprime o tabuleiro
    printf("   ");
    for (int i = 0; i < linhas; i++)//Exibição da linha Horizontal
    {
        printf("%c ", linhaHORIZONTAL[i]);
    }
    printf("\n");
    
    for (int i = 0; i < linhas; i++){ 
    printf("%2d ", i + 1); //Exbição da linha vertical
    
        for (int j = 0; j < colunas; j++){ //Exibição dos numeros 0 (Água)
            printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}

return 0;
}