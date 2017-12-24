#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

bool compare(int a, int b) {
    return (a<b);
}

vector<int> allFactors(int A) {
    vector<int> factors;
    for(int i = 1; i <= sqrt(A); i++ ){
        if(A%i == 0){
            factors.push_back(i);
            if(i != sqrt(A))
                factors.push_back(A/i);
        }
    }
    std::sort(factors.begin(), factors.end(), compare);
    return factors;
    
}

int main() {
	vector<int> all_factors = allFactors(5);
	for(int i = 0; i < all_factors.size(); i++)
		cout << all_factors[i] << endl;
	return 0;
}