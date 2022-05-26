
#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	long long int n;
	cin>>n;
	long long int a[n+100];
	for(int i=0;i<n;i++) cin>>a[i];
	
	long long int q,b;
	cin>>q;
	//long long int b[q+100],s[n+q+100];
	//for(int i=0;i<q;i++) cin>> b[i];
	
	int c=0;
	for(int i=0;i<q;i++){
    	cin>>b;
		for(int j=0;j<n;j++){
			if(b>=a[j]){
				c++;
			}
		}
		cout << c<<endl;
		c=0;
   }
	
	
	
	
	
	
	
	
	
}