#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct turma{
    char * text;
    int numero;
    float nota;
    struct turma *next;

} * Turma;

Turma  nEW(char* text, float nota, int numero);
Turma  inserir(Turma  head, char* text, int numero, float nota);
void  MaiorNota(Turma  head);
void  MenorNota(Turma  head);
void  NumAprovados(Turma  head);
void Media(Turma head);
void Aprovados(Turma head);
void procuraNome(Turma head, char* text);
void imprime(Turma head);
void Eliminar(Turma head, int num);
int menu();
/*Turma verificarCodigo(Turma dados[],char Nome,int numero, float nota);
int verifica_pos(Turma dados[]);
int verifica_cod(Turma dados[], int cod);*/

#endif // LISTA_H_INCLUDED


