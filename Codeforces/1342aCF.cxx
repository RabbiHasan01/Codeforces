
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long int x,y,a,b;
		cin>>x>>y>>a>>b;
		long long int mn,mx;
		mn=min(x,y);
		mx=max(x,y);
		if(2*a>=b){
			cout << mn*b+(mx-mn)*a;
		}else {
			cout <<(x+y)*a;
		}
		cout <<endl;
	}
}















