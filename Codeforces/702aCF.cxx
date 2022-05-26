
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    long long int n;
	cin>>n;
	long long int x[n+100];
	for(int i=0;i<n;i++) cin>>x[i];
	if(n>1){
	int mx=0,count=1,k=0;
	for(int i=0;i<n-1;i++){		
		for(int j=i+1;j<n;j++){
			if(x[k]<x[j]){
				count++;
				k++;
			}else {
				k=j;
				break;
		    }
		}
		if(mx<count){
			 mx=count;
			 //cout << mx <<endl;
			 count=1;
		}
		
	}
	cout <<mx <<endl;
	}else {
		cout <<1<<endl;
	}
	
	
	
	
	
	
	
	

	
	
	
	
}