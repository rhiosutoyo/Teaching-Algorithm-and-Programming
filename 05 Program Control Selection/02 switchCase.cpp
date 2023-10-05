//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include <stdio.h>
int main()
 {
    float val1, val2; char op;
	while(1) {
      	printf("Type [float_1] [operator] [float_2]: ");
      	scanf("%f %c %f", &val1, &op, &val2); getchar();
      	
//      	if(op == '+') printf(" = %.2f\n", val1 + val2);
//      	else if(op == '-') printf(" = %.2f\n", val1 - val2);
//      	else if(op == '*') printf(" = %.2f\n", val1 * val2);
//      	else if(op == '/') printf(" = %.2f\n", val1 / val2);
//		else printf("unknown operator!\n"); 
      	
		// break is used to stop the switch case from running
      	switch(op){
      	        case('+') : printf(" = %.2f\n", val1 + val2); 
      	        case('-') : printf(" = %.2f\n", val1 - val2); 
      	        case('*') : printf(" = %.2f\n", val1 * val2); break;
      	        case('/') : printf(" = %.2f\n", val1 / val2); 
      	        default   : printf("unknown operator!\n"); 
   		}
    }
    return(0);
}
