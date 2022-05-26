
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	
	while(t--){
		int a,b;
		cin>>a>>b;
		int mn=min(a,b);
		int mx=max(a,b);
		if(mn*2>mx){
			cout << pow(2*mn,2);
		}else {
			cout << pow(mx,2);
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
}