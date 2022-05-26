
#include <iostream>
//#include <bits\stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long r,b,d;
		cin>>r>>b>>d;
		long long mn=min(r,b),mx=max(r,b);
		long long x=(1+d)*mn;
	//	cout << x<<endl;
		if(x>=mx) cout <<"YES\n";
		else cout <<"NO\n";
	}
}