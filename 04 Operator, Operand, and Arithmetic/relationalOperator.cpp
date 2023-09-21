//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include<stdio.h>

int main(){
	bool flag = false;
    int x=5, y=5;
    if (x == y) printf("%d equal %d\n",x,y);
    if (x != y) printf("%d not equal %d\n",x,y);

 	// A
    if (x < y) // x < y --> TRUE / 1
		printf("%d less than %d\n",x,y);
	// B 		
    if (x > y == false) // x > y --> FALSE / 0 
		printf("%d greater than %d\n",x,y);

	// A
    if ( x <= y) printf("%d less or equal than %d\n",x,y);
	// B
    if ( x >= y) printf("%d greater or equal than %d\n",x,y);
    
    
	x = (20 > 10);	// x value 1
	printf("%d\n", x);

	x = (20 == 10);	// x value 0
	printf("%d\n", x);

}

