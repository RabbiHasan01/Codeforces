

#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		
		int n,k;
		cin>>n>>k;
		
		int x=0;
		for(int i=2;i<=n;i++){
			if(n%i==0){
				x=i;
				break;
			}
		}
		cout << n+x+(k-1)*2<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}