#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin >> n;
	vector<int> arr(n);
	for(int i = 0;i < n;i++)cin >> arr[i];
	int curr = 1;
	int ans = 1;
	for(int i = 1;i < n;i++){
		if(arr[i] <= arr[i - 1] * 2){
			curr++;
		}
		else curr = 1;
		ans = max(ans, curr);
	}
	cout << ans;
}
