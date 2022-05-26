
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
	int n,m;
	cin>>n>>m;
	int a[1000];
	//vector <int> a[10008];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int l;
	for(int i=0;i<m;i++){
		cin>>l;
		int x=unique((a+l),a+n)-(a+l);
		cout <<x<<endl;
	}
}









