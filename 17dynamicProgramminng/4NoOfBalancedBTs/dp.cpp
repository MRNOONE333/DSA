// DP with iterative bottom-up approach
#include <iostream>
#define mod 999999999
using namespace std;

long long int countBT(int h) {
	
	long long int dp[h + 1];
	//base cases
	dp[0] = dp[1] = 1;
	for(int i = 2; i <= h; i++) {
		dp[i] = (dp[i - 1] * ((2 * dp [i - 2])%mod + dp[i - 1])%mod) % mod;
	}
	return dp[h];
}
int main()
{
	int h;
    cout<<"enter height: ";
    cin>>h;
	cout<< countBT(h) << endl;
}