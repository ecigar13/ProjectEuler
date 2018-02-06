/*
* Euler 10
* 
* Analysis: we can try the sieve of Eranthoses since it gives us a list of all primes. It's also
* efficient. However, we might overflow our variable since int only store up to 2 million. The 
* array can also overflow since we have to assign 2 million items.
*
* We can also cheat by using an array of pre-calculated primes. 
*/

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <climits>


using namespace std;

long long euler10(long long n) {
	vector<bool> prime;

	for (int i = 0; i <= n; i++) {
		prime.push_back(true);
	}

	for (int i = 2; i*i < n; i++) {
		if (prime[i] == true) {
			for (int j = i * 2; j <= n; j += i) {
				prime[j] = false;
			}
		}
	}

	long long total = 0;
	for (int i = 2; i < n; i++) {  //don't count 1 and zero
		if (prime[i] == true)
			total += i;
	}
	return total;
}

int main()
{

	long long start = clock();
	long long ans = euler10(2000000);
	long long stop = clock();
	cout << "Time: " << stop - start << " ms" << endl;
	cout << ans;
	cin.get();
	return 0;
}

