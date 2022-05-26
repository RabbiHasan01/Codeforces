
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n,m;
	cin>>n>>m;
	int x[n+100];
	for(int i=0;i<n;i++) cin>>x[i];
	sort(x,x+n);
	int ans=0;
	for(int i=0;i<m;i++){
		if(x[i]<0){
			ans+=abs(x[i]);
		}else break;
	}
	cout <<ans <<endl;
}