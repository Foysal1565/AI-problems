#include <stdio.h>
int C=0;  // number of passengers in boat boat
int x; //number of army on each team
int B=0;  //total army on side B
int i,s=0; //Steps


int main(){

   printf("The number of army on each team:\n"); // let the user choose the number of army on each team
   scanf("%d" , &x);

int A=2*x; // A is the number of total army
int y=x+1;  // variable for the for loop
int d=A; // d is the variable for boat loop


for (i=0; i<y; i++){
   printf("STEP: %d\n", s);

     if (A<d) {
    C=2;  }
     else {
    C=0;
          }


   printf("the number of Army at side A: %d\n", A);
   printf("passengers being carried in boat: %d\n", C);
   printf("the number of Army at side B: %d\n\n\n\n", B);


   s=s+1;
   A=A-2;
   B=B+2;
   }

   return 0;
}
