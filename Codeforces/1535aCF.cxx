
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int m1,m2,m3,m4;
		m1=min(a,b);
		m2=max(a,b);
		m3=min(c,d);
		m4=max(c,d);
		if(m1<m4 && m3<m2) {
			cout <<"YES\n";
		}else {
			cout <<"NO\n";
		}
	}
}











