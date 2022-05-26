

//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
    	long long int n;
		cin>>n;
	/*	if(n%3==0){
			long long int x=n/3;
			cout <<x<<endl;
		}else {
			for(int i=4; ;i*=2){
				if((3+i)<=n){
				if(n%(3+i)==0){
				    long long int x=n/(3+i);
				    cout << x<<endl;
				    break;
				}
				}else break;
			}
		}*/
		long long int p=1;
		for(int i=2;i<=n;i++){
		     p+=pow(2,i-1);
		     if(n%p==0){
		     	long long int x=n/p;
		     	cout << x<<endl;
		     	break;
		     }
		}
		
	}






















}}


}

}