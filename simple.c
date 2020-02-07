#include <stdio.h>
#include <math.h>

int main() {
	int nums[10] = {1, 3, 4, 5, 6, 7, 9, 11, 12, 15};
	double avg = 0;
	int i;
	for (i = 0; i < 10; i++) {
		avg += sqrt(nums[i]);
	}
	avg /= 10;
	printf("%lf", avg);
	return avg;
}
