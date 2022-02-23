/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int x, int y);
int maximum(int x, int y);
int multiply(int x, int y);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);

  printf("Minimum number is \n");
     printf(" %d\n ", minimum(no1, no2));
  printf("Miximum number is \n");
     printf(" %d\n ", maximum(no1, no2));
  printf("Multiply is \n");
    printf("multiply %d\n ", multiply(no1, no2));
   return 0;
}
int minimum(int x, int y)
{if(x<y){
    return x;  }
  else{
    return y;
  }}
  int maximum (int x, int y)
{if(x>y){
    return x;
  }
  else{
    return y;}
}
int multiply(int x, int y){
  return x*y;
}
