// C++ program to prll all prime factors
#include <bits/stdc++.h>
using namespace std;
#define ll long long
// A function to prll all prime
// factors of a given number n
void primeFactors(ll n,vector<ll> &value)
{
	// Prll the number of 2s that divide n
	while (n % 2 == 0)
	{
		if(find(value.begin(),value.end(),2)==value.end()){
            value.push_back(2);
        }
		n = n/2;
	}

	// n must be odd at this poll. So we can skip
	// one element (Note i = i +2)
	for (ll i = 3; i <= sqrt(n); i = i + 2)
	{
		// While i divides n, prll i and divide n
		while (n % i == 0)
		{
			if(find(value.begin(),value.end(),i)==value.end()){
            value.push_back(i);
        }
			n = n/i;
		}
	}

	// This condition is to handle the case when n
	// is a prime number greater than 2
	if (n > 2)
		cout << n << " ";
}

/* Driver code */
int main()
{
	ll n = 72;
    vector<ll> value;
	primeFactors(n,value);
    for(auto i:value) cout<<i<<" ";
	return 0;
}

// This is code is contributed by rathbhupendra
