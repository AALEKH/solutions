#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<int> sieve(int A) {
    int primes[A];
    vector<int> answer;
    for(int i = 0; i <= A; i++)
        primes[i] = 1;
    primes[0] = 0;
    primes[1] = 0;
    for(int j = 2; j <= sqrt(A); j++){
        if(primes[j] == 1){
            for(int k = 2; k*j <=A; k++)
                primes[k*j] = 0;
        }
    }
    for(int l = 2; l <=A; l++)
        if(primes[l] == 1)
            answer.push_back(l);
    return answer;
}

int main() {
	vector<int> ans = sieve(15);
	for(int i = 0; i < ans.size(); i++)
		cout << ans[i] << endl;
	return 0;
}