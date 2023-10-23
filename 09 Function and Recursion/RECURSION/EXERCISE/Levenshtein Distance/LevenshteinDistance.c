#include<stdio.h>
#include<string.h>

int minFunc(int a, int b, int c){
	int min = a;
	if(b < min) min = b;
	if(c < min) min = c;	
	return min;
}

int LevenshteinDistance(const char *s, int len_s, const char *t, int len_t){ 
  int cost;

  if(len_s == 0) return len_t;
  if(len_t == 0) return len_s;

  if(s[len_s-1] == t[len_t-1])
      cost = 0;
  else
      cost = 1;

  return minFunc(LevenshteinDistance(s, len_s - 1, t, len_t    ) + 1,
                 LevenshteinDistance(s, len_s    , t, len_t - 1) + 1,
                 LevenshteinDistance(s, len_s - 1, t, len_t - 1) + cost);
}

int main(){
	int k = 0;
	int i = 0;
	int distance = 0;
	char s1[101], s2[101];
	scanf("%d", &k);
	for(i=1 ; i<=k ; i++){
		scanf("%s %s", s1, s2);
		distance = LevenshteinDistance(s1, strlen(s1), s2, strlen(s2));
		printf("Case #%d: %d\n", i, distance);
	}	
	return(0);
}
