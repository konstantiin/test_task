#include <stdio.h>
#include <stdint.h>

void print_binary(int32_t n){
  for (int32_t bit = 31; bit > -1; bit--){
    uint32_t mask = (1 << bit);
    printf("%d", (n & mask) == 0 ? 0 : 1);
  }
}

int32_t main(){
  
  int32_t n;
  scanf("%d", &n);
  print_binary(n);

  return 0;
}