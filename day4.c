#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

void welcome() { // Void functions are functions that only do their task, they return nothing. Hence the name. Duh.
  int day = 4;
  printf("Welcome to ISTEK's Journey of C\n---\n");
  sleep(1);
  printf("Current Day: %d\n", day);
}

char* date() { // Char functions are non-integer functions, as for the *. It basically directs C to the variable itself.
time_t raw = time(NULL);
struct tm *date = localtime(&raw); // It feels like time.localtime()
static char filler[26]; // Ensures "char" isn't changed forever.
strftime(filler, 26, "%Y-%m-%d %H:%M:%S", date); // Very similar to time.strftime()
return filler;
}

int rng(int limit) { // Even in arguments, C is too dumb to tell by itself whether "limit" is an integer or string.
return rand() % limit;
}

int main() {
srand(time(NULL));
char option[10];
int range;
welcome();
while (1) { // A C version of "while True"
printf("Options:\n[R] - RNG\n[T] - Time\n[X] - Exit\n>> \n");
scanf("%9s", option);

if (strcmp(option, "R") == 0 || strcmp(option, "[R]") == 0) { // An overdramatic version of "if x in y"
printf("Select A Limit: \n");
scanf("%d", &range);
printf("Random Number: %d\n", rng(range));
sleep(1); // C version of time.sleep(), this is a Linux version.
}
if (strcmp(option, "T") == 0 || strcmp(option, "[T]") == 0) {
printf("Today Is:\n%s\n", date());
sleep(1);
}
if (strcmp(option, "X") == 0 || strcmp(option, "[X]") == 0) {
exit(0); // New, exits the program like sys.exit(0)
}
}
}

/* Day 4 of C Programming
This is not a modification of Day 3. Instead, I decided to make a CLI program that has 3 options: Exit, RNG, and Time.
Uses: return, exit, sleep, time, scanf, printf, if, int, char, struct, void, static
Comment: It's starting to become easier to understand. But not easy to work with. */
