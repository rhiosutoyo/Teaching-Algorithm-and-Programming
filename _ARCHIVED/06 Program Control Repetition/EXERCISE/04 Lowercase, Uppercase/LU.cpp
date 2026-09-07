#include<stdio.h>
#include<string.h>

// String Manipulation (medium)
int main(){
	int T;
	char str[200000];
	int lower, bigger, len;

	scanf("%d", &T); getchar();
	for(int i=1 ; i<=T ; i++){
		scanf("%[^\n]", &str);		
		scanf("%d %d", &lower, &bigger); getchar();
		
		printf("CASE #%d: ", i);

		len = strlen(str);
		for(int j=0 ; j<len ; j++){
			if( (j+1) % lower == 0){
				if(str[j] >= 'A' && str[j] <= 'Z')
					str[j] = str[j] - 'A' + 'a';
			}
			if( (j+1) % bigger == 0){
				if(str[j] >= 'a' && str[j] <= 'z')
					str[j] = str[j] - 'a' + 'A';
			}
			printf("%c", str[j]);
		}
		puts("");
	}
	return (0);
}
