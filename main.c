/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void maiusculo(char primeira[], char segunda[]){
    int i = 0;
    while(primeira[i] != '\0'){
        segunda[i] = toupper(primeira[i]);
        i++;
    }
    segunda[i] = '\0'; 
    
}



int main() {
    char nome[40];
    char string2[500];
    int tamanho;
    printf("Digite um nome:");
    gets(nome);

    printf("String original: %s\n", nome);

    maiusculo(nome, string2);
    printf("String maiuscula: %s\n", string2);
    
   tamanho = strlen(nome);
   
   printf("Total de letras:%d",tamanho);

    return 0;
}
