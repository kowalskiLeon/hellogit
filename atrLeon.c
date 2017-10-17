#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

double version = 0.1;

int chartype = -1;

char name[100];
char input;
int health;
int mana;
int rage;
int atk;
int def;
int mag;
int res;
int agi;
int luk;

void atrLeon(int chartype){

	switch(chartype){
	case 0: attacker();
	}


}

int main(){

	printf("Leon Artwork - Character Generation System v %.1f\n", version);
	printf("[Input] Character name:\n");
	scanf("%s", name);
	
	while(chartype < 0 || chartype >= 11)
	printf("Char Type [Do not confuse it with class]\n");
	printf("0 - Full Attacker	4 - Resistent Attacker 		8 - Speedster \n");
	printf("1 - Raw Mage		5 - Mana Burner 		9 - Poison Mage \n");
	printf("2 - Raw Healer		6 - Special Healer		10 - Exorcist \n");
	printf("3 - Mag Tank		7 - Phy Tank 			11 - Dual Tanker \n");
	scanf("%d", &chartype);
	printf("\n");

	srand( (unsigned)time(NULL) );
	atrLeon(chartype);	
		
	printf("%s \n", name);

return 0;
}


void attacker(int pAtk, int pDef, int pHealth, int pAgi){
	int boolean = 0;
	health = 80 + rand()%120 + (pHealth*(20 + rand()%60));
	while(boolean == 0){
	printf("[Input]Char will have Mana? (y/n)");
	scanf("%c", &input);
	if(input == 'y' || input == 'n' || input ='Y' || input = 'N')boolean = 1;
	else printf("ERROR 001: Wrong input! Type again! \n");
	}
	

}

