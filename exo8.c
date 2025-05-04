/*
ALGORITHME : Bigramme
VARIABLE : text , big : tableaux de type char  [TAILLE]et [3] ;
      i , compteur , b : entier ;
DEBUT
    ECRIRE("Saisir un petit texte : \n");
    LIRE(text);
    FAIRE
      ECRIRE("Saisir le bigramme a recherche : ");
      LIRE(big);
    TANTQUE(strlen(big) != 2);
    ECRIRE("\n");
    
    b <- (strlen(text) - 1 ); 
    compteur <- 0 ;
    POUR( I <- 0 ; i < b ; i <- i+1 )
     SI( text[i]=big[0] && text[i+1] = big[1])
       compteur <- compteur + 1 ;
     FINSI
    FINPOUR
  
   ECRIRE("Il existe ",compteur,"bigramme de <",big,"dans votre chaine .\n\n");
FIN
*/

/*_____________________________________________________________________________________________________
          
                         PROGRAMMATION     */

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define TAILLE 100

int main()
{
    char text[TAILLE] , big[3];
    int i , compteur , a , b;

    printf("Saisir un petit texte : \n");
    fgets(text , sizeof(text), stdin);
    printf("\n");
   

   do 
   {

    printf("Saisir le bigramme a rechercher : ");
    scanf("%s" , big);
     
    
   }while( strlen(big) != 2 );
  
   printf("\n\n");

   b = (strlen(text)-1) ;
   compteur = 0 ;

   for( i = 0 ; i < b ; i++ )
    {
       if(text[i]==big[0] && text[i+1]==big[1])
        {
            compteur++;
            
        }
      

    }

printf("Il existe %d  bigramme de < %s > dans votre chaine . \n\n",compteur,big);

return (0);    
}
