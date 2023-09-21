//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include <stdio.h>

const float Pi = 3.14;	  						/*Constant declaration*/

int main(){              						/*start main program*/
	float r = 0; 								/*local variable*/
	float area = 0;

	scanf("%f", &r);  							/*r input from keyboard*/
	area = Pi * r * r;
	printf("Circle area = %5.2f", area);		/*print out to screen*/

	return (0);
}												/*end of main program*/
