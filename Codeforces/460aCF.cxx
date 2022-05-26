
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n,m;
	cin>>n>>m;
	int ans=0,rem=0,x=n;
	while(n>=m){
	//for(int i=0;n<m;i++){
		ans+=n/m;
		rem=n%m;
		n=n/m+rem;
	}
	cout <<x+ans <<endl;
}