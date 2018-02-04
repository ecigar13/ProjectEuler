// Euler 5: find the lowest common multiple of number from 1 to 20.
// We can find lcm of the first two numbers, then gradually add one
// more until we reach 20.
// It seems that C++ has stack overflow when debugging, but I don't know enough to fix this.
// Please help.

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <climits>


using namespace std;

/*
* To find GCD of two different number a, b
* if a > b, then we can find gcd of a-b and b instead.
* This function quickly reduce the number of calculations long longo
* three finite state machines: if one is zero, if they are equal
* and the rest of the cases.
*/
long long gcd(long long first, long long second) {
	if (first == 0 || second == 0) 
		return 0;
	if (first == second) 
		return first;
	if (first > second) 
		return gcd(first - second, second);
	return gcd(first, second - first);
}

/*
*This formula remove the overlapping gcd of the two numbers.
* leaving the lcm as the result
*/
long long lcm(long long first, long long second) {
	return first * second / gcd(first, second);
}

long long euler5(long long min, long long max) {
	long long start = min;
	for (long long i = min; i <= max; i++) {
		//find lcm of start and i
		cout << start << endl;
		start = lcm(start, i);
		
	}
	return start;
}

int main()
{

	long long start = clock();
	//function here
	long long ans = euler5(1, 20);
	long long stop = clock();
	cout << "Time: " << stop - start << " ms" << endl;
	cout << ans;
	cin.get();
	return 0;
}

