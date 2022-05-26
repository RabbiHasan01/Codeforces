
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		double a,b;
		cin>>a>>b;
		double x=abs(a-b);
		long long ans=ceil(x/10.0);
		cout <<ans <<endl;
	}
}