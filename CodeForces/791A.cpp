#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	int a,b;cin >> a >> b;
	int ans = 0;
	while(a <= b){
		ans++;
		a *= 3;
		b *= 2;
	}
	cout << ans;
}