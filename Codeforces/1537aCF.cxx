
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a,sum=0;
		for(int i=0;i<n;i++){
			cin>>a;
			sum+=a;
		}
		sum-=n;
		if(sum<0) cout<<1 <<endl;
		else cout <<sum<<endl;
	}
	
	
	
	
	
	
	
	
	
}}