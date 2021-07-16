/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int num1, int num2);
int maximum(int num3, int num4);
int multiply(int num5, int num6);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum(int num1, int num2)
{
  int min;

  if(num1 < num2)
  {
    min = num1;
  }
  if(num2 < num1)
  {
    min = num2;
  }

  return min;
}

int maximum(int num3, int num4)
{
  int max;

  if(num3 > num4)
  {
    max = num3;
  }
  if(num4 > num3)
  {
    max = num4;
  }
  
  return max;
}

int multiply(int num5, int num6)
{
  return num5 * num6;
}
