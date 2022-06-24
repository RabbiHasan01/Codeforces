
#include <iostream>
#include <string>
#include <map>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int  t;
	cin>>t;
	while(t--){
		int n;
		string a,b;
		cin>>n>>a>>b;
	//	map <string , string >:: iterator it;
	//	m.insert({a,b});
		map <string, int> mp;
		for(int i=0;i<a.size();i++){
			if(a[i]!=b[i]){
				string p="";
				p+=b[i];
				mp.insert({p,1});
			}
		}
	/*	for(int i =1;i<=mp.size();++i){
			cout <<mp[i].second;
		}*/
		cout << mp.size() <<endl;
	
	}
}










