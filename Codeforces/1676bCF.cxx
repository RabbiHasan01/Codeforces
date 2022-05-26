

///#include <bits\stdc++.h>
#include <vector>
#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		//vector <long long> a(n+5);
		long long a[n+5];
		long long sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		sort(a,a+n);
		long long min=a[0];
		
		min*=n;
		cout << sum-min <<endl;
	}
	
}











