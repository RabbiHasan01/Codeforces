
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x[n+1000];
		for(int i=0;i<n;i++){
			cin>>x[i];
		}
		int c1,c2,count=0;
		for(int i=0;i<n;i++){
			if(x[i]==1){
				c1=i;
				break;
			}
		}
		for(int i=n-1;i>=0;i--){
			if(x[i]==1){
				c2=i;
				break;
				
			}
		}
		for(int i=c1;i<=c2;i++){
			if(x[i]==0) count++;
		}
		cout << count<<endl;
	}
	
	
	
	
	
}