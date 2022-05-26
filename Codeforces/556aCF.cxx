

#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n;
	string s;
	cin>>n>>s;
	
	int c1=0,c2=0;
	for(int i=0;i<n;i++){
		if(s[i]=='0') c1++;
		else c2++;
	}
	cout <<n-2*min(c1,c2) <<endl;
return 0;
}