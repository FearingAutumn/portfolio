// primes.cpp
// lists primes up to given N
// Jonah Mann 2020-06-05
// https://github.com/FearingAutumn/portfolio

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

// take input
int promptInput() {
	double n = 0.0;

	while (n < 2.0) {
		cout << "Enter integer N >= 2 :\n";
		cin >> n;

		if (n < 2.0) {
			cout << "Invalid input!\n";
		}
	}
	
	return (int)n;
}

int main() {
	// initialise
	int n = promptInput();
	bool A[n+1];
	int rootN = sqrt(n);
	int i, j;

	for (i=2; i<=n; i++)
		A[i] = true;

	// eliminate composites
	for (i=2; i<=n/2; i++)
		if (A[i])
			for (j=2*i; j<=n; j+=i)
				A[j] = false;

	// output
	cout << "Primes up to " << n << " are :\n";
	for (i=2; i<=n; i++)
		if (A[i] == true)
			cout << i << "\t";
	cout << "\n";

	return 0;
}
