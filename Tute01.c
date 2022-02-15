/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1,mark2,total,average;

  printf("Marks for Subject 1: ");//take the inputs
  scanf("%f", &mark1);
  printf("Marks for Subject 2: ");//take the inputs
  scanf("%f", &mark2);

  total = mark1 + mark2;//calculate the total
  average = total/2.0;//calculate the average
  printf("Average : %.2f", average);//display the average

  return 0;
}

