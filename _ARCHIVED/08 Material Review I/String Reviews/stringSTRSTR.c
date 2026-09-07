# include <stdio.h>
# include <string.h>  

int main() {  
  char string[200] = "This is a new song. Ole Ole Ole.";
  char substring[20] = "Ole";
  
  int i, j, l1, l2;  
  int count = 0;
  l1 = strlen (string);  
  l2 = strlen (substring);
  
  for(i=0 ; i<l1-l2 + 1 ; i++) {
    if (strstr(string+i, substring) == string + i) { 
        printf("index = %d\n", i);
        count++;
    //   break;     // if want to check the whole string, un-comment this
    }  
  }  
  printf("\nString: \"%s\"\nOccurance of substring \"%s\" is %d\n", string, substring, count);
  return (0);
}