#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int ll;

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for(auto it = d.b;it != d.e;++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;cin >> s;
  ll n = s.length();
  vector<vector<ll>> suf(n, vector<ll>(26));
  for(ll i = n - 1;i >= 0;i--){
    suf[i][s[i] - 'a']++;
    if(i < n - 1){
      for(ll j = 0;j < 26;j++){
        suf[i][j] += suf[i + 1][j];
      }
    }
  }
  ll ans = 0;
  for(ll i = 0;i < 26;i++){
    for(ll j = 0;j < 26;j++){
      ll cur = 0;
      for(ll k = 0;k < n - 1;k++){
        if(s[k] - 'a' == i){
          cur += suf[k + 1][j];
        }
      }
      ans = max(ans, cur);
    }
  }
  ans = max(ans, *max_element(suf[0].begin(), suf[0].end()));
  if(n == 1)cout << 1;
  else cout << ans << endl;
}
