#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 100

int main()
{
  char W[TAILLE] , U[TAILLE] , U1[TAILLE] ;
  int L , r , i ;

  printf("Saisir votre chaine : \n");
  scanf("%s" ,W);

  L = strlen(W);
  r = L % 2 ;

  printf("\n");
 
  if( r != 0 )
   {
    printf("La chaine n'est pas carrer\n");
    printf("\n\n");
    exit (0);
   }



   else
    {
      for( i = 0 ; i < (L/2) ; i++)
       {
           U[i] = W[i];
          U1[i] = W[i+(L/2)];

       }
   }
  
  if((strcmp(U1,U) == 0))
    {
      printf("Le chaine que vous avez donné est carré \n");
    }

    else 
     {
       printf("La chaine n'est pas carré magique \n");
     }

  printf("\n\n");

return (0);
}
