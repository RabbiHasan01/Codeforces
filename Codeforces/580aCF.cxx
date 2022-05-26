//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	long long int n;
	cin>>n;
	long long int a[n+100];
	for(int i=0;i<n;i++) cin>>a[i];
	a[n]=-1;
	long long int c=1,mx=0;
	for(int i=0;i<n;i++){
		if(a[i]<=a[i+1]){
			c++;
		}else{
			if(mx<c){
				mx=c;
			}
			c=1;
		}
	}
	cout <<mx <<endl;
	
	
	
	
	
	
	
}	
	
}
}