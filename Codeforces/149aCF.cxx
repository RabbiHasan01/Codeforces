

#include <iostream>
using namespace std;

int main()
{
	int k,x[15];
	cin>>k;
	
	for(int i=0;i<12;i++) cin>>x[i];
	
	sort(x,x+12);
	int m=0,c=0;
	for(int i=11;i>=0;i--){
		if(m<k){
			m+=x[i];
			c++;
		}
	}
	if(m>=k)
   	cout <<c <<endl;
   else cout <<-1<<endl;
	
	
	
	
	
}