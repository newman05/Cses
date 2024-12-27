
#include<bits/stdc++.h>

#define ll long long
#define nline '\n' 
#define FOR for(int i = 0 ;i < n ; i++) cin>>v[i];
#define nv int n ; cin>>n ; vector<int>v(n) ;
#define SORT sort(v.begin() , v.end()) ;

using namespace std ;

int main(){ ;
ios_base::sync_with_stdio(false);
cin.tie(NULL);

ll n ;
cin>>n ;

if( n == 1 ) {
  cout<<1<<nline ;
}
else {
  cout<<n<<" " ;
  while(n !=  1) {
    if( n % 2 == 0 ) {
      cout<<(n/2)<<" " ;
       n = n / 2 ;

    }
    else {
      cout<<(3 * n ) + 1 <<" " ;
      n = (3 * n ) + 1 ;
    }
  }
}



return 0 ;
}