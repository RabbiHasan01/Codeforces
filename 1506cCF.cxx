//incomplete
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int la=a.size(), lb=b.size();
		int x=la+lb;
		int c=0,len=0;
		if(la>lb) {
			for(int i=0;i<lb;i++){
				cout << a.find(b) <<endl;
				if(!a.find(b)){
					b.erase(remove(b.begin(),b.end(),b[c]),b.end());
					c++;
				}else {
					len=b.size();
					break;
				}
				if(c==lb) break;
			}
			x-=2*len;
			//cout << x<<endl;		
		}else {
	/*	for(int i=0;i<mn;i++){	
			if()
    		}*/
		}
		
	}
}










