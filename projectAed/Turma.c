#include "Turma.h"


void criar(Turma *head){

    *head = NULL;
}


int vazia(Turma  head){

    return (head == NULL);
}

Turma  nEW(char* text, float nota, int numero){
    Turma  x;

    x = (Turma) malloc(sizeof(struct turma));
    x->text = (char*) malloc(sizeof(char)*(strlen(text)+1));
    strcpy(x->text, text);
    x ->nota = nota;
    x ->numero = numero;
    x->next = NULL;
    return x;
}

// FUN플O RESPONSAVEL PARA INSERIR ALUNOS DA TURMA

Turma  inserir(Turma  head, char* text, int numero, float nota){

    Turma  x = nEW(text,nota,numero);
    x->next = head;

    return x;
}

// FUN플O RESPONSAVEL PARA INSERIR ALUNOS DA TURMA

void  MaiorNota(Turma  head){
    Turma  t;
    float maior;
    maior = 0;
    for(t = head; t != NULL; t = t->next){
        if (t->nota > maior){
            maior = t->nota;

        }
    }
    for(t = head; t != NULL; t = t->next){
        if(t->nota == maior){
            printf("%d || %f || %s\n",t->numero, t->nota, t->text);
        }
    }

    return;
}

// FUN플O RESPONSAVEL PARA INSERIR ALUNOS DA TURMA

void  MenorNota(Turma  head){
    Turma  t;
    float maior;
    maior = 20;
    for(t = head; t != NULL; t = t->next){
        if (t->nota < maior){
            maior = t->nota;

        }
    }
    for(t = head; t != NULL; t = t->next){
        if(t->nota == maior){
            printf("%d || %f || %s\n",t->numero, t->nota, t->text);
        }
    }

    return;
}

// FUN플O RESPONSAVEL PARA INSERIR ALUNOS DA TURMA

void  NumAprovados(Turma  head){
    Turma  t;
    int contAprovados,contReprovado;
    contAprovados = 0;
    contReprovado = 0;
    for(t = head; t != NULL; t = t->next){
        if (t->nota >= 10){
            contAprovados++;
        }else{
            contReprovado++;
        }
    }
    printf("O numero de estudantes Aprovados sao: %d\n\n", contAprovados);
    printf("O numero de estudantes Reprovados sao: %d\n\n", contReprovado);

    return;
}

// FUN플O RESPONSAVEL PARA INSERIR ALUNOS DA TURMA

void Media(Turma head){
    Turma  t;
    float soma, media;
    int cont;
    cont = 0;
    soma = 0;
    media = 0;

    for(t = head; t != NULL; t = t->next){
        soma = soma + t->nota;
        cont++;
        media = soma/cont;
    }
    printf("A Media e: %.2f\n\n",media);

    return;
}


void Aprovados(Turma head){
    Turma  t;

    printf("OBS * Numero * Nota * Nome\n");
    for(t = head; t != NULL; t = t->next){
        if (t->nota >= 10){
            printf("Aprovado * %d * %f * %s\n", t->numero, t->nota, t->text);

        } else if (t->nota < 10){
            printf("Reprovado * %d * %f * %s\n", t->numero, t->nota, t->text);

        }
    }

return;
}


void procuraNome(Turma head, char* text){
    Turma t;
    printf("Numero * Nota * Nome\n");
    for(t = head; t != NULL; t = t->next){
        if(strcmp(t->text, text) == 0){
            printf("%d * %f * %s\n", t->numero, t->nota, t->text);

        }
    }

    return;
}

void procuraNumero(Turma head, int num){
    Turma t;
    printf("Numero * Nota * Nome\n");
    for(t = head; t != NULL; t = t->next){
        if(t->numero == num){
            printf("%d * %f * %s\n", t->numero, t->nota, t->text);

        }
    }

    return;
}

void Eliminar(Turma head, int num){
    Turma t,x;

    for(t = head, x = NULL; t != NULL; x = t, t = t->next){
            if(t->numero == num){
                if(t == head){
                    head = t->next;
                }else{
                    x->next = t->next;
                }
                free(t);
            }
    }
}



// FUN플O DE TEXTE
void imprime(Turma  head){

    Turma t;

    if(!head){
        printf("Lista vazia ...\n");
        return;
    }
    printf("\nNumero || Nota || Nome\n");
    for(t = head; t != NULL; t = t->next) {
            printf("%d || %f || %s\n",t->numero, t->nota, t->text);

    }
return;
}
int menu(){
 int opcao;


  printf("************************************************************************\n");
        printf("\n Lista de Opcao\n");
        printf("\n 1 - Inserir Dados");
        printf("\n 2 - Nota mais alta");
        printf("\n 3 - Nota mais baixa");
        printf("\n 4 - Quant. Estudantes aprovados");
        printf("\n 5 - Média");
        printf("\n 6 - Lista Estudantes aprovados e reprovados");
        printf("\n 7 - Pesquisar Aluno por Nome");
        printf("\n 8 - Pesquisar Aluno por Numero");
        printf("\n 9 - Imprimir Lista Ordenada");
        printf("\n10 - Remover um elemento");
        printf("\n11 - Visualizar graficamente as notas ");
        printf("\n 0 - Sair\n");
        printf("\n************************************************************************\n");
        printf("\nInsira a opcao: ");
        scanf("%d",&opcao);

        return opcao;

}
/*Turma verificarCodigo(Turma dados[],char Nome,int numero, float nota)
{

    int codaux, posicao;
    posicao = verifica_pos(dados);

    if (posicao != -1){
        printf("\nEntre com o numero: ");
        scanf("%d", &codaux);
        fflush(stdin);

        if( verifica_cod(dados, codaux) )
            printf("");

        else
            printf("\nCodigo ja existente!");
    }
    else
        printf("\nA agenda esta cheia!");

}
int verifica_pos(Turma dados[]){
        int cont=0;
        while(cont<100){
            if(dados[cont]->numero==0)
                return(cont);
            cont++;
        }
    return(-1);
}
int verifica_cod(Turma dados[], int cod){
    int cont=0;
    while(cont<100){
        if(dados[cont]->numero == cod)
        return(0);
        cont++;
    }
    return(1);
}*/
