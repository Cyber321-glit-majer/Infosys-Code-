#include <iostream>
using namespace std;

#include<bits/stdc++.h>
#define mod 1000000007


int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<long long> a(n);
  for(auto &nx : a){cin >> nx;}
  sort(a.begin(),a.end());
  long long res=0,suf=0;
  for(long long i=n-1;i>=0;i--){
    res+=(a[i]*a[i]);res%=mod;

    res+=(a[i]*suf);res%=mod;
    suf*=2;suf%=mod;
    suf+=a[i];suf%=mod;
  }
  cout << res << '\n';
  return 0;
}

	// your code goes h
