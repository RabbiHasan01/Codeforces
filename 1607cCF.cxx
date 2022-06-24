
#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int a[n+7];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long int x=a[0],ans=a[0];
		for(int i=1;i<n;i++){
			a[i]=a[i]-x;
			x+=a[i];
			if(a[i]>ans) ans=a[i];
		}
	    cout << max(ans,a[0])<<endl;
	}
}






