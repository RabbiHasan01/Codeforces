
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		string s,str="abcdefghijklmnopqrstuvwxyz";
		cin>>s;
		int sz=s.size()-1;
		int c=sz,d=0,p=1;
		for(int i=sz;i>=0;i--){
			if(str[i]==s[c]){
				c--;
			}
			else if(str[i]==s[d]){
				d++;
			}else{
				p=0;
				cout <<"NO\n";	
				break;			
			}
		}
		
		if(p) cout <<"YES\n";
	}
}











