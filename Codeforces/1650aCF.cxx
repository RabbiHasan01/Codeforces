
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		string s;
		char c[5];
		cin>>s>>c[0];
		int p=1,sz=s.size();
		for(int i=0;i<sz;i+=2){
			if(s[i]==c[0]){
				cout <<"YES\n";
				p=0;
				break;
			}
		}
		if(p) cout << "NO\n";
	}
}












