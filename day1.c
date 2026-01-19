#include <stdio.h> // Stupid C, imagine having to manually include basic functions

int main() {
  int numero = 0; // Python-ish, except C is stupid and we have to tell it that the variable is an integer
  while (numero < 100000) {
    numero += 1;
  }
  printf("I finally got to %d. See? I'm better than Python.\n", numero); // Apparently, C dosen't automatically make line breaks, so \n is necessary at the end of printf and scanf
  return 0; // C is even stupider, you have to return something or it nukes itself
}

/* Day 1 of C Programming
This program counts to 100,000 and alerts me afterward.
Uses: include, int, while, return, printf
Comment: Similar to Python, easy yet insanely confusing. Looking forward to Day 2
*/
