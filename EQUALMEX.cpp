#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
	ll t;
	cin>>t;
	while(t--) {
		ll n; cin>>n;
		vector<int> count(n+1, 0);
		for(int i=0;i<2*n;i++) {
			int ai; cin>>ai;
			count[ai]++;
		}

		int flag=0;
		for(int i=0;i<(n+1);i++) {
			if(count[i]==0) {
				cout<<"yes"<<endl;
				flag=1;
				break;
			}
			if(count[i]==1) {
				cout<<"no"<<endl;
				flag=1;
				break;
			}
		}
		if(!flag)
		cout<<"yes"<<endl;
	}
	return 0;
}
