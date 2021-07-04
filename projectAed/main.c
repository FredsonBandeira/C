#include "Turma.h"
int main()
{
    system("color 2");
    Turma *lista;
    int opcao;
    char Nome[60];
    int numero;
    float nota;
    //Turma ListaAlunos;
    criar(&lista);

    do{
        opcao = menu();
        int x = 0;
        int i;
        fflush(stdin);
        switch(opcao){
            case 1:
                printf("Nome: ");
                fgets(Nome, 60, stdin);
                 for(i=0; Nome[i]!='\0'; i++){
                    if (Nome[i]<'a' || Nome[i]>'z'){
                         break;

                }
                printf("Numero: ");
                scanf("%d",&numero);
                 }

                 if(Nome[i] !='\0')
                    printf("tem carateres invalidos");



                while(x != 0)
                {
                     printf("Nota: ");

                       scanf("%f",&nota);
                       if(nota > 20 || nota <0){
                            printf("Digete uma nota entre 0 e 20");
                            scanf("%f",&nota);
                                x= 1;
                       }
                       return x;

                }
                printf("Numero: ");
                scanf("%d",&numero);
                lista = inserir(lista,Nome,numero,nota);

            break;
            case 2:
                MaiorNota(lista);
            break;
            case 3:
                MenorNota(lista);
            break;
            case 4:
                NumAprovados(lista);
            break;
            case 5:
                Media(lista);
            break;
            case 6:
                Aprovados(lista);
            break;
            case 7:
                printf("Nome: ");
                fgets(Nome, 60, stdin);
                procuraNome(lista, Nome);
            break;
            case 8:
                printf("Numero: ");
                scanf("%d",&numero);
                procuraNumero(lista, numero);
            break;
            case 10:
                printf("Numero: ");
                scanf("%d",&numero);
                Eliminar(lista,numero);
            break;
            case 12:
                imprime(lista);
            break;

            }

        if(opcao != 0){
            system("pause");
            system("cls");
        }

    } while(opcao != 0);


    return 0;
}
