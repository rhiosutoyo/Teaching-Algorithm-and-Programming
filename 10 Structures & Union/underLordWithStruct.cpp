//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include<stdio.h>
#include<string.h>

typedef struct underLordDota{
	char heroName[200];
	int health;
	double damage;
	int magic;
}DotaHero;

// FUNCTION TO PRINT DATA ON A STRUCT
void printHeroPooL(struct underLordDota heroPool[], int c){
	for(int i=0 ; i<c ; i++){
		printf("%-10s %10d %10.2lf %10d\n", heroPool[i].heroName, 
		heroPool[i].health, heroPool[i].damage, heroPool[i].magic);
	}
}

void swapHeroPosition(struct underLordDota heroPool[], int x, int y){
	struct underLordDota tempHero;

	tempHero = heroPool[x];
	heroPool[x] = heroPool[y];
	heroPool[y] = tempHero;
}

int main(){
	// HOW MUCH HERO WE WANT TO CREATE
	int count = 5;

	// ARRAY OF STRUCTURE
//	struct underLordDota heroPool[count];
	DotaHero heroPool[count];

	// THE INPUT
	char name[5][200] = {"Axe", "Drow", "Crystal M", "Omni K", "Doom"};
	int health[5] =    {600, 300, 250, 500, 650};
	double damage[5] = {22.5, 31.7, 15.0, 39.5, 35.21};
	int magic[5] = {10, 20, 30, 40, 50};
	
	// STORE ALL INPUT TO THE DATA STRUCT
	for(int i=0 ; i<count ; i++){
		strcpy(heroPool[i].heroName, name[i]);
		heroPool[i].health = health[i];
		heroPool[i].damage = damage[i];
		heroPool[i].magic = magic[i];
	}
	
	// TRY TO CREATE A FUNCTION TO PRINT ALL OF THESE ATTRIBUTES
	printHeroPooL(heroPool, count);
	
	// TRY TO SWAP DATA IN THE ARRAY
	int x = 2;
	int y = 4;
	swapHeroPosition(heroPool, x, y);
	
	puts("");

	// TRY TO CREATE A FUNCTION TO PRINT ALL OF THESE ATTRIBUTES
	printHeroPooL(heroPool, count);
	
	return (0);
}
