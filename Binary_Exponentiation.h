#include <bits/stdc++.h>
using namespace std;

long long Binary_Exponentiation(int b, int e){
	long long int ans = 1;
	while(e > 0){
		if(e&1)ans = ans*b;

			b = b*b;
			e >>=1;

	}
	return ans;
}
