#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int lis[n];
		for(int i=0; i<n; ++i)
			cin >> lis[i];
		for(int i=0; i<n; ++i)
			cout << lis[i];
		cout << "\n";
	}
}
