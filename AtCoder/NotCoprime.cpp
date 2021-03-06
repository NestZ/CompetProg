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

  ll n;cin >> n;
  vector<ll> arr(n);
  set<ll> fac;
  for(ll i = 0;i < n;i++)cin >> arr[i];
  for(ll i = 0;i < n;i++){
    ll num = arr[i];
    for(ll j = 2;j * j <= num;j++){
      if(num % j == 0){
        fac.insert(j);
        while(num % j == 0){
          num /= j;
        }
      }
    }
    if(num > 1)fac.insert(num);
  }
  vector<ll> vf;
  for(ll i : fac)vf.push_back(i);
  int len = vf.size();
  ll ans = INT64_MAX;
  for(int i = 0;i < (1 << len);i++){
    ll cur = 1;
    for(int j = 0;j < len;j++){
      if((1 << j) & i){
        cur *= vf[j];
      }
    }
    ll cnt = 0;
    for(int j = 0;j < n;j++){
      if(__gcd(arr[j], cur) != 1)cnt++;
    }
    if(cnt == n)ans = min(ans, cur);
  }
  cout << ans << endl;
}
