
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int c=1;
		for(int i=0;i<=n;i++){
			if((i*x+2)>=n){
				cout <<i+1 <<endl;
				break;
			}
		}
	}
}







