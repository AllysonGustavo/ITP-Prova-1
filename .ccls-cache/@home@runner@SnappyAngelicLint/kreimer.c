#include <stdio.h>

int main(){
  int A,B;

  scanf("%d %d",&A,&B);

  if (A == 1 || B == 1){
    printf("kreimer esta errado!\n");
  }
  if (A == 1 || B == 0){
    printf("Professor de kreimer");
  }
  
  return 0;
}