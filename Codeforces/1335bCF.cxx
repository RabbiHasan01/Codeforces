#include <iostream>
#include <string>
using namespace std;


int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		string str="",ans="",s="abcdefghijklmnopqrstuvwxyz";
		for(int i=0;i<b;i++){
			str+=s[i];
		}
		int c=0;
		for(int i=0;i<n;i++){
			ans+=str[c];
			c++;
			if(c==b) c=0;
		}
		cout <<ans <<endl;
	}
}












