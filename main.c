#include <stdio.h>

int main(){
    printf("Agora foi");

    for(int i = 0 ; i < 10 ; i++){
        printf("TESTE\n");
        if (i % 2 == 0)
            printf("Numero par");
    }

   return 0;
}
