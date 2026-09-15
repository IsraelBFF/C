#include <stdio.h>

int main() {

  int opcao;

  printf("Informe o tipo de atendimento: ");
  scanf("%d", &opcao);

  switch (opcao){
    case 1:
        printf("Consulta agendada\n");
        break;
    case 2:
        printf("Retorno\n");
        break;
    case 3:
        printf("Exame\n");
        break;
    case 4:
        printf("Atendimento administrativo\n");
        break;
    default:
        printf("Opcao invalida");
  }

  return 0;
}
