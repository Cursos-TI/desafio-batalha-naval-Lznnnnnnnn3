#include<stdio.h>

int main(){

    //Matrizes do tabuleiro!!
    int i, j;
    int LINHA2 [10] = { //Segunda Linha Vertical
        { 1},
        { 2},
        { 3},
        { 4},
        { 5},
        { 6},
        { 7},
        { 8},
        { 9},
        {10}};

    char LINHA [] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; //Linha Horizontal 

    int Tabuleiro [10][10] = {        //Tabuleiro
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 3, 3, 3, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };

    //
    printf("     Batalha naval!!\n");

    //Montagem do Tabuleiro
    printf(" ");

    for (int i = 0; i < 10; i++)  //Aplicação da linha Horizontal
    {
        
        printf(" %c", LINHA[i]);
    }
    
    printf("\n");



    for (int i = 0; i < 10; i++) //Aplicação da linha Vertical e o Tabuleiro
    {
        printf("%d", LINHA2[i]);
        printf(" ");
        for ( j = 0; j < 10; j++)
        {
            printf("%d ", Tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    
    
   
    

    

    return 0;
}