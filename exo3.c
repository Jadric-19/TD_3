
/* ALGORIRTHME INSERTION 
   VARIABLE T : tableau de tyoe entier [100];
    i , X , N : entier ;
    a , r , temp : entier

   DEBUT

    ECRIRE("Entrer le nombre d'element  que vous voulez inserer : ") ;
    LIRE(N);

    POUR(i <-- 0 ; i < N ; i <-- i + 1)
       ECRIRE("Veuillez inserer vos element : ");
       LIRE(N);
    FINPOUR

    POUR(i<--0 ; i < N) ; i <-- i+1)
       r = i % 2 ;
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

    ECRIRE(" Vous pouvez supprimer element du tableau !");
    ECRIRE("")
    LIRE(X);

     ECRIRE("Saisir la position de l'element a supprimer: ");
     LIRE(X);

    SI((X) <= 0 OU X >=N )
    
        ECRIRE("ERREUR DU PROGRAMME LA POSITION N'EST PAS CORRECTE ");
    
       SINON
        POUR( p <-- X-1 ; p < N ; p<-- p+1)
            T[p]=T[X];
        FINPOUR
        N <-- N-1 ;
      FINSI


    ECRIRE("Les paires sont decaler en avant et les paires les suivent  comme suit avec l'insertion : ");
    POUR( i<--0 ; i<N ; i<-- i+1)  
      ECRIRE(T[i," ");
    FINPOUR


  FIN 
  */





#include <stdio.h>
#define TAILLE 100
int main()
  {
    int T[TAILLE] ;
    int i , p , N ;
    int r , temp , X , a ;

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

  printf("\n\n");
  printf("Vous pouvez supprimer element du tableau ! \n\n");
  printf("Saisir la position de l'element a supprimer: ");
  scanf("%d", &X);

    if((X) <= 0 || X >=N )
    {
        printf("\nERREUR DU PROGRAMME LA POSITION N'EST PAS CORRECTE ");
    }
    else
      { 
        for( p = X-1; p < N ; p++)
        {
            T[p]=T[X] ;
            T[X]=T[X+1] ;
           
        }
        N--;
      }

  printf("\n\n");
  printf("Vous avez supprime un element dans notre tableau !! \n ");
  printf("Maintenent les elements de notre tableau deviennent : \n");
  
    for( i = 0 ; i < N ; i++)
     {
        printf(" %d ",T[i]);
    
     } 

printf("\n\n");

return (0);

}
