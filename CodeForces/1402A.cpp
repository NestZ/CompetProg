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

const ll MOD = 1e9 + 7;

ll bin_pow(ll a, ll b){
  ll res = 1;
  while(b > 0){
    if(b & 1)res = res * a % MOD;
    a = a * a % MOD;
    b >>= 1;
  }
  return res;
}

ll inv2 = bin_pow(2ll, MOD - 2);

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;cin >> n;
  ll ans = 0;
  //h w
  vector<pair<ll, ll>> arr(n); 
  for(ll i = 0;i < n;i++)cin >> arr[i].first;
  for(ll i = 0;i < n;i++)cin >> arr[i].second;
  arr.push_back({0, 0});
  vector<pair<ll, ll>> s;
  s.push_back({0, 0});
  for(ll i = 0;i < (ll)arr.size();i++){
    ll sum = 0;
    while(s.back().first > arr[i].first){
      ll hp = max(arr[i].first, s[(ll)s.size() - 2].first);
      ll hd = s.back().first - hp;
      sum = (sum + s.back().second) % MOD;
      s.pop_back();
      ans += (hd * (hd + 1) % MOD * inv2 % MOD + hd * hp % MOD) * 
        (sum * (sum + 1) % MOD * inv2 % MOD) % MOD;
      ans %= MOD;
    }
    if(s.back().first == arr[i].first){
      s.back().second = (s.back().second + sum + arr[i].second) % MOD;
    }
    else{
      s.push_back({arr[i].first, (sum + arr[i].second) % MOD});
    }
  }
  cout << ans << endl;
}
