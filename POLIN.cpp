#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll t;
	cin>>t;
	while(t--) {
		unordered_set<ll> xset, yset;
		ll n;
		cin>>n;
		ll res = 0;
		for(ll i=0;i<n;i++) {
			int x, y;
			cin>>x>>y;
			if(xset.find(x) == xset.end()) {
				res++;
				xset.insert(x);
			}
			if(yset.find(y) == yset.end()) {
				res++;
				yset.insert(y);
			}
		}
		cout<<res<<endl;
	}		
	
	return 0;
}
