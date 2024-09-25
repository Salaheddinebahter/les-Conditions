#include <stdio.h>
int main(){
float an , mois , jours , heures , minutes , secondes ;
printf("Entrez l'année:");
scanf("%f",&an);
mois= an * 12;
printf("mois:%.2f\n",mois);
jours= an * 365;
printf("jours:%.2f\n",jours);
heures= an * 8760;
printf("heures:%.2f\n",heures);
minutes= an * 525600;
printf("minutes:%.2f\n",minutes);
secondes= an * 31536000;
printf("secondes:%.2f\n",secondes);
   return 0;
}