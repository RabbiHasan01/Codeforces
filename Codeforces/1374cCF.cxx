
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s,x;
		cin>>s;
		for(int i=0;i<n-1;){
			if(s[i]=='('){
				if(s[i+1]==')'){
					x+=s[i];
					x+=s[i+1];
					i+=2;
					}
			}
		}
	}
	
}