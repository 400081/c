#include<stdio.h>

void printf1(void);
void printf2(void);

int main(void){
  for( i=0; i< 3; i++){
    printf1();
  }
  printf2();
  return(0);
}

void printf1(void){
 printf("For he's a jolly good fellow!\n");
}

void printf2(void){
 printf("Which nobody can deny!\n");
}
