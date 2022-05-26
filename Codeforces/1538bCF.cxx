
///#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+7],sum=0,avg,ans=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
	//	sort(a,a+n);
		avg=sum/n;
		if(sum%n==0){
			for(int i=0;i<n;i++){
				if(avg<a[i]) ans++;
			}
			cout <<ans <<endl;
		}else {
			cout << -1 <<endl;
		}
	}
}














