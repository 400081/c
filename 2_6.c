
#include<stdio.h>

void display(void);

int main(void){
 display(3);
 printf("\n");
 display(2);
 printf("\n");
 display(1);
 printf("\n");
 return(0);
}

void display(int x){
  for( i=0; i< x; i++){
    printf("Smile!");
  }
}
