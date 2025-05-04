#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAILLE 100
int main()
{
  char text[TAILLE] ;
  int i , a , es , L;

  printf("Saisir un petit texte : \n");
  fgets(text,sizeof(text),stdin);
  
  a = 0 ;
  es = 0 ;

  for( i = 0 ; i != '.' ; i++ )
    {
      if( (text[i]=='a'))
       {
         a++;
       }
  
      else if( (text[i]=='e') && (text[i+1] == 's'))
       {
         es++;
       }
   }

 

  printf("Le nombre d'apparition de 'a' dans ce text est %d ",a);

  
  printf("\n\n");

  printf("Le nombre d'apparition de 'es' dans ce text est %d ",es);
   
  printf("\n\n");

return (0); 
}