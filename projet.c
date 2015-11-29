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

int iTab[TAILLE];
int iNb;

	
	saisirTab(iTab,&iNb);

	return 0;
}
