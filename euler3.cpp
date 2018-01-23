#include <iostream>
#include <vector>

using namespace std;

bool checkPrime(long long test) {
	for (long long i(2); i*i < test; i++) {
		if (test %i == 0)
			return false;
	}
	return true;
}

int main()
{
	long long max(3), ans(3);
	long long num = 600851475143;
	while (max * max < num) {
		if (num % max == 0) {
			bool check = checkPrime(max);
			if (check)
				ans = max;
		}
		max++;
	}


	cout << ans;
	cin.get();
	return 0;
}
