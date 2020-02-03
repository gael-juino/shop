#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



struct shop{
	int id;
	int price;
	int class;
	char name[10];
	
};

typedef struct shop shop;


int main(){

	int POjoueur = 1000;
	int joueur =0;
	int choix =0;


		shop carotte = {1,10,1,"carotte"};
		shop kiwi = {2,15,1,"kiwi"};
		shop poussin = {3, 100,2,"poussin"};
		shop slime = {4,500,2,"slime"};
		printf("Voici ce que j'ai a vendre et leur prix en PO: \n");
		printf("%s", carotte.name);
		printf(": %d PO\n", carotte.price);
		printf("%s", kiwi.name);
		printf(": %d PO\n", kiwi.price);
		printf("%s", poussin.name);
		printf(": %d PO\n", poussin.price);
		printf("%s", slime.name);
		printf(": %d PO\n", slime.price);

		

			printf("Que voulez vous ?\n (1) carotte (2) kiwi (3) poussin (4) slime\n");
			scanf("%d",&choix);
		

	while(POjoueur >= 0){	
		printf("Que voulez vous ?\n (1) carotte (2) kiwi (3) poussin (4) slime\n");
			scanf("%d",&choix);

		switch (choix){
			case 1 :
				
				POjoueur-= 10;
				printf("Il te reste %d PO \n",POjoueur );
					break;
			case 2 :
				POjoueur-= 15;
				printf("Il te reste %d PO \n",POjoueur );
					break;
			case 3 :
				POjoueur-= 100;
				printf("Il te reste %d PO \n",POjoueur );
					break;
			case 4 :
				POjoueur-= 500;
				printf("Il te reste %d PO \n",POjoueur );
					break;
		}
		if( POjoueur = 0){
			break;
		}
 	}	






	return 0;
}
