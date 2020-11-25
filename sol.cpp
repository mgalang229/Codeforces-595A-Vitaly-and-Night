#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m, m*=2;
	int a[m], cnt=0;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<m; ++j)
			cin >> a[j];
		for(int j=0; j<m-1; ++j) {
			if(a[j]==1&&a[j+1]==1)
				cnt++;
			else if((a[j]==0&&a[j+1]==1)||(a[j]==1&&a[j+1]==0))
				cnt++;
			j++;
		}
	}
	cout << cnt << "\n";
}
