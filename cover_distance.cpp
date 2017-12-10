// #include <vector>
#include <iostream>

using namespace std;

int countStepWays(int dist) {
	if(dist < 0) return 0;
	if(dist == 0) return 1;

	return countStepWays(dist-1) + countStepWays(dist-2) + countStepWays(dist-3);
}

int main() {
	int n  = 4;
	cout << "Way's to reach steps is: " << countStepWays(4) << endl;
}
