
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,a,x=0,y=0;
		cin>>n;
		for(int i=0;i<2*n;i++){
			cin>>a;
			if(a%2) x++;
			else y++;
		}
		if(x==y) cout <<"YES\n";
		else cout <<"NO\n";
		
	}
}