//Palindrome means if we divide the string into two halves, the left half mirros the right half
//But we can also say: the string reads the same in reverse. This makes programming simpler by not dealing 
//with odd and even string length.
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int isPalindrome(int test) {
	string s=to_string(test);
	string t = s;
	reverse(s.begin(), s.end());
	return (s.compare(t));

}
int main()
{
	int max(1000);
	int ans(-1);
	for (int i = 100; i < max; i++) {
		for (int j = 100; j < max; j++) {
			int temp = i*j;
			if (isPalindrome(temp) == 0 && temp > ans) {
				ans = temp;
			}
		}

	}

	cout << ans;
	cin.get();
	return 0;
}

