#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void remove_duplicates(char* s){
  if (s[0] == 0){
    return;
  }
  int32_t j = 1;
  for (int32_t i = 1; s[i] != 0; ++i){
    if (s[i] != s[i-1]){
      s[j++] = s[i];
    }
  }
  s[j] = 0;
  
}

int32_t main(){
  
  char *s = NULL;

  size_t sz;
  getline(&s, &sz, stdin);
  //printf("%s",s);

  remove_duplicates(s);
  printf("%s\n",s);

  free(s);
  return 0;
}