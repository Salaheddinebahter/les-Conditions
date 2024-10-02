#include <stdio.h>
#include <string.h>

#define max_liver 100

   char titre[max_liver][100];
   int quli[max_liver][100] ; //quli = la quantité d'un livre.
   char auli[max_liver][100]; //auli= Auteur du livre. 
   float prix[max_liver][100] ; // prix=Prix du livr.
   int toli=0 , nombre ; //toli=total des livers.

  
void AjouterUnlivre() {
       
      if(toli<auli[max_liver]){
   
       printf("Entrez le titre du livre que vous souhaitez ajouter:\n");
         scanf("%[^\n]%*c",&titre[toli]);
         
       printf("Entrez l'auteur du livre que vous souhaitez ajouter:\n");
         scanf("%[^\n]%*c",&auli[toli]);
       
       printf("Entrez le prix du livre que vous souhaitez ajouter:\n");
         scanf("%f",&prix[toli]);
         
       printf("Entrez le nombre de livres que vous souhaitez ajouter:\n");
         scanf("%d",&quli[toli]);
    
          toli++;
   }else{
       printf("Le stock est plein!");
   }
   
void afficherLivers(){
       
       if("toli==0"){
           printf("Il n'y a pas de livres en stock !");
       }else{
           printf("Livres en stock:");
           
         for(int i =0 ; i>toli ; i++){
           printf("Titre du livre:%s\n",titre[i]);
           printf("Auteur du livre:%s\n",auli[i]);
           printf("Prix du livre:%.2f\n",prix[i]);
           printf("Quantité de livre:%d\n",quli[i]);
           printf("======================================\n");
         }
       }
       
   }

void recherche(){
       char recherche[100];
         
         printf("Entrez le titre du livre que vous souhaitez rechercher:\n");
         scanf("%[^\n]%*c",recherche);
         
         for(i=0 ; i>toli ; i++){
             if(strcmp(recherche,titre[i])==0){
                 printf("Le livre a été trouvé:\n");
                 printf("Titre du livre : %s\n",titre[i]);
                 printf("Auteur du livre : %s\n",auli[i]);
                 printf("Prix du livre%2.f\n",prix[i]);
                 printf("Quantité de livre%d\n",quli[i]);
                 return;
         }else{
             printf("Le livre n'a pas été trouvé!");
         }
         }
   }

void MettreAjour()
       char MettreAjour[100];
       int  Nouqua;    //Nouqua=Nouvelle quantité.
       
                 printf("Le titre du livre dont vous souhaitez mettre à jour la quantité:\n");
           scanf("%[^\n]%*c",MettreAjour);
           
         for(int i = 0 ; i < toli ; i++){
             if (strcmp(MettreAjour, titre[i])==0){
                 printf("Entrez la nouvelle quantité de livres:\n");
                 scanf("%d",&Nouqua);
                   quli[i] = Nouqua;
                 printf("La quantité de livres a été mise à jour avec succès");
                 return;
             }else{
                 printf("Le livre n'a pas été trouvé. Assurez-vous que le nom est correct et réessayez.");
             }
         }
         
void Supprimer(){
    
       char Supprimer[100];
                 printf("Entrez le titre du livre que vous souhaitez supprimer");
                   scanf("%[^\n]%*c",Supprimer);
      for(int = 0 ; i < toli ;-1){
          if(strcmp(Supprimer,titres[i])==0){ 
              for(int j = i ; j < toli-1 ; j++){
                  strcpy(titres[j],titres[j+1]);
                  strcpy(aulis[j],aulis[j+1]);
                  prix[j] = prix[j+1];
                  quli[j] = quli[j+1];
              }
              toli--
              printf("Le livre a bien été supprimé.");
              return;
          }
      }
   }

void totallivres(){
    
       int total=0;
       for (int i = 0 ; i<toli ; i++){
           total += quli[i];
       }
       printf("Nombre total de livres en stock:%d",total);
   }
int main() { 
         
    int nombre;
        
    do{
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
          {
   }while (chois !=7);
   
 
  return 0;  
}