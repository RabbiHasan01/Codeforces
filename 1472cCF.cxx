/*
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long int a[n+7];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		long int ans=0,x,res=0;
		for(int i=1;i<=n;i++){
			x=i;
			while(1){
				ans+=a[x];
				x+=a[x];
			//	cout << ans <<endl;
				if(x>n) {
					break;
					x=0;
				}
			}
			if(res<ans) {
				 res=ans;
			}
		    ans=0;
		}
		cout << res <<endl;
	}
}
*/
//#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <array>
#include <string>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve() {
    	int n;
		cin>>n;
		long int a[n+7];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		long int ans=0,x,res=0;
		for(int i=1;i<=n;i++){
			x=i;
			while(1){
				ans+=a[x];
				x+=a[x];
			//	cout << ans <<endl;
				if(x>n) {
					break;
					x=0;
				}
			}
			if(res<ans) {
				 res=ans;
			}
		    ans=0;
		}
		cout << res <<endl;
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}












