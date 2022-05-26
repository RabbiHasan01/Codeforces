
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
	    long long int k,n;
		cin>>n>>k;
		long long int ans,ans2,c=0;
	//	double p=(double)k/2.0;
	//	cout <<p<<endl;
		for(int i=1;i<=(k+c);i++){
			ans=i;
			if(i%n==0) c++;
		}
		
		cout <<ans <<endl;
	}
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}