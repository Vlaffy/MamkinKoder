#include <stdio.h>

int main() {
  int a = doComputation(5, 7); 
  int b = 5;
  int c = max(a, b);
  printf("result is %d\n",c);
  logDebug('!');  
 
  return 0; 
}
