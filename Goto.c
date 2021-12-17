#include <stdio.h>

int main() {

  
   int i;
   float number, average, sum = 0.0;

   for (i = 1; i <= 2; ++i) {
      printf("%d. Enter a number: ", i);
      scanf("%f", &number);
      
      // go to jump if the user enters a negative number
      if (number < 0.0) {
         goto jump;
      }
      sum += number;
   }

jump:
   average = sum / (i - 1);
   printf("Sum = %.2f\n", sum);
   printf("Average = %.2f", average);

   return 0;
}
