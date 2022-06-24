
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+7],b[100000];
		for(int i=0;i<100000;i++) b[i]=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			
		}
		
		//sort(b,b+100000);
		sort(a,a+n);
		int c=0;
		for(int i=0;i<n;i++){
			while(i<n-1 and a[i]==a[i+1]){
				i++;
			}
			c++;
		}
		cout << c<<endl;
			for(int i=0;i<=a[n-1];i++){
		   //cout <<	b[a[i]]<<" ";
		}
		
		
		for(int i=0;i<n-1;i++){
			if(a[i]==a[i+1]){
				int h;
			}
		}
	}
}





