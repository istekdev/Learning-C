#include <stdio.h>
#include <time.h> // An overdramatic version of "import time"

int main() {
const int limit = 1000000; // Can literally be any number, just remember to add long when it gets too big. "int" is for 10 digit numbers, "long" is for 19 digit numbers, and "long long" is for 19 digits and above.
int largenum = 0;
int difference;
time_t start;
time_t end;
start = time(NULL); // NULL sets it to the time from now to the UNIX epoch.

while (largenum < limit) {
largenum++; // Turns out, this is more minimalistic compared to +=
  }
end = time(NULL);
difference = end - start;
printf("Task Finished!\nLimit: %i\nTime: %i Seconds\n", largenum, difference);
return 0;
}

/* Day 2 of C Programming
This program is a modification of Day 1, utilizing the UNIX timestamp to measure how long it takes to count to 1000000.
Uses: const, include, int, time, while, printf, and return
Comment: I ran out of ideas, so I decided to try and work my way to the simpler modules, and this is insanely fast. Python would catch on fire if it was given this exact instruction. Good job, C. */
