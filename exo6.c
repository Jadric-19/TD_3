#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 100

int main()
{
  char chaine[TAILLE] , pal[TAILLE] ;
  int i ,  l;


  printf("\tON VA DIRE SI UNE CHAINE EST PALINDROME OU PAS\n\n");

  printf("Saisir une chaine caractere : \n");
  scanf("%s" ,chaine);
   
  printf("\n\n"); 

  l = strlen(chaine);

  //printf(" %d \n\n",l); on peut afficher la longueur du chaine choisie

  for( i = l ; i > 0 ; i--)
   {
     pal[l-i] = chaine[i-1];
   }

   printf("L'inverse de cette chaine est %s \n",pal);



  if((strcmp(pal,chaine)) == 0 )
   {
    printf("\nLa chaine que vous avez saisi est un palindrome");
   }

  else
  {
    printf("\nLa chaine que vous avez saisi n'est pas un palindrome");
  }

  printf("\n\n");

  
return (0) ;
}