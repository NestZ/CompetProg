#include<bits/stdc++.h>
using namespace std;
// make pair, tuple
// __gcd(int, int)
// bool isPrime(int n){
//       if(n <= 1)return false;
//       if(n <= 3)return true;
//       if(n % 2 == 0 || n % 3 == 0)return false;
//       for(int i = 5;i * i <= n;i += 6){
//             if(n % i == 0 || n % (i + 2) == 0)return false;
//       }
//       return true;
// }
// int countSubString(string s, string temp){
//       int ans = 0;
//       size_t f = s.find(temp);
//       while(f != string::npos){
//             ans++;
//             f = s.find(temp, f + 1);
//       }
//       return ans;
// }

int main(){
    int n,k,q;cin >> n >> k >> q;
    int d = q - k;
    map<int, int> m;
    for(int i = 0;i < q;i++){
        int t;cin >> t;
        m[t]++;
    }
    for(int i = 0;i < n;i++){
        if(m[i + 1] > d)cout << "Yes\n";
        else cout << "No\n";
    }
}