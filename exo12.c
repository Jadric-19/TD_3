#include <stdio.h>
#define TAILLE 100

int main()
 {
    int Tab[TAILLE][TAILLE] , T[TAILLE] , J[TAILLE] , D[TAILLE] ;
    int j , i , l , c , S , a , b , d  ;

    printf("Saisir les elements du matrice : \n");
    
    printf("Saisir le nombre de ligne : ");
    scanf("%d", &l);
    printf("Saisir le nombre de colonne : ");
    scanf("%d",&c);

    for(i = 0 ; i < l ; i++ )
     {
        for( j = 0 ; j < c ; j++ )
         {
           printf("Saisir l'element du matrice [%d][%d] : ",i,j);
           scanf("%d" , &Tab[i][j]);

         }
     }

/*--------------------------------------------------------------------------------*/
   /*On va stocker les sommes de ligne dans un tableau */  
    a = 0 ; 
     for( i = 0 ; i < l ; i++ )
     { 
        S = 0 ;
        for( j = 0 ; j < c ; j++ )
         {

           S = Tab[i][j] + S ;
         }
         T[i]= S ;
         a++;
     }

     /*----------------------------------------------------------------------------------*/
     /*On va stocker les somme colonne dans un autre tableau */
     b = 0 ; 
     for( j = 0 ; j < c ; j++ )
     { 
         S = 0 ;
      for( i = 0 ; i < l ; i++ )
       {
         S = Tab[i][j] + S ;
       
       }
         J[j]= S ;
         b++;
     }
 /*-----------------------------------------------------------------------------------------*/
   /* Calcule de la somme de la diagonale */
   
    d = 0 ;
    for( i = 0 ; i < 






/*---------------------------------------------------------------------------------------*/
   /*On afficher la forme matricielle */
   
   
    for( i = 0 ; i < l ; i++ )
     {
        for( j = 0 ; j < c ; j++ )
         {
  
          printf(" %d ", Tab[i][j] );

         }
         
         printf("\n\n");
     }

        
        /*--------------------------------------------------------------------------------------*/
     /*On  vas maintenant afficher les somme des lignes*/
     
     
     
       printf(" La somme du ligne numero :  \n");
   
          for( i = 0 ; i < a ; i++ )
    
         {
  
          printf(" %d est : %d \n", i+1 , T[i]);

         }


/*-------------------------------------------------------------------------------*/
  /*On vas afficher la somme des colonnes*/
  
          printf(" La somme du colonne numero :  \n");
   
          for( i = 0 ; i < b ; i++ )
    
         {
  
          printf(" %d est : %d \n", i+1 , J[i]);

         }
         
  /*----------------------------------------------------------------------------*/       
        

      printf("\n");



  /*---------------------------------------------------------------------------*/
  /*On va faire une comparaison sur les sommes des lignes et colonnes */
  /*Si la comparaison est egal alors cela sera un carrer magique le cas contraire sinon*/
  /*c est une variable Boolen elle renvoye 0 si et stop directement la boucle */
  /*si elle rencontre une somme differente de l'autre*/ 
   c = 1 ;
   for( i=0 ; i < a ; i++ )
    {
      for( j = 0 ; j < b ; j++ )
       {
        if( T[i] != J[j] )
         {
           c = 0;
           break;
         }
         else 
         {
          continue;
         }
       
       }

    }

     if( c == 1 )
     {
       printf("C'est un carre magique \n\n");
     }

    else
     {
      printf("Ce n'est pas un carre magique \n\n");
     }

return (0); 
 }

   
     
