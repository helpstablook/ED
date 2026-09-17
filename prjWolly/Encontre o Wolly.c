#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ( )
{
  unsigned char wolly [10][10];
  int i, j, linhaW, colunaW, linhaJ, colunaJ;

  srand(time(NULL));

  linhaW = rand() % 10;
  colunaW = rand() % 10;

  for ( i=0; i<10; i++ )
    for ( j=0; j<10; j++ )
    {
      wolly[ i ][ j ] = 1;
    }

  printf ("\nMatriz");

  for ( i=0; i<10; i++ )
    for ( j=0; j<10; j++ )
    {
      printf ("%d ", wolly[ i ][ j ]);
    }

  printf("\n Onde está o Wolly? ");
  printf("\n Digite a LINHA: ");
  scanf ("%d", &linhaJ);

  printf("\n Digite a COLUNA: ");
  scanf ("%d", &colunaJ);

  if (linhaJ == linhaW && colunaJ == colunaW)
  {
     printf("\nVoce acertou!");
  }
  else
  {
     printf("\nVoce Errou!");
  }

  return(0);
}
