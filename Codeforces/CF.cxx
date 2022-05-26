
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int m=n/2;
		if(m%2==0){
			cout << "YES\n";
			long long int x[100000];
			x[0]=2,x[1]=4;
			cout << "2 4 ";
		//	int p=2;
			for(int i=2;i<m;i++){
				x[i]=x[i-2]+(x[i-2]+x[i-1]);
				cout <<x[i] <<" ";
				//p+=2;
			}
			long long int y[100000];
			y[0]=1;y[1]=5;
			cout << "1 5 ";
		//	p=2;
			for(int i=2;i<m;i++){
				y[i]=y[i-2]+(y[i-2]+y[i-1]);
				cout << y[i] << " ";
			//	p+=2;
			}
			cout << endl;
		}else{
			cout << "NO\n";
		}
	
	}
	
}