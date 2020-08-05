#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=1e5;
char a[mxN];
int n;

int main() {
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	bool vis[10];
	memset(vis, 0, sizeof(vis));
	for(int i=0; i<n; ++i) {
		if(a[i] == 'L') {
			for(int j=0; j<10; ++j) {
				 if(vis[j]==1)	
					continue;
				else {
					vis[j]=1;
					break;
				}
			}
		} else if(a[i]=='R') {
			for(int j=9; j>=0; --j) {
				if(vis[j]==1)
					continue;
				else {
					vis[j]=1;
					break;
				}
			}
		} else {
			int index=(int)a[i]-48;
			vis[index]=0;
		}
	}
	for(int i=0; i<10; ++i) 
		cout << vis[i];
	cout << "\n";
}
