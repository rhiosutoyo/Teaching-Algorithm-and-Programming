//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include<stdio.h>

int main(){
	// the full mark is 100; to pass, you need 65 of 100
	int score = 100;

	// the full attendance is 13; to pass, you need 9 of 13
	int attendance = 8;
	
	// every selection have a scope by giving them { }
	// if this is true, then run the scope

	// in order to pass the subject, both conditions should be true
	if(score >= 65 && attendance >= 9){		
		printf("YOU PASS THE SUBJECT\n");
		printf("CONGRATS\n");
	}
	else{
		//if(score < 65 || attendance < 9){
			printf("YOU FAILED THE SUBJECT\n");
			printf("TRY AGAIN\n");		
		//}
	}
	
	// to check attendance 
	// if one of the condition is true, the attendance is recorded
	bool submitToBIMAY 	 = true;
	bool submitToMsTeams = false;
	
	if(submitToBIMAY == true || submitToMsTeams == true){
		printf("Thank you for your attendance!\n");
		printf("See you again next week!\n");
	}
}
