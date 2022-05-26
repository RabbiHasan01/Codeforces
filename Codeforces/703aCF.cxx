
#include<iostream>
using namespace std;


int main(int argc, char *argv[])
{
	int n;
	cin>>n;
	int x,y,c=0,m=0;
	
	for(int i=0;i<n;i++){
		cin>>x>>y;
		if(x>y) m++;
		else if(y>x) c++;
	}
	if(m>c) cout <<"Mishka\n";
	else if(c>m) cout <<"Chris\n";
	else cout <<"Friendship is magic!^^\n";
	
	
	
}