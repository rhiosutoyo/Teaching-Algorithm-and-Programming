//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include<stdio.h>
#include<string.h>

// FUNCTION TO PRINT DATA
void printHeroPooL(char name[][200], int health[], double damage[], int magic[], int c){
	for(int i=0 ; i<c ; i++){
		printf("%-10s %10d %10.2lf %10d\n", name[i], health[i], damage[i], magic[i]);
	}
}

// FUNCTION TO SWAP DATA IN THE ARRAY
void swapHeroPosition(char name[][200], int health[], double damage[], int magic[], int x, int y){
	char tempChar[200] = "";
	int tempInt = 0;
	double tempDouble = 0;

	// SWAP NAME
	strcpy(tempChar, name[x]);
	strcpy(name[x], name[y]);
	strcpy(name[y], tempChar);
	
	// SWAP HEALTH
	tempInt = health[x];
	health[x] = health[y];
	health[y] = tempInt;	

	// SWAP DAMAGE
	tempDouble = damage[x];
	damage[x] = damage[y];
	damage[y] = tempDouble;	
	
	// SWAP HEALTH
	tempInt = magic[x];
	magic[x] = magic[y];
	magic[y] = tempInt;
}

int main(){
	// HOW MANY HERO THAT WE WANT TO CREATE
	int count = 5;

	// THE INPUT
	char name[5][200] = {"Axe", "Drow", "Crystal M", "Omni K", "Doom"};
	int health[5] =    {600, 300, 250, 500, 650};
	double damage[5] = {22.5, 31.7, 15.0, 39.5, 35.21};
	int magic[5] = {10, 20, 30, 40, 50};
	
	// TRY TO CREATE A FUNCTION TO PRINT ALL OF THESE ATTRIBUTES
	printHeroPooL(name, health, damage, magic, count);
	
	// TRY TO SWAP DATA IN THE ARRAY
	int x = 2;
	int y = 4;
	swapHeroPosition(name, health, damage, magic, x, y);

	puts("");

	// TRY TO CREATE A FUNCTION TO PRINT ALL OF THESE ATTRIBUTES
	printHeroPooL(name, health, damage, magic, count);

	return(0);
}
