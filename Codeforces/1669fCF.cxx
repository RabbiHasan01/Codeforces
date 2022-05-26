
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int w[n+6];
		int sum1=0,sum2=0,i=1,j=n,sum=0,ans=0,p=0;
		for(int i=1;i<=n;i++) cin>>w[i];
		for(int k=1;k<=n;k++){
			if(sum1<=sum2){
				sum1+=w[i];
				i++;
			//	cout <<"s1= " <<sum1 <<endl;
			}else {
				sum2+=w[j];
				j--;
				//cout <<"s2= " <<sum2 <<endl;
			}
			if(sum1==sum2) ans=k;
			if((i-1)==j) break;
		}
		cout <<ans <<endl;
	}
}






