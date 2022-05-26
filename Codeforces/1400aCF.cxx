

#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		string s,str="";
		cin>>n>>s;
		for(int i=0;i<n;i++){
			str+=s[n-1];
		}
		cout <<str<<endl;
	}
	
}