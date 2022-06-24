
//#include <bits\stdc++.h>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		int by[40],b[40];
		int i=0;
		while(n>0){
			by[i]=n%2;
			n/=2;
			b[i]=0;
			i++;
		}
		for(int k=0;k<i;k++){
			if(by[k]==0){
				b[k]=1;
				break;
			}
		}
		for(int k=0;k<i;k++){
			if(by[k]==1){
				b[k]=1;
				break;
			}
		}
		for(int k=i-1;k>=0;k--){
			cout <<b[k];
		}
	}
}










