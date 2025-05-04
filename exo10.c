#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 100

int main()
{
  char text[TAILLE] ,V[7] = {'a','o','i','e','u','y'} ;
  int i , j  , L , k , m ;
  char tmp , temp ;

  printf("Saisir votre chaine : \n");
  scanf("%s" ,text);
  
  L = strlen(text);

  
   {
    for( j = 0 ; j < 7 ; j++ )
     {
        if(text[i] == V[j])
         {
            for( k = 0 ; k < 7 ; k++ )
            {
             if(text[i+1] == V[k])
             break;
            }
         }
          
        else if(text[i] != V[j]) 
         {
            for( k = 0 ; k < 7 ; k++ )
             {
              if (text[i+1]!=V[k])
              break;
             }
         }  

        else if(text[i] = V[j]) 
         {
            for( k = 0 ; k < 7 ; k++ )
             {
              if (text[i+1]!=V[k])
                 break;
             }
         }

        else if(text[i] != V[j])
         {
          for( k = 0 ; k < 7 ; k++)
            {
                if(text[i+1]==V[k])
                 {
                     for( m = i+1 ; m < L; m++)
                      {
                        tmp = text[m];
                        temp = text[m+2];
                        text[m] = 'I';
                        text[m+1] = 'T';
                      


                      }

                    L+2 ;
                 }
            }

         }
     }
       


   }

 printf("\n");

 printf("%s",text);

 printf("\n\n");
return (0);
}   