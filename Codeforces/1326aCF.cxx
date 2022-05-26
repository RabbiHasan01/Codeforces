
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		if(n>1){
	   	for(int i=1;i<n;i++) cout <<"3";
		   cout <<"4\n";
		}else cout <<-1 <<endl;
	}
}