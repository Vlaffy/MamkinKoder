#include <stdio.h>

void logDebug(char c){
  if(c=='m')
    printf("max finished\n");
  if(c=='!')
    printf("the program finished\n");
  if(c=='d')
    printf("doComputation finished\n");
}
