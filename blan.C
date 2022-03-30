# include <stdio.h>

# include <stdlib.h>

# include <locale.h>


int main() {

setlocale(LC_ALL, "Portuguese");

int option = 1, n1, n2, r;

  while (option != 0)
  {
  printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\tEscolha: ");
  scanf("%d", &option);

  if (option != 0)
  {
    switch (option)
    {
    case 1:
      printf("\nDigite o primeiro número: ");
      scanf("%d", &n1);

      printf("\nDigite o segundo número: ");
      scanf("%d", &n2);
      
      r = n1 + n2;
      printf("\nSoma: %d + %d = %d\n\n", n1, n2, r);
      break;
    
    case 2:
      printf("\nDigite o primeiro número: ");
      scanf("%d", &n1);

      printf("\nDigite o segundo número: ");
      scanf("%d", &n2);

      r = n1 - n2;
      printf("\nSubtração: %d - %d = %d\n\n", n1, n2, r);
      break;
    
    case 3:
      printf("\nDigite o primeiro número: ");
      scanf("%d", &n1);

      printf("\nDigite o segundo número: ");
      scanf("%d", &n2);
      
      r = n1 * n2;
      printf("\nMultiplicação: %d * %d = %d\n\n", n1, n2, r);
      break;
    
    case 4:
      printf("\nDigite o primeiro número: ");
      scanf("%d", &n1);

      printf("\nDigite o segundo número: ");
      scanf("%d", &n2);
      
      if (n2 != 0)
      {
       r = n1 / n2;
       printf("\nDivisão: %d / %d = %d\n\n", n1, n2, r); 
      } else {
        printf("\n\nNão é possível dividir por zero!\n\n");
      }
      break;
    
    default:
      printf("\n\nDigite uma opção válida\n\n");
    }
  }
}
  return 0;
}


