//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include<stdio.h>

int main(){
	long int hits = 0;
	long int baseAttack = 100;
	long int bonusDamage = 50;
	long int totalDamage = 0;
	
	scanf("%ld", &hits);
	bonusDamage = bonusDamage * ((hits * (hits-1)) / 2);
	totalDamage = (baseAttack*hits) + bonusDamage;
	printf("%ld\n", totalDamage);
	
	return (0);
}
