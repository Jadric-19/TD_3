/* ALGORIRTHME INSERTION 
   VARIABLE T : tableau de tyoe entier [TAILLE];
    i , j , N : entier ;
    note , S : entier ;
    M , min , N , B : reel ;
    T1 : tableau de type reel [TAILLE];

   DEBUT
    ECRIRE("VOS NOTES DOIVENT ETRE ENTRE 0 ET 20 \n\n");    


    ECRIRE("Entrer le nombre d'element  que vous voulez inserer : ") ;
    LIRE(N);


    POUR( i <- 0 ; i < N ; i <- i + 1)
       ECRIRE("Veuillez inserer vos element : ");
       LIRE(N);
    FINPOUR   
    
    S <- 0 ;
    POUR( i <- 0 ; i N ; i <- i+1 )
      S <- S + T[i] ; 
    FINPOUR
   
   POUR( i <- 0 ; i < N ; i <- i + 1 )
    B <- fabs(M-T[i]);
    T[i] <- B ;
   FINPOUR
   
   min <- T1[0] ; 
   POUR( i <- 0 ; i < N ; i<- i+1 )
    SI( T1[0] < min )
     min <- T[i] ;
     note = T[i] ;
    FINSI
   FINPOUR
   
   ECRIRE("Les notes que vous avez saisi sont : \n");
   POUR( i <- 0 ; i < N ; i <- i+1 )
    ECRIRE(T[i]);
   FINPOUR
 
   ECRIRE("La moyenne est : ",M);
   ECRIRE("\n Et la note la plus proche de la moyenne est ",note,"\n");

FIN
 __________________________________________________________________________________________________________________
      
             PROGRAMMATION
   
     */

#include <stdio.h>
#include <math.h>
#define TAILLE 100

int main()
{

    int T[TAILLE] ;
    int N , S ;
    int i , j , note ;
    float  M , T1[TAILLE] , min , B ;

    printf("\n VOS NOTES DOIVENT ETRE ENTRE  0 ET 20\n\n");

    printf("Entrer le nombre d'element que vous voulez inserer dans T1:  ");
    scanf("%d", &N);

    for( i = 0 ; i < N ; i++)
     {
        printf("veuillez inserer la note numero %d : ", i+1);
        scanf("%d", &T[i]);
        
     }  

      S = 0 ;

    for( i = 0 ; i < N ; i++ )
     {
        S = S + T[i] ;
     } 

     M = 0 ;
     M = S / N ; 
       
    for( i = 0 ; i < N ; i++)
     {
        B = fabs(M-T[i]);
        T1[i] = B ;
        
     }

     min = T1[0]; 

     for( i = 0 ; i < N ; i++ )
      { 
        if( T1[i] < min )
          {
            min = T1[i] ; 
            note = T[i] ;
          }
      }

     
      printf("Les notes que vous avez saisi sont : \n");

      for( i = 0 ; i < N ; i++ )
       {
        printf(" %d ", T[i]);
       }

       printf(" La moyenne est : %.2f \n",M);

       printf("\nEt la note la plus proche de la moyenne est : %d",note);
       
       printf("\n");


return (0);    
}
