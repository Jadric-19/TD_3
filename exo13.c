#include <stdio.h>
#define TAILLE 100

int main()
 {
    int Tab[TAILLE][TAILLE]={0} ;
    int j , i , l ;
    int tmp = 0 ;

    printf("Saisir les elements du matrice : \n");
    
    printf("Saisir le nombre de ligne : ");
    scanf("%d", &l);

   
    Tab[0][0]=1; 
    for(i = 0 ; i < l ; i++ )
     {
         Tab[i][0]=1;
         Tab[i][i]=1;
        for( j = 1 ; j < i; j++ )
         {
         
            Tab[i][j]= Tab[i-1][j-1] + Tab[i-1][j];
            
         }
     }
      
    for(i = 0 ; i < l ; i++ )
     {
        for( j = 0 ; j <l ; j++ )
         {
  
          printf(" %d \t", Tab[i][j] );

         }
         
         printf("\n\n");
     }

  printf("\n\n");

return (0);
 
 }