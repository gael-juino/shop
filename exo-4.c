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
	int joueur =0 ;
	int choix = 0;
	int inventaire = 0;
	int nbCarotte = 0;
	int nbKiwi = 0;
	int nbPoussin = 0;
	int nbSlime = 0;



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

		


	while(POjoueur >= 0){	
			printf("Que voulez vous ?\n (1) carotte (2) kiwi (3) poussin (4) slime  (5) Inventaire\n");
				scanf("%d",&choix);
			switch (choix){
				case 1 :
					if (choix ==1){
						if(POjoueur>=10){
						printf("Voici une carotte pour vous ! \n");
						POjoueur-= 10;
						printf("Il te reste %d PO \n",POjoueur);
						nbCarotte+=1;
						printf("Tu as %d de carotte dans ton inventaire\n",nbCarotte);
						}
						printf("Vous n'avez plus assez d'argent pour acheter une carotte.\n");
					}
				break ;
				case 2 :
					if (choix ==2){
						if(POjoueur>=15){
						POjoueur-= 15;
						printf("Il te reste %d PO \n",POjoueur);
						nbKiwi+=1;
						printf("Tu as %d de carotte dans ton inventaire\n",nbKiwi);
						}
						printf("Vous n'avez plus assez d'argent pour acheter un kiwi.\n");
					}
				break ;
				case 3 :
					if (choix ==3){
						if(POjoueur>=100){
						POjoueur-= 100;
						printf("Il te reste %d PO \n",POjoueur);
						nbPoussin+=1;
						printf("Tu as %d de poussin dans ton inventaire\n",nbPoussin);
						}
						printf("Vous n'avez plus assez d'argent pour acheter un poussin.\n");
					}
				break ;
				case 4 :
					if (choix ==4){
						if(POjoueur>=500){

						POjoueur-= 500;
						printf("Il te reste %d PO \n",POjoueur);
						nbSlime+=1;
						printf("Tu as %d de slime dans ton inventaire\n",nbSlime);
						}
						printf("Vous n'avez plus assez d'argent pour acheter un slime.\n");
					}
				break ;
				case 5 :
					if (choix ==5){
						printf("Tu as:\n\n");
						printf("Carotte:%d\n",nbCarotte);
						printf("Kiwi:%d\n",nbKiwi);
						printf("Poussin:%d\n",nbPoussin);
						printf("Slime:%d\n",nbSlime);
					}
				break ;
			
			}


 	}	






	return 0;
}
