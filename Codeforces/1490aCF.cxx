
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+7];
		for(int i=0;i<n;i++) {
			cin>>a[i];
		}
		int mx,mn=0,count=0;
		for(int i=0;i<n-1; ){
			mx=max(a[i+1],a[i]);
			mn=min(max(a[i+1],mn),max(a[i],mn));
		//	cout <<mx <<" " <<mn <<endl;
			if(mx<=2*mn){
				i++;
				mn=0;
			}else {
				count++;
				mn*=2;
			}
		}
		cout <<count <<endl;
	}
}










