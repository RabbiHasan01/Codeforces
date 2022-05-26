
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int a,b,n, s;
		cin>>a>>b>>n>>s;
		
		int x=s/n;
		int mn=min(x,a)*n;
		int ans=min(s-mn,b);
		ans+=mn;
		
		if(ans==s) cout << "YES\n";
		else cout <<"NO\n";
	
	}
}