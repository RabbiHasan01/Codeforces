
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	long long int t;
	cin>>t;
	while(t--){
		long long int n,c=1;
		cin>>n;
		for(int i=3;i<=n;i+=2){
			if(n%2){
				cout << "YES\n";
				c=0;
				break;
			}else if(n%i==0){
				cout <<"YES\n";
				 c=0;      
				 break;
			}
		}
		if(c) cout <<"NO\n";
	}
}







