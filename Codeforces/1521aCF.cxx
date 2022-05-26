
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;		
		cout<<a <<" "<<(b*2-1)*a <<" "<<a*b*2 <<endl;
	}
return 0;
}