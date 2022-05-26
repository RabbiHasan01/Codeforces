//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int a[n+12];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long int mx=a[n-1],mn=a[0];
		cout <<mx-mn <<endl;
	}
}
















