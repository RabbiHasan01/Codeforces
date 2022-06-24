
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int x=n-1;
		bool c=false;
		for(int i=0;i<n;i++){
			if(s[i]=='R' or s[i]=='B') {
				x=i;
				c=true;
				break;
			}
		}
		if(!c) s[x]='B';
		for(int i=x;i<n-1;i++){
			if(s[i]=='R' and s[i+1]=='?'){
				s[i+1]='B';
			}
			else if(s[i]=='B' and s[i+1]=='?'){
				s[i+1]='R';
			}
		}
		for(int i=x;i>0;i--){
			if(s[i]=='R' and s[i-1]=='?'){
				s[i-1]='B';
			}
			else if(s[i]=='B' and s[i-1]=='?'){
				s[i-1]='R';
			}
		}
		cout << s<<endl;
	}
}








