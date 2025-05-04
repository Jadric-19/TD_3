/*
                          ALGORITHME
-------------------------------------------------------------------------
ALGORITHME : DECRIPTAGE
VARIABLE text , V  : tableau de type char [TAILLE] et [7];
         i , j , k : entier ; 
DEBUT
     ECRIRE("Saisir votre chaine cryptée : \n);
     LIRE(text);
     L =strln(text);
     POUR( i <- 0 ; i < (L-1) ; i<- i+1 )
       SI( text[i] = 'I' && text[i+1] = 'T' )
          POUR( k <- 1 ; k < (L-1) ; k <- k+1 )
            text[k] <- text[k+2] ;
          FINPOUR
          L <- L + 2 ;
       FINSI
     FINPOUR
  
     ECRIRE(\n);
     ECRIRE("Chaine decryptée : \n",text,"\n\n");

FIN 

______________________________________________________________________________

                   PROGRAMMATION
  
         
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 100

int main()
{
  char text[TAILLE] ,V[7] = "aoieyu" ;
  int i , j  , L , k ;
  char tmp , temp ;

  printf("Saisir votre chaine crypter de IT : \n");
  fgets(text , sizeof(text) , stdin);

  L = strlen(text);

  for( i = 0 ; i < (L-1) ; i++ )/*( L-1 ) car fgets prend en compte le saut de ligne effectuer par entre*/
   {
    
        if(text[i]== 'I' && text[i+1] == 'T')
         {
          for(k = i; k < (L-1); k++)
           {
            text[k]=text[ k + 2 ];/*On ecrase "IT" en declant vers la gauche*/
           }
         }  
     
   }

   printf("\n");
   printf("Chaine decrypter : \n  %s \n\n",text);

   return(0);
}