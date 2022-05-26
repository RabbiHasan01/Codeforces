#include<bits\stdc++.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long n,m,x;
		cin>>n>>m>>x;
		int a,b,col,row;
		col=ceil((double)x/(double)n);
		row=x-(col-1)*n;
	/*	for(int i=1;i<=n;i++){
			if(i+(col-1)*n==x){
				row=i;
				break;
			}
		}*/
		//row=x%n;
	//	if(row==0) row=x/n;
	
	//	cout <<col <<"  " <<row <<endl;
		cout << col+m*(row-1) <<endl;
	}
}