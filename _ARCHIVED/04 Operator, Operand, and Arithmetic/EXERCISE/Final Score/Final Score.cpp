#include<stdio.h>

int main(){
	float T, Ut, Ua;
	float finalScore;
	T = Ut = Ua = finalScore = 0;
	
	scanf("%f %f %f", &T, &Ut, &Ua);
	finalScore = (T*0.2) + (Ut*0.3) + (Ua*0.5);

	printf("%.2f\n", finalScore);
	
	return (0);
}
