#include <iostream>
#include <string>

using namespace std;

int min_two(int a, int b) {
	return (a<b)?a:b;
}

int min(int a, int b, int c) {
	return min_two(min_two(a, b), c);
}

int editDist(string first, string second, int m, int n) {
	
	// Add all character
	if(m==0)
		return n;

	// Remove all character
	if(n==0)
		return m;

	if(first[m-1] == second[n-1])
		return editDist(first, second, m-1, n-1);

	return 1 + min(editDist(first, second, m, n-1), editDist(first, second, m-1, n), editDist(first, second, m-1, n-1));
}

int main() {
	string first = "Saturday";
	string second = "Sunday";

	cout << "Edit Distance is: " << editDist(first, second, first.length(), second.length());
	return 0;
}