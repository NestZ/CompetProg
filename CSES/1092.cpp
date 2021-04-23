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

  int n;cin >> n;
  if(n <= 2 || ((n - 1) / 2) % 2 == 0)cout << "NO";
  else {
    cout << "YES\n";
    vector<int> same, diff;
    bool d = true;
    int l = 1, r = n;
    if(n & 1) {
      same.push_back(n);
      r--;
    }
    while(l < r) {
      if(d) {
        diff.push_back(l++);
        diff.push_back(r--);
      } else {
        same.push_back(l++);
        same.push_back(r--);
      }
      d = !d;
    }
    cout << diff.size() << endl;
    for(int i : diff)cout << i << ' ';
    cout << endl << same.size() << endl;
    for(int i : same)cout << i << ' ';
  }
  cout << endl;
}
