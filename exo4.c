/*
ALGORITHME : Suppression_des_elements_de_T2_dans_T1
VARIABLE : T1 , T2 : tableau de type entier [50] et [100] ;
           N , M : entier ;
          i , j , k : entier ;

DEBUT
   ECRIRE("Entrer le nombre d'element que vous voulez inserer dans T1 : ");
   LIRE(N)

   POUR( i <- 0 ; i < N ; i <- i + 1 )
    ECRIRE("Veuillez inserer l'element numero ",i+1," : ");
    LIRE(T1[i]);
   FINPOUR

   ECRIRE("\n");
   
   ECRIRE("Entrer le nombre que vous vouuuulez entrer dans T2 : ");
   LIRE(M);
   POUR( j <- 0 ; j < M ; j <- j + 1)
     ECRIRE("Veullez inserer l'element numero ",j+1," : " );
     LIRE(T2[j];
   FINPOUR

    ECRIRE("Les elements de T2 : \n\n")
    POUR( i <- 0 ; i < M ; i<- i+1 )
      ECRIRE(T2[i]);
    FINPOUR
  
    ECRIRE("Les elements de T1 : \n\n")
    POUR( i <- 0 ; i < M ; i<- i+1 )
      ECRIRE(T1[i]);
    FINPOUR
    
   POUR( i <- 0 ; i < N ; i <- i+1 )
    POUR( j <- 0 ; j < M ; j <- j+1 )
     SI( T1[i] = T2[j] )
       POUR( k = i ; k < N ; K <- K+1 )
         T1[k] = T1[k+1] ;
       FINPOUR
       N <- N-1 ;
       i <-i-1 ;
     FINSI
    FINPOUR
   FINPOUR
   
   ECRIRE("Les nouveaux elements de T1 : \n");
   POUR( i <- 0 ; i < N ; N <- N+1 )
     ECRIRE(T1[i]);
   FINPOUR 
   
FIN
________________________________________________________________________________________________________________
                  
                           PROGRAMMATON
*/

#include <stdio.h>

int main()
{
    int T1[50] , T2[100];
    int N , M ;
    int i , j , k ;

    printf("Entrer le nombre d'element que vous voulez inserer dans T1:  ");
    scanf("%d", &N);

    for( i = 0 ; i < N ; i++)
     {
        printf("Veuillez inserer l'element numero %d : ", i+1);
        scanf("%d", &T1[i]);
        
     }  

    printf("\n");
    printf("Entrer le nombre d'element que vous voulez inserer T2 :  ");
    scanf("%d", &M);


    for( i = 0 ; i < M ; i++)
     {
        printf("veuillez inserer l'element numero %d : ", i+1);
        scanf("%d", &T2[i]);
        
     }  

    printf("Les elements de T2 : \n\n");
    for( i = 0 ; i < M ; i++)
     { 
        printf("%d ",T2[i]);
     }

    printf("\n\nLes elements de T1 : \n\n");
    for( i = 0 ; i < N ; i++)
     { 
      printf("%d ",T1[i]);
     }

     for( i = 0 ; i < N ; i++)
      { 
        for( j = 0 ; j < M ; j++ )
         {
            if( T1[i] == T2[j])
             {
                for( k = i ; k < N ; k++)
                 {
                   T1[k] = T1[k+1] ; //On arrange d'abord pour la prochaine iteration
                 }
                N--;//On diminue la taille car il y avait des ecrasements
                i--;//On repart du meme i pour verifier la meme condition
             }
         }
      }

    printf("\n\nLes nouveau elements de T1 : \n\n");//Affichage du nouveau tableau 1
    for( i = 0 ; i < N ; i++) 
     { 
      printf("%d ",T1[i]);
     }

    printf("\n\n");
     return (0);
}
 
