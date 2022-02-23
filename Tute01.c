/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
  float average;
  
  printf("Input mark 1 \n");
  scanf("%d",&mark1);

  printf("Input mark 2 \n");
  scanf("%d",&mark2);

  average=(mark1+mark2)/2.0;
  printf("Average is %.2f\n ",average);
  
  
  return 0;
}

