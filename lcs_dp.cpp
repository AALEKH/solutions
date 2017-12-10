#include <iostream>
#include <string>

using namespace std;

int max(int a, int b) {
	return (a>b)?a:b;
}

int lcs(string x, string y, int m, int n) {
	if(m == 0 || n == 0)
		return 0;
	if(x[m-1] == y[n-1])
		return 1+lcs(x, y, m-1, n-1);
	else
		return max(lcs(x, y, m, n-1), lcs(x, y, m-1, n));
}

int main() {
	string first = "AGGTAB";
	string second = "GXTXAYB";

	cout << "Length of Longest Common Subsequence: " << lcs(first, second, first.length(), second.length()) << endl;
	return 0;
}
