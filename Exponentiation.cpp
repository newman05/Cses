
#include<bits/stdc++.h>

#define ll long long
#define nline '\n' 
#define FOR vector<int>v(n) ;for(int i = 0 ;i < n ; i++) cin>>v[i];
#define nv int n ; cin>>n ; 
#define SORT sort(v.begin() , v.end()) ;
#define pfs vector<int>pf(n) ;pf[0] = v[0]; for (int i = 1; i < n; i++) pf[i] = pf[i - 1] + v[i];
#define stt  set<int>st ; st.insert(v.begin() , v.end());
#define pb push_back
#define SUM  long long vsum = accumulate(v.begin(), v.end(), 0LL);
#define ac ios_base::sync_with_stdio(false);
#define hoja cin.tie(NULL);
#define freqmap  unordered_map<int , int> mpp ; for(int i = 0 ; i < n ; i++) mpp[v[i]]++ ;
#define mlti multiset<pair<int, int>> ms ; // pair multiset useful over pair vector
// conc // string str = string(1 , s[i]) + s[i + 1] + s[i + 2] + s[i + 3] + 
// overflow // int mid = l + (r - l) / 2;

using namespace std ;

const ll mod = 1e9 + 7;


int expo (ll a , ll b ) {
    ll result = 1;
    while (b > 0) {
        if (b % 2 == 1) result = result * a % mod;
        a = a * a % mod; 
        b /= 2;
    }
    return result ;
}

int main(){ ;

ac hoja

int t ;
cin>>t ;

while(t--){


 ll a , b ;
 cin>>a>>b ;

 
 ll res = expo(a , b) ;

 cout<<res<<nline  ;


}
return 0 ;
}


