#include <stdio.h>
#include <time.h>

int count() {
const long long limit = 1000000000LL; // Correction: int for 10 digits, long for 20 digits (64-bit systems, 32 bit is 10), and long long is 20 digits also, double is a number with a decimal.
long long counting = 0; // In C, if a variable is declared but isn't assigned a variable. It's trash.
int diff;
time_t start, end;

start = time(NULL);
while (counting < limit) {
counting++;
}
end = time(NULL);
diff = end - start;
return diff;
}

int main() {
int times[5], sum;
double avg;
sum = 0; // Again, has to be assigned a value.
  
for (int c = 0; c < 5; c++) { // "int c = 0;" is the start, "c < 5;" is the stop, and "c++" is the step.
times[c] = count();
}
for (int s = 0; s < 5; s++) {
sum += times[s];
}
avg = (double)sum / 5;

int max = times[0];
int min = times[0];
for (int l = 1; l < 5; l++) {
if (times[l] > max) {
max = times[l];
}
if (times[l] < min) {
min = times[l];
}
}
printf("Finished!\nFastest Time of Completion: %d Seconds\nSlowest Time of Completion: %d Seconds\nAverage Time: %f Seconds\n", min, max, avg);
return 0;
}

/* Day 3 of C Programming
This program is a modification of Day 2, now, it includes 5 rounds and computes the average and the ranges of the time taken to count.
Uses: return, printf, double, long long, int, for, if, while, time
Comments: C is starting to become a bigger pain in my rear. Why? Because Python holds my hand when managing memory and C dosen't.
*/
