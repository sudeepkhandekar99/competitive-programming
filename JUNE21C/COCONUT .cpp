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
#define vector<int> vi;
#define pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)



int main() {
    ll t;   cin>>t;
    while(t--){
        ll a, b, x, y;  cin>>a >>b>> x>> y;
        ll ans = x/a + y/b;

        if(x%a != 0)    ans += 1;
        if(y%b != 0)    ans += 1;

        cout<<ans<<endl;
    }
    return 0;
}