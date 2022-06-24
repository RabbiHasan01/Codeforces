
//incpt
//#include <bits\stdc++.h>
#include <iostream>
#include <math.h>
#include <array>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;while(t--){
	int n;
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int x=a[n-1]+a[n-2];
	int c=0,mx=0;
	int b[x+7];
	for(int i=2;i<=x;i++){
		b[i]=0;
	}
	
	for(int i=2;i<=x;i++){
		int k=n-1,j=0;
				while(k>j){
				    if(a[j]+a[k]<i) j++;
				    else if(a[j]+a[k]>i) k--;
				    else {
				    		b[(a[j]+a[k])]++;
				    		j++;k--; 
				    }
			    		
		   	}
		   	c=0; 
	}
	for(int i=2;i<x;i++){
	//	cout <<b[i]<<" ";
		mx=max(b[i],max(b[i+1],mx));
	}
	cout << mx<<endl;
	}
	
}






