#include <stdio.h>
#include <stdlib.h>
#define TAILLE 10

void saisirTab(int iTab[], int * piNb){
	
	int i;
	do{
		printf("Combien d'éléments voulez vous dans votre tableau ?\n");
		scanf("%d%*c",&iTab[*piNb]);
		if(*piNb<TAILLE){
			printf("Le tableau est limité à 10 nombres!");
		}
	}while(*piNb<TAILLE);
	for(i=0;i<*piNb;i++){
		printf("Saisissez un nombre:\n");
		scanf("%d%*c",&iTab[i]);
	}
return;
}

int main(){

<<<<<<< HEAD
int iTab[TAILLE];
int iNb;

=======
	printf("Entrer une valeur:\n");
	scanf("%d%*c",a);
>>>>>>> 6a8ab7d56e8011d0f05b4484e0e0e8e45c0b7089
	
	saisirTab(iTab,&iNb);

	return 0;
}
