/*
* Euler 9
* Analysis: we can do a brute force, which means we can reach 999^3 cases.
* We can do some optimizations:
* Since a^2 + b^2 = c^2, so c >a and c >b.
* Constraint is a + b + c = 1000 and we know there is only one triplet so we don't need a third loop.
* Also, factoring (a + b + c)^2 = 1000^2, we get: ab + 1000c = 500000. We can use this contraint if needed.
*
* Therefore, after optimization, we will check less than 2/3 of 1000^2 cases. 
*/

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <climits>


using namespace std;

bool triplet(int a, int b, int c) {
	if (a*a + b* b == c*c)
		return true;
	else return false;
}

void euler9() {
	int a(0), b(0), c(0);

	for (int i = 1; i < 1000; i++) {
		for (int j = i; j < 1000 - i; j++) {
			int k = 1000 - i - j;
			if (k < i || k < j)
				continue;
			if (triplet(i, j, k) == false)
				continue;
			else {
				a = i, b = j, c = k;
				cout << i << ' ' << j << ' ' << k << endl;
				return;

			}
		}
	}
}

	int main()
	{

		long long start = clock();
		euler9();
		long long stop = clock();
		cout << "Time: " << stop - start << " ms" << endl;
		//cout << ans;
		cin.get();
		return 0;
	}

