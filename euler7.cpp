/*
* Euler 7: The problem with using brute force is it can be very slow.
* Using the sieve of Eratosthenes, we might run out of memory if the limit for the array is big.
* However, we use a boolean array, so it should reduce the size.
* In this case, limit is 10000 prime number, but the actual prime number can be bigger.
*/

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <climits>


using namespace std;

void SieveOfEratosthenes(int n)
{
	// Create a boolean array "prime[0..n]" and initialize
	// all entries it as true. A value in prime[i] will
	// finally be false if i is Not a prime, else true.
	bool prime[200001];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p*p <= n; p++)
	{
		// If prime[p] is not changed, then it is a prime
		if (prime[p] == true)
		{
			// Update all multiples of p
			for (int i = p * 2; i <= n; i += p)
				prime[i] = false;
		}
	}

	// I improved the algo here. Instead of printing the prime numbers, just print the 10001 prime.
	int count = 0;
	for (int p = 2; p <= n; p++)
	{
		if (prime[p])
			count++;
		if (count == 10001)
		{
			cout << p << endl;
			break; 
		}
	}
}
int main()
{

	long long start = clock();
	SieveOfEratosthenes(200000);
	long long stop = clock();
	cout << "Time: " << stop - start << " ms" << endl;
	//cout << ans;
	cin.get();
	return 0;
}

