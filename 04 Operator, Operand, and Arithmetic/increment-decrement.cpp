//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include <stdio.h>

int main () {
    int x = 44;  int y = 44;
	printf("x = %d, y = %d\n", x, y);	
	x++;		// increment
	y--;		// decrement		
	printf("x = %d, y = %d\n", x, y);	// x = 45, y = 43

	// post increment
    printf("x = %d\n", x++);		// x = ?
	
	// post increment
    // printf("x = %d\n", x);
	// x++;
		
	// pre increment
    printf("y = %d\n", ++y);		// y = ?

	// pre increment
	// y++
    // printf("y = %d\n", y);		

	printf("\n\nx = %d, y = %d\n", x, y);
}

