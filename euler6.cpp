/*
* Euler 6: The simple solution is brute force, but it can lead to overflow. 
* Looking at expansion of square or trinomial, we see that (a + b + c)^2 = a^2 + b^2 + c^2 + 2ab + 2ac + 2bc
* So it comes down to 2ab + 2ac + 2bc. 
* If the limit is 1000, we might overflow.
* Luckily, discrete math comes into play. We can use the closed form to do this in O(1) time.
* s1: http://home.cc.umanitoba.ca/~thomas/Courses/textS1-21.pdf
* s2: http://www.maths.surrey.ac.uk/hosted-sites/R.Knott/runsums/triNbProof.html
*/

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <climits>


using namespace std;

/*
*Use closed form for both series
*/
int euler6(int max) {
	int s1 = max*(max + 1)*(2*max+1)/ 6;
	int s2 = max*(max + 1) / 2;
	s2 *= s2;
	return s2 - s1;
}

int main()
{

	long long start = clock();
	int ans = euler6(100);
	long long stop = clock();
	cout << "Time: " << stop - start << " ms" << endl;
	cout << ans;
	cin.get();
	return 0;
}

