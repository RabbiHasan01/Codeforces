
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long int n,a;
		cin>>n;
		long long ans=0;
		string e="errorgorn",m="maomao90",s=e;
		for(int i=0;i<n;i++){
			cin>>a;
			if(a%2==0) s=m;
			else s=e;
			//ans+=a/2;
		}
		cout << s<<endl;
	/*	if(ans>0 and ans%2==0){
			cout <<"errorgorn\n";
		}else cout <<"maomao90\n";*/
	}
}




