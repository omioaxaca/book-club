#include "AdivinaElNumero.h"

// Main
//	long long pista(long long x)

void adivina(long long a, long long b) {
	long long left = a;
	long long right = b;

	while(left <= right) {
		long long mid = left + (right - left) / 2;
		int clue = pista(mid);

		if (clue == 1) {
			left = mid + 1;
		} else if (clue == -1) {
			right = mid - 1;
		} else {
			break;
		}
	}
}