
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	long long int n,m;
	cin>>n>>m;
	int count=0;
	if(n*n>=m){
	for(int i=1;i<=n;i++){
	//	for(int j=1;j<=n;j++){
	    	if(m%i==0) count++;
	}
	if(n<m) cout <<count-1 <<endl;
	else
	cout <<count <<endl;
	}else  cout <<0<<endl;
}






