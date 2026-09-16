#include <stdio.h>

int main(){
    printf("Curso escolhido:\n");
    printf("[1] Programacao\n[2] Redes\n[3] Banco de Dados\n\n: ");
    
    int curso;
    scanf("%d", &curso);
    
    int carga_horaria;
    
    switch (curso){
        case 1:
            carga_horaria = 80;
            break;
        case 2:
            carga_horaria = 60;
            break;
        case 3:
            carga_horaria = 70;
            break;
    }

    printf("\nCarga horaria: %d\n",carga_horaria);

    printf("\nIdade: ");
    int idade;
    scanf("%d", &idade);

    if(idade > 0){
        if (idade > 16){
            printf("Nota no processo seletivo: ");
            float nota;
            scanf("%f", &nota);

            if(nota > 0){
                if(nota >= 7){
                    printf("Aprovado!\n");
                    nota >= 9 ? printf("Status: Destaque\n") : printf("Status: Regular\n");
                }
                else if (nota > 5)
                    printf("Lista de espera!\n");
                else 
                    printf("Nao aprovado!\n");
            } else
                printf("Nota invalida!\n");
        } else
            printf("Idade insuficiente!\n");
    } else 
        printf("Idade invalida!\n");

        return 0;
}