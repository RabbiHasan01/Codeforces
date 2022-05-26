
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int x[n+10],y[n+10],a[n+10],b[n+10];
		for(int i=0;i<n;i++){
			cin>>x[i];
			a[i]=x[i];
		}
		for(int i=0;i<n;i++){
			cin>>y[i];
			b[i]=y[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		long long int count=0;
		//cout << a[0] <<" "<<b[0] <<endl;
		for(int i=0;i<n;i++){
			count+=max(x[i]-a[0],y[i]-b[0]);
			//cout <<count <<endl;
			
		}
		cout << count <<endl;
	}
}











