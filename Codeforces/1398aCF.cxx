

#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n+5];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if((a[0]+a[1])<=a[n-1]){
			cout <<"1 2 "<<n <<endl;
		}else cout <<-1 <<endl;
	}
}












