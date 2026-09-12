#include "levina.h"

long long factorial(int n) {
	long long result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

long long doubleFactorial(int n) {
	long long result = 1;
	for (int i = n%2+2; i <= n; i += 2) {
		result *= i;
	}
	return result;
}