#include<stdio.h>

int main(){
	// T = TM
	// Ut = MID EXAM
	// Ua = FINAL EXAM

	float T, Ut, Ua;
	float finalScore;
	T = Ut = Ua = finalScore = 0;
	
	scanf("%f %f %f", &T, &Ut, &Ua);
	finalScore = (T*0.2) + (Ut*0.3) + (Ua*0.5);

	printf("%.2f\n", finalScore);
	// 90 - 100
	if(finalScore >= 90) printf("Grade: A\n");
	// 85 - 89
	else if(finalScore >= 85) printf("Grade: A-\n");
	// 80 - 84
	else if(finalScore >= 80) printf("Grade: B+\n");
	// 75 - 79
	else if(finalScore >= 75) printf("Grade: B\n");
	// 70 - 74
	else if(finalScore >= 70) printf("Grade: B-\n");
	// 65 - 69
	else if(finalScore >= 65) printf("Grade: C\n");
	// 50 - 64
	else if(finalScore >= 50) printf("Grade: D\n");
	// <50
	else printf("Grade: E\n");
	return (0);
}
