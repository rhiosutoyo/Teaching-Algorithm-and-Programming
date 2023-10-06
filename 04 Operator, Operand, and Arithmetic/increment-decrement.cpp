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

	// post increment (print first, then plus)
    printf("print result = %d\n", x++);		// print result = 45 , x value = 46
    printf("x value now  = %d\n", x);
	
	// pre increment (plus first, then print)
    printf("print result = %d\n", ++y);		// print result = 44, y value = 44
    printf("y value now  = %d\n", y);

	printf("\nx = %d, y = %d\n", x, y);
}

