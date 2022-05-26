
//#include <bits\stdc++.h>
#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
	    int n,q;
		cin>>n>>q;
		//int x[n+5];
		vector <int>a(n+1),x(n+1);
		for(int i=0;i<n;i++){
			cin>>a[i];
			x[i]=0;
		}
		sort(a.rbegin(),a.rend());
		int m=0;
		//cout <<a[n] <<endl;
	
		for(int i=0;i<n;i++){
			m+=a[i];
			x[i]=m;
		}
		int b;
		for(int i=1;i<=q;i++){
			cin>>b;
			//if(b<=a[1]) cout <<1 <<endl;
			if(b>x[n-1]) cout << -1;
			else {
				for(int j=0;j<n;j++){
					if(b<=x[j]){
						cout  << j+1;
						break;
					}
				}
			}
			cout <<"\n";
		}
		//for(int i=0;i<n;i++) cout <<a[i] <<" ";
	}
}


















































