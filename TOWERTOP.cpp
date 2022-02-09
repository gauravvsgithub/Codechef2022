#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin>>t;
    while(t--) {
        ll x, m;
        cin>>x>>m;
        ll res = 0;
        ll tower=0;
        ll inventary=1;

        while(m--) {
            if((x-tower)>inventary) {
                tower+=inventary;
                inventary = tower;
            }
            else {
                inventary -= (x-tower);
                tower = x;
                inventary += tower;
                res++;
                tower = 0;
            }
        }

        cout<<res<<endl;
    }
    return 0; 
}