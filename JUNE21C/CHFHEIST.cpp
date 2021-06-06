// Author: Sudeep Khandekar
// Email: sudeepkhandekar99@gmail.com
// g++ upload.cpp && ./a.out < in.txt > out.txt

#include<bits/stdc++.h>

using namespace std;

#define int128 __int128_t
#define ddl long double
#define ll long long
#define dd double
#define endl "\n"
#define tab "\t"
// #define vector<int> vi;
// #define pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)



int main() {
    ll t;   cin>>t;
    while(t--){
        ll D, d, p, q;  cin>>D >>d >>p >>q;
        ll ans = 0, current = 0, factor = 0, check = 0;

        for(ll i = 0; i < D; i++){
            if(check >= d){
                factor++;
                check = 0;
            }
            current = p + q*factor;
            ans += current;
            check++;
        }


        cout<<ans<<endl;
    }
    return 0;
}