
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cin>>n;
	int x[n+100];
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	
	int count=0,a[n+5],c=0;
	for(int i=1;i<=n;i++){
	//	if(x[i]!=i){
			if(x[i]!=i){
				a[count]=i;
				count++;
				
			/*	for(int j=i+1;j<x[x[i]];j++){
					if(x[j]==x[x[j]]){
						c=1;
					}else {
						cout <<"NO\n";
						c=0;
						break;
					}
				}*/
			}
			else c++;
	//	}
	}
	if(c==n){
		cout <<"YES\n" ;
		cout<< 1<<" "<<1<<endl;
	}else{
	if(count==2){
	   cout <<"YES\n";
	   cout<<a[0] <<" "<<a[1]<<endl;		 
	}else cout <<"NO\n";
	}
}










