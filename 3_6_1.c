
include<stdio.h>

int main(void){
 float a;
 printf("Please input:");
 scanf("%f",&a);
 printf("%f 有 %e 个水分子.\n",a,a*950/3E-23);
 return(0);
}