#include <stdio.h>
#include <string.h>

#define max_liver 100
int main()
{
   char titre[max_liver][100];
   int quil[max_liver] ;//quil = la quantité d'un livre.
   char auil[max_liver];//auil= Auteur du livre. // prix=Prix du livr.
   float prix [max_liver] ;
   int toli=0 , nombre ; //toli=total des livers.
   
   printf("Menu de gestion de la bibliothèque:\n");
   printf("1.Ajouter un livre à l'inventaire:\n");
   printf("2.Voir tous les livres en stock:\n");
   printf("3.Trouver un livre en stock:\n");
   printf("4.Mettre à jour la quantité de livres en stock:\n");
   printf("5.Supprimer un livre de l'inventaire:\n");
   printf("6.Affiche le nombre total de livres en stock:\n");
   printf("7.Fermer le programme:\n");
   printf("Choisissez un numéro à exécuter:");
            scanf("%d",&nombre);
   
   void AjouterUnlivre(){
       if(toli=0 < auil[max_liver] )
       printf("Entrez le titre du livre que vous souhaitez ajouter:\n");
       scanf("%s\n",&titre[toli]);
        
   }
   void afficherLivers()
   void recherche()
   void MettreAjour()
   void Supprimer()
   void totallivres()
   
   switch (nombre) {
       case 1:
         AjouterUnlivre();
          break;
       case 2:
         afficherLivers();
         break;
       case 3:
         recherche();
         break;
       case 4:
         MettreAjour();
         break;
       case 5:
         Supprimer();
         break;
       case 6:
         totallivres();
         break;
       case 7:
         fermer();
         break;
       default:
        printf("Ce numéro n'est pas dans la liste!");
   }
   
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  return 0;  
}