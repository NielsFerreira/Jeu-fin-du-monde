#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Ne pas oublier d'inclure le fichier time.h

<<<<<<< Updated upstream

/*  										Histoire et déroulement du jeu :

Le monde est sur sa fin. Vous êtes un survivant d'une maladie rare qui a touché la population terrestre.
La population "vivante" a diminué de 95% suite à cette maladie. Vous voyagez et découvrez une ville campagnarde fantôme.
Vous décidez de trouver de quoi vous sustenter dans une maison proche. Vous trouvez un coffre et décidez de prendre ou
pas son contenu. Une fois remonté, un "mort" vous surprend et tente de vous manger. Vous avez le choix entre l'affronter
ou vous enfuir. Ensuite, si vous êtes toujours en vie, vous allez chercher ailleurs. Vous tombez sur une cave un peu plus loin.
Ca fait longtemps que vous n'avez pas bu d'alcool et cela vous manque. Vous décidez de descendre à la cave. Vous découvrez
des bouteilles poussiéreuses mais qui ont l'air intéressantes. Vous trouvez aussi une arme et des munitions.
De la poussière tombe du dessus, vous sentez des tremblements, ainsi que du bruit venant de l'extérieur.
Vous remontez. Votre rythme cardiaque augmente fortement quand vous voyez une horde phénoménale de morts se dirigeant vers
votre position. Vous vous enfermez et attendez que la horde passe. Après un moment, vous n'entendez plus de bruits à l'extérieur
et les tremblements ont cessé. Vous remontez. vous regardez autour de vous et ne voyez aucun danger apparent. Vous commencez à
marcher quand soudain, des bruits rauques se font entendre sur votre droite. Vous voyez 2 morts, qui vout ont aussi repéré.
L'un des morts possède un sac et fait tomber des cartouches de munitions semblables à celles que vous possédez actuellement.
Vous réfléchissez, vous décidez soit de les affronter, soit de fuir. (affrontement face aux 2 zombies réussi, fuir vous emmène dans une
situation plus compliquée (plus de zombies)). A la suite de ça, n'ayant pas passé un agréable moment vous décidez de quitter
cette ville. Vous voyez un vélo et une voiture à la sortie de la ville, vous choisissez quoi prendre (Le vélo est un moyen de locomotion
durable, qui implique pas mal d'énergie mais est tout terrain. Déplacements silencieux aussi. La voiture permet de parcourir de
grandes distances rapidement mais est plutôt bruyante ce qui risque d'attirer plus de morts. Cependant, la voiture permet de
transporter un plus grand nombre de matériel). A la suite du choix, si vous avez pris le vélo, vous crevez un pneu et vous faites
poursuivre par des zombies en plus de ça, vous n'avez plus beaucoup d'énergie. Si vous avez pris la voiture, vous câlez plus loin
et alertez un grand groupe de zombies, vos chances de fuite seront moins grandes que les précédentes.

Fin du jeu.
*/
int main(){


}
=======
int main(){

	int choix;
	int choix1;
	int choix2;
	int choix3;
	int choix4;
	int choix5;
	int choix6;
	int choix7;
	int choix8;

printf("Le monde est sur sa fin. Vous etes un survivant d'une maladie rare qui a touche la population terrestre. \n");
printf("La population de vivant a diminue suite a cette maladie. \n" );
printf("Vous voyagez et decouvrez une ville campagnarde fantome. \n" );
printf("Vous decidez de trouver de quoi vous sustenter dans une maison proche. \n" );






printf("Une fois a l interieur, vous vous dirigez vers la cuisine.\n");
printf("\nChoisissez ce que vous voulez fouiller :\n\nTapez 1 pour fouiller un placard.\nTapez 2 pour fouiller le frigo.\nTapez 3 pour quitter la cuisine\n\n");

scanf("\n%d",&choix);

	if(choix == 1){

		choix = 0;

		printf("\n\nVous fouillez un placard. Vous trouvez des pates, des conserves ainsi que des allumettes.\n");
		printf("Souhaitez-vous prendre les objets ?\n\n Oui = 1\n Non = 2\n");

		scanf("\n%d",&choix);

		if(choix == 1){

			printf("\nVous avez pris les objets.\n");

			choix = 0;

			printf("\nQue voulez-vous faire maintenant ?\nta1 = vous regardez ce qu'il y a dans le frigo\n2 = Vous quittez la cuisine.\n\n");

			scanf("\n%d",&choix);

			if(choix == 1){

				printf("Vous fouillez le frigo.\nLe frigo est compose d'aliments ayant l'air perime, ca ne vous tente pas trop de prendre ce risque.\nVous quittez la cuisine et vous dirigez vers le salon.\n");

				choix = 0;

			}
			else if(choix == 2){

				printf("Vous quittez la cuisine et vous dirigez vers le salon.\n");

				choix = 0;
			}


		}
		else if(choix == 2){

			printf("Vous fouillez le frigo.\nLe frigo est compose d'aliments ayant l'air perime, ça ne vous tente pas trop de prendre ce risque.\n");

			printf("Souhaitez-vous maintenant fouiller les placards ou quittez la cuisine ?\n  1 = fouiller\n2 = quitter la cuisine.\n\n");


			scanf("%d",&choix);

			if(choix == 1){

				printf("Vous fouillez les placards. Vous trouvez des pates, des conserves et des allumettes. Souhaitez vous les prendre ?\n\n1 = Oui\n2 = Non\n\n");

				choix = 0;

				scanf("%d",&choix);

				if(choix == 1){

					printf("Vous prenez les objets, quittez la cuisine et vous dirigez vers le salon.\n");

					choix = 0;
				}
				else if(choix == 2){

					printf("vous quittez la cuisine et vous dirigez vers le salon.\n");

					choix = 0;
				}

			else if(choix == 2){

				printf("\nVous quittez la cuisine et vous dirigez vers le salon.");

				choix = 0;
				}
			}
		}
	}




printf("\n\nVous trouvez un coffre a jouet en plein milieu du salon sur une table. Il y a peut-etre quelque chose dedans. \n" );

printf("\n\n tapez 1 je pensse qu il y a peut etre un piege qui va me trucider en l'ouvrant je dervai m'abstenir \n" );
printf("\n\n tapez 2 je tente ma chance et puis de toute facon il faut bien mourire de quelque chose \n" );


scanf("%d",&choix2);
	if (choix2 == 1){
		printf("vous continuez a fouiller la maison \n");}


		else if (choix2==2) {
			printf("vous avez gagne une vielle clef \n" );
}


printf("en cherchant dans la maison vous arrivez devant la chambre d'un enfant vous entandez un grognement a linterrieur\n" );

printf("tapez 1 je pensse que cest surement un zombie je vais le prendre par surprise et lui eclater le crane contre un mure \n" );
printf("tapez 2 je pensse cest trop dangereux de mzen prendre a un zombie si il me mord je suis foutu \n" );

scanf("%d",&choix3);
	if (choix3 == 1){
	printf("vous gagnez la satisfaction d'avoir eclacter un crane contre un mure pour un jouet denfant qui vous plait vous le recuperez \n" );	}


		else if (choix3==2) {

printf("vous n'attaquez pas le zombie et vous chercher ailleurs dans la maison \n" );

}

printf("en vous balladant dans la maison vous arriver devant une vielle porte sa semble etre la cave \n" );//choix4

printf(" tapez 1 j'arrive pas a l'ouvrire en forcant jai besoin d'une clef \n" );
printf(" tapez 2 j'abandonne j'arrive pas a ouvrire et jai pas la clef  \n" );


scanf("%d",&choix4);
	if (choix4 == 1){
		printf("ho mais je suis betes j'ai la clef \n" );
		printf("vous ouvez la porte de la cave et distinger dans le noir une cave avec des mure en pierre blanche et du vin perte de vue\n" );
		printf("haaa un rat !!!!!!\n" );
		printf("vous saisissez un couteau sur la table et plantez le gros rat  \n" );
		printf("au moins jaurais moins mal au poing a force declater les cranes de zombies a la main bon regardons ce quil y as de bon ici \n" );
		printf("vous trouver une bouteille de vin cest la derniere de toute la cave \n" );
		printf("super du pinard cest mon jours de chance meme si je ne tien plus l'alcool depuis le temp que je n'en ai pas bu \n" );
		printf("aller juste une lichette \n" );
		printf("vous avez  bu trop de lichette et etes desomais saoul \n" );
		printf("vous arrachez le couteau du cadavre du rat  felicitation vous gagnez un couteau\n" );


	}

		else if (choix4==2){

			printf("vous explorer la maison mais ne trouvez rien  \n" );

		}


printf("vous sortez de la maison pour aller explorer le monde  \n" );

printf("en marchant dans une rue vous entandez le crie pas tres virile d'un homme  qui ne vien pas de tres loin \n" );
printf("tapez 1 vite je doit aller l'aider il doit etre en danger et au moins je testerai mon nouveau couteau  \n" );
printf("tapez 2 cest trop dangereux et puis si sa se trouve cest un piege   \n" );



scanf("%d",&choix5);
	if (choix5 == 1){
		printf("en allant aider cette homme vous vous retrouvez fasse a deux zombie vous ne pouvez plus vous enfuir\n" );
		printf("vous attaquer le 1er zombie vous le plaquez au sol et lui plantez le couteau dans la gorge du sang gicle sur votre joue \n" );
		printf("pendant ce temp l'homme se bat au sol a main nue contre un zombie et se fait mordre vousentandez un crie de sa part \n" );
		printf("vous tuer le zombie et allez metre un gros coup de pied dans la tete du deuxieme son corp est projeter a coter du l'homme \n" );
		printf("vous aller au niveau du zombie montez le genous du plus haut que vous le pouvez et ecrasez son visage d'un violant coup de pied \n" );


		printf("tapez 1 bonjours jon je m'apelle enchenté \n" );
  	printf("tapez 2 il est peut etre dangereux je dois le tuer et puis cest lui qui ma entrener dans cette galere \n" );

	scanf("%d",&choix6);
		if (choix6 ==2) {


			printf("vous arrivez vers jon avec un sourire et lorsque que vous arriver a porte vous lui tranchez la gorge pour le fouiller \n" );
			printf("en fouillant son corp vous trouvez une machette sous sa veste \n" );
			printf("il n'a surement pas eu le temp de la sortire que les zombie etait deja sur lui desormais elle est mienne   \n" );
		}
		else if (choix6 ==1) {


			printf("je te previen je nai pas confiance faisont chemin a part mais merci de mavoir sauver tien je toffre des vivre dit jon \n" );
		}

}


		else if (choix5==2) {
			printf("vous entandez des crie d'agonie au loin puis plus rien \n" );

}

printf("vous continuez votre errance sans butte particulier jusqua tomber dans un cul de sac vous esseyer d'ouvire une porte mais elle est fermer et une alarme se declanche  \n" );
printf("merde sa va rameuter les zombie des allentoure!!! \n" );
printf("des zombies arrivent  \n" );


printf("tapez 1 je doit forcer cette porte \n" );
printf("tapez 2 vennez vous batre bande de merde \n" );


scanf("%d",&choix7);
	if (choix7 == 1){

printf(" vous vous acharnez sur la porte mais elle ne s'ouvre pas \n" );

printf("tapez 1 vite je doit forcer cette porte \n" );
printf("tapez 2 en essayant de forcer la porte vous perdez du temp et des grognement surgie derniere vous des zombie arrive \n" );




 scanf("%d",&choix8);
 if (choix8 ==1 ) {
 	printf("je doit forcer plus fort \n" );
	printf("vous n'arrivez pas a ouvire la porte a temp vous sentez des crocs vous tansperser la nuque vous mourrez dans datroce soufrance \n" );
	printf("vous ny arriver pas les zombies arrive votre niveaux vous mourez dans datroce soufrance \n" );

}


	else if (choix8 == 2) {
		printf("\nvous sortez votre machette et decapitez le premier zombie puis vous remarquer\n qu'un zombie arrive sur vote droite vous lui plantez la machatte dans l'oiel mais elle reste plante dans sa boite craniene\n" );
		printf("vous sortez votre couteau vous metetez trop longtemp a le sortire vous soufrez puis la mort vous emporte en tan que guerrier felicitation \n" );

	}
 }


		else if (choix7==2) {
			printf("\nvous sortez votre machette et decapitez le premier zombie puis vous remarquer\n qu'un zombie arrive sur vote droite vous lui plantez la machatte dans l'oiel mais elle reste plante dans sa boite craniene" );
			printf("vous sortez votre couteau vous tuez deux zombie vous les aurait emportez dans votre tombe felicitation vous mourrez de maniere digne \n" );

}

    return 0;
}
>>>>>>> Stashed changes
