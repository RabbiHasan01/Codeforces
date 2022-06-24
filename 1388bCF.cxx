
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n-n/4-1;i++) cout <<"9";
		for(int i=0;i<=n/4;i++) cout << "8";
		cout <<endl;
	}
}