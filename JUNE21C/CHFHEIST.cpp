#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
    ll t;   cin>>t;
    while(t--){
        ll D, d, p, q;  cin>>D >>d >>p >>q;
        ll n = D / d, rem = D % d; 
        ll ans = D*p + d*q*(n*(n-1)/2) + rem*(n*q);
        cout<<ans<<endl;
    } 
    return 0;
}