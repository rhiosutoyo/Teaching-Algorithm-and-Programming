#include<stdio.h>
#include<string.h>

int main(){
	int tc = 0;
	int i = 0, j = 0;;
	int len = 0;
	int countNumeric = 0;
	int countAlphabet = 0;
	int countVocal = 0;
	int countSpace = 0;
	char S[1001] = "[ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789]";
//	char S[1001] = "[8]1N@ NU$@NT@R@_[U]n1v3r$1ty!!!";
	
	scanf("%d", &tc); getchar();
	for(i=1 ; i<=tc ; i++){
		countNumeric = countAlphabet = countVocal = countSpace = 0;
		scanf("%[^\n]", &S); getchar();
		len = strlen(S);
		for(j=0 ; j<len ; j++){
			// CONVERT FROM CAPITAL TO NON-CAPITAL
			if(S[j] >= 65 && S[j] <= 90){
				S[j] = S[j] - 'A' + 'a';		
			}
			// COUNT NUMERIC
			if(S[j] >= '0' && S[j] <= '9') countNumeric++;
			// COUNT ALPHABET
			else if(S[j] >= 'a' && S[j] <= 'z') countAlphabet++;
			// COUNT SPACE
			else if(S[j] == ' ' || S[j] == '_') countSpace++;

			// COUNT VOCAL CHARACTER IN ALPHABET
			if(S[j] == 'a' || S[j] == 'i' || S[j] == 'u' || S[j] == 'e' || S[j] == 'o') countVocal++;
		}
		// COUNT ALPHANUMERIC
		int countAlphaNumeric = len - (countAlphabet + countNumeric + countSpace);
		// COUNT NON-VOCAL
		int countNonVocal = countAlphabet-countVocal;

		// PRINT RESULT
		printf("CASE #%d: ", i);
		printf("%d %d %d %d\n", countVocal, countNonVocal, countNumeric, countAlphaNumeric);	
	}
	return (0);
}
