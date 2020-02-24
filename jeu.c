#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Ne pas oublier d'inclure le fichier time.h

int main(){
	
	int choix;
	

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
			
			printf("\nQue voulez-vous faire maintenant ?\n\n1 = vous regardez ce qu'il y a dans le frigo\n2 = Vous quittez la cuisine.\n\n");
			
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
}		



printf("\n\nVous trouvez un coffre a jouet en plein milieu du salon sur une table. Il y a peut-etre quelque chose dedans. \n" );

/*
printf("je pensse qu il y a peut etre un piege qui va me trucider en louvrant je dervai mabstenir \n" );
printf("je tente ma chance et puis de toute fasson il faut bien mourire de quelque chose \n" );

printf("vous avez gagnez la cle de la cave \n" );
printf("vous continuez a fouiller la maison \n" );









printf("en cherchant dans la maison vous arrivez devant la chambre dun enfant vous entandezun des grognement a linterrieur\n" );

printf("je pensse que cest surement un zombie je vais le prendre par surprise et lui eclater le crane contre un mure \n" );
printf("je pensse cest trop dangereux de men prendre a un zombie si il me mort je suis foutu \n" );

printf("vous gagnez la satisfaction davoir eclacter un crane contre un mure pour un jouet denfant  \n" );
printf("vous prenez un jouet \n" ); //on fait prendre un joeur au joueur meme si sa lui sert a rien au  moins il a un jouet et une recompensse
printf("vous n'attaquez pas le zombie et vous chercher ailleru dans la maison \n" );









printf("en vous balladant dans la maison vous arriver devant une vielleporte sa semble etre la cave \n" );

printf("jarrive pas a l'ouvrire en forcant jai besoin d'une clef  \n" );

printf("jabandonne jarrive pas a ouvrire et jai pas la clef  \n" );
printf("ho mais je suis betes jai la clef \n" );

printf("vous ouvez la porte de la cave et distinger dans le noir une cave avec des mure en pierre blanche et du vin perte de vue\n" );
printf("vous abanonnez l'idee de vous delectez delectez d'un peut de pinnard \n" );

printf("haaa un rat !!!!!!\n" );
printf("vous saisissez un couteau sur la table et plantez felicitation vous gagnez un couteau \n" );
printf("au moins jaurais moins mal au poind a force declater les crane de zombie a la main bon regardon ce quil y as de bon ici \n" );


printf("super du pinard cest mon jours de chance meme si je ne tien plus l'alcool depuis le temp \n" );

printf("vous trouver une bouteille de vin cest la derniere de toute la cave \n" );
printf("super du pinard aller juste une lichette \n" );
printf("ce nest pas tres raisonable de boire \n" );

printf("vous avez  bu trop de lichette et etes desomais saoul \n" );//dans tout les cas le joueur garde le couteau
printf("vous prenez le couteau et vous resortez \n" );








printf("vous sortez de la maison pour aller explorer lemonde equiper de votre couteau ensanglante  \n" );
printf("en marchant dans une rue vous entandez le crie pas tres virile d'un homme  qui ne vien de pas tres loin \n" );

printf("vite je doit aller l'aider il doit etre en danger et au moins je testerai mon nouveau couteau  \n" );
printf("cest trop dangereux et puis si ça se trouve cest un piege   \n" );

printf("en allant aider cette homme vous vous retrouvez fasse a deux zombie vous ne pouvez plus vous enfuir\n" );
printf("vous attaquer le 1er zombie vous le plaquez au sol et lui plantez le couteau dans la gorge du sang gicle sur votre joue \n" );
printf("pendant ce temp l'homme se bat au sol a main nue contre un zombie et se fait mordre\n" );
printf("vous tuer le zombie et aller metre un gros coup de pied dans la tete du deuxieme son corp est projeter a coter du l'homme \n" );
printf("vous aller au nioveau du zombie montez le genous du plus haut que vous le pouvez et ecrasez son visage d'un violant coup de pied \n" );
printf("merci de mavoir aider je m'apelle jon \n" );

printf("il est peut etre dangereux je dois tuer jon et puis cest lui qui ma entrener dans cette galere \n" );
printf("bonjours jon je m'apelle .......... enchenté \n" );//le joueur doit cree un perso peut etre au debut ou mtn a voir

printf("vous arrivez vers jon avec un sourire et lorsque que vous arriver a porte vous lui tranchez la gorge pour le fouiller \n" );
printf("je te previen je nai pas confiance faisont chemin a part mais merci de mavoir sauver tien je toffre des vivre \n" );

printf("en fouillant son corp vous trouvez une machette sous sa veste \n" );
printf("il na surement pas eu le temp de la sortire que les zombie etait deja sur lui desormais elle est mienne   \n" );









printf("vous continuez votre errance sans butte particulier jusqua tomber dans un cul de sac vous esseyler douvire une porte mais elle est fermer et une alarme se declanche  \n" );
printf("merde sa va rameuter les zombie des allentoure!!! \n" );

printf("je doit forcer cette porte \n" );
printf("je devrai faire demi tour \n" );


printf("en essayant de forcer la porte vous perdez du temp et des grognemen surgie derniere vous des zombie arrive \n" );

printf("je doit forcer plus fort \n" );
printf("vennez vous batre bande de merde\n" );

printf("vous n'arrivez pas a ouvire la porte a temp vous sentez des crocs vous tansperser la nuque vous mourrez dans datroce soufrance \n" );
printf("vous sortez votre machette et decapitez le premier zombie puis vous remarquer qu'un zombie arrive sur vote droite vous lui plantez la machatte dans l'oiel mais elle reste plante dans sa boite craniene \n" );

printf("je continu de les tuer au poing  \n" );
printf("je sort mon couteau \n"  );

printf("vous sortez votre couteau trop longtemp vous soufrez puis la mort vous emporte en tan que guerrier felicitation \n" );
printf("vous sortez votre couteau vous tuez deux zombie vous les aurait emportez dans votre tombe felicitation vous mourrez de maniere digne \n" ); //le bute du jeu cest me mourire de maniere digne en faite XD








    return 0;
} 
*/


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




