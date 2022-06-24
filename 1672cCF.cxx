
#include <bits\stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int a[n+8];
		for(int i=1;i<=n;i++) cin>>a[i];
		int x=0,y=0;
		bool c=false,d=false;
		for(int i=1;i<n;i++){
			if(a[i]==a[i+1]){
				x=i+1;
				c=true;
				break;
			}
		}
		for(int i=n;i>x;i--){
			if(a[i]==a[i-1]){
				y=i-1;
				d=true;
				break;
			}
		}
	//	cout <<x <<" " <<y<<endl;
		if(c&d){
			if(x==y) cout <<"1\n";
			else cout << y-x<<endl;
		}else cout << "0\n";
	}
}









