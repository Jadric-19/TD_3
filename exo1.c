

/* ALGORIRTHME INSERTION 
   VARIABLE T : tableau de type entier [100];
        i , N : entier ;
    a , r , temp : entier

   DEBUT

    ECRIRE("Entrer le nombre d'element  que vous voulez inserer : ") ;
    LIRE(N);

    POUR(i <-- 0 ; i < N ; i <-- i + 1)
       ECRIRE("Veuillez inserer vos element : ");
       LIRE(N);
    FINPOUR

    POUR(i<--0 ; i < N) ; i <-- i+1)
       r = T[i] % 2 ;
       SI(r == 0)
         POUR(p=i ; p > a ; p--)
           tmp = T[p] ;
           T[p] = T[p-1];
           T[p-1] = tmp ;
         FINPOUR
         a++;
       FINSI   
    FINPOUR

    ECRIRE("Les paires sont decaler en avant et les paires les suivent  comme suit ");
    POUR( i<--0 ; i<N ; i++)  
     ECRIRE(T[i," ");
    FINPOUR

FIN
*/

#include <stdio.h>
#define TAILLE 100
int main()
  {
    int T[TAILLE] ;
    int i , p , im , N ;
    int r , temp , tmp , a ;

    printf("Entrer le nombre d'element que vous voulez inserer :  \n");
    scanf("%d", &N);

    for( i = 0 ; i < N ; i++)
     {
        printf("veuillez inserer vos elements %d : ", i+1);
        scanf("%d", &T[i]);
        
     }  
     
     a = 0 ;
     for( i = 0 ; i < N ; i++)
     {
        r = T[i] % 2 ;
        
        if( r == 0 )
          {
           
            for( p = i ; p > a ; p--)
              {
                temp = T[p] ;
                T[p] =T[p-1];
                T[p-1] = temp ;
               
                
              }
            
         a++;
          }

     }
 
   printf("\n\n");

   printf("Les paires sont decaler en avant et les paires les suivent  comme suit : \n ");
    for( i = 0 ; i < N ; i++)
     {
        printf(" %d ",T[i]);
    
     } 

return (0);

}