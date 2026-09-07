//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include <stdio.h>

int main () {
	int x = 5;
//	x++;
	x = x + 1;
    printf("%d\n", x);	// 6
	
    x = 10;
    printf("%d\n", x);	// 10

    x = x + 20;
    printf("%d\n", x);	// 30

	x += 30;			// x = x + 30
	printf("%d\n", x);	// 60
	
	int y = 10;
	x /= y;						// x = x / y
	printf("%d\n", x+=10);		// 16
	
}

