#include <stdio.h>
#include <stdlib.h>

//For printing the n first numbers of the Fibonacci sequence.
int fibonacci (int length) { 
   int* fibonacci = (int*)malloc(sizeof(int) * length);

   fibonacci[0] = 0;
   fibonacci[1] = 1;

   for (int i = 2; i < 10; i++) {
      fibonacci[i] = fibonacci[i - 1] + fibonacci[i- 2];
   }
return 0;
}

//For running "fibonacci (int length)" and spitting out the reference to the array into "int* fib" variable.
int main() {
   int* fib fibonacci(10);

   for (int i = 0; i < 10; i++) {
      printf("%d\n", fib[i]);
   }
return 0;
}
