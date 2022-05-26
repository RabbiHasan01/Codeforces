
#include <iostream>
using namespace std;
//long long mxx=100000000;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long int a,b,c;
		cin>>a>>b>>c;
		long long avg=(a+c)/2;
		if(b<=avg ){
			if(avg%b==0 and  (a+c)%2==0) cout <<"YES\n";
			else cout <<"NO\n";
		}else {
			long long  mn,mx;
			mn=min(a,c);
			mx=max(a,c);
			long long p=2*b-mx;
			if(p%mn==0) cout <<"YES\n";
			else cout <<"NO\n";
		}
		/*
		 if(avg%b==0 and  (a+c)%2==0) {
			cout <<"YES\n";
		}
		else if(c<a and (2*b-a)%c==0) {
			cout <<"YES\n";
		}
		else if(a<=c and c%a==0) cout <<"YES\n";
		else cout <<"NO\n"; */
	}
}





