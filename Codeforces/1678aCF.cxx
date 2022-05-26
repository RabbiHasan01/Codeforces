// Online C++ compiler to run C++ program online
//https://codeforces.com/problemset/submission/1678/157702253


//#include <bits\stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+6];
		int d=1,c=1,x=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==0){
				d=0;
				x++;
			}
		}
		sort(a,a+n);
		
		if(x==n) {
			cout << 0;
		}
		else if(d==0) {
		   cout <<min(n-x,n-1);
		}
	    else {
	        for(int i=0;i<n-1;i++){
	            if(a[i]==a[i+1]){
	                c=0;
	                break;
	            }
	        }
	    	 if(c==0) {
	    	 	 cout <<n;
	    	 }else {
	    	 	 cout << n+1;
	    	 }
	    }
		cout <<endl;
	}
}