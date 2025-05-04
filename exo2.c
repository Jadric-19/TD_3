
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

    ECRIRE("Vous pouvez inserer un nouveau element au tableau :");
    LIRE(X);

    SI((X%2)= 0)
     POUR(i<--N ; i > a ; i--) 
           T[p] = T[p-1];
           T[p-1] = X ;
     FINPOUR
     N<--N+1;

      SINON
         T[N] = X;
         N++;
    FINSI    

    ECRIRE("Les paires sont decaler en avant et les paires les suivent  comme suit avec l'insertion : ")
    POUR( i<--0 ; i<N ; i++)  
      ECRIRE(T[i," ");
    FINPOUR


  FIN 


__________________________________________________________________________________________________________

   /*PROGRAMME C QUI CLASSE LES VALEURS PAIRES AU 1ER DE LA LISTE ET LES IMPAIRE A LA 
     FIN PUIS ON INSERE UNE NOUVELLE VALEUR ET PROGRAMME VA SUIVRE LE MEME
     PROCESSUS   */



#include <stdio.h>
#define TAILLE 100
int main()
  {
    int T[TAILLE] ;
    int i , p , X , N ;
    int r , temp ,  a ;

    printf("Entrer le nombre d'element que vous voulez inserer :  \n");
    scanf("%d", &N);

    for( i = 0 ; i < N ; i++)
     {
        printf("veuillez inserer vos elements %d : ", i+1);
        scanf("%d", &T[i]);
        
     }  
     
     a = 0 ;/*une variable compteur pour les position
     des paires*/

     for( i = 0 ; i < N ; i++)
     {
        r = T[i] % 2 ;
        
        if( r == 0 )//condition (1)
          {
           
            for( p = i ; p > a ; p--)
              {
                temp = T[p] ;//p etant egale a i
                T[p] =T[p-1];//la valeur de T[p] est ecrase par la valeur qui le precede
                T[p-1] = temp ;//puis on ajoute la valeur initiale de T[p] en avant
               
                
              }
            
         a++;/*on incremente a afin de bloquer et  d'eviter que une autre
          puisse entrer dans la position decalee a gauche et la 
          valeur dans T[a] sera le premier impair*/

          }

     }

    
    printf(" %d ",T[a]);

  


     //on affiche d'abord les elements avant l'insertion
     printf("\n\nLes paires sont decaler en avant et les paires les suivent  comme suit : \n ");
        for( i = 0 ; i < N ; i++)
       {
        printf(" %d ",T[i]);
    
      } 

    printf("\n\n");

  // on demande l'insertion

     printf("Vous pouvez inserer un nouveau element au tableau : ");
     scanf("%d", &X);

    if((X%2) == 0 )
    {
        for( p = N ; p > a ; p--) /*ici la valeur de a est a= la valeur de a++
         qui se situe a la condition que j'ai note condition(1)*/

         {
          
           T[p] = T[p-1];
           T[p-1] = X ;
         }
    
    
   
    N++;//on incremente la taille puisse que on insere un nouveau valeur
    }

    else 
     {
       T[N] = X;
       N++; 
     }
     

  printf("Les paires sont decaler en avant et les paires les suivent  comme suit avec l'insertion : \n ");
    for( i = 0 ; i < N ; i++)
     {
        printf(" %d ",T[i]);
    
     } 

       return (0);

}

