

#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cin>>n;
	int x[n+10];
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	int count=0,mx=0,i=1;
	for(i=i;i<=n; ){
		if(x[i]!=-1){
			count++;
			mx=max(count ,mx);
			i=x[i];
		}else{
			i++;
			count =0;
		}
		
	}
	cout << mx <<endl;
	
}














