// biggest-prime.cpp
// finds greatest prime up to given N
// Jonah Mann 2020-06-04

#include <iostream>
using namespace std;

// is M prime?
bool isPrime(int m) {
	bool prime = true;
	int i = 2; //int division

	while (prime && (i<=m/2)) {
		if (m%i == 0) {
			prime = false;	
		}
	i++;
	}

	return prime;
}

// take input
int promptInput() {
	int n = 0;
	while (n < 2) {
		cout << "Enter integer N >= 2 :\n";
		cin >> n;
		if (n < 2) {
			cout << "Invalid input!\n";
		}

	}
	
	return n;
}

int main() {
	// get input
	int hpf = promptInput();

	// find highest prime
	while (!(isPrime(hpf)))	{
		hpf--;
	}

	// output
	cout << "The greatest prime up to N is :\n";
	cout << hpf << "\n";
	return 0;
}
