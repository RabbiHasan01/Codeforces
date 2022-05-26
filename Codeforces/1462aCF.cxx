#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x[n+10];
		//for(int i=1;i<=n;i++) cin>>x[i];
		for(int i=1;i<=n;i+=2){
			cin >>x[i];
		}
		int k;
		if(n%2) k=n-1;
		else k=n;
		for(int i=k;i>0;i-=2){
			cin>>x[i] ;
		}
		for(int i=1;i<=n;i++){
			cout <<x[i]<<" ";
		}
		cout <<endl;
	}
}












