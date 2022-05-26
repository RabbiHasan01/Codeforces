
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n,k;
	cin>>n>>k;
	int a[n+100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int mn=1000000,x=0,p;
	for(int i=0;i<n-k+1;i++){
		for(int j=i;j<k+i;j++){
			x+=a[j];
		}
		if(x<=mn){
			mn=x;
			p=i;
		}
		//mn=min(mn,x);
		x=0;		
	}
	cout << p+1 <<endl;
	
	
	
	
	
	
}