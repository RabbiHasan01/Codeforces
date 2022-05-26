
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a=0,b=0,c=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='A') a++;
			else if(s[i]=='B') b++;
			else c++;
		}
	//	cout <<a <<" " <<b<<" " <<c<<endl;
		if(2*b==s.size() && (a*2==s.size() or b*2==s.size()))
		cout << "YES\n";
		else cout <<"NO\n";
	}
}









