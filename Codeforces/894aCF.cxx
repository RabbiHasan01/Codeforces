

#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
/*	string s;
	cin>>s;
	int x[100],c=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='A'){
			x[c]=i;
			c++;
		}
	}
	for(int k=0;k<c;k++) cout <<x[k] <<" ";
	/*
	int c1=0,c2=0;
	for(int k=0;k<=c;k++){
	for(int i=x[k]-1;i>=0;i--){
		if(s[i]=='Q'){
			c1++;
		}
	}
	}
	
	for(int k=0;k<=c;k++){
	for(int i=s.size()-1;i>=x[k]+1;i--){
		if(s[i]=='Q'){
			c2++;
		}
	}
	}
	*
	
	cout <<c<<"  "<<c1 <<"  " <<c2 <<"  " <<endl;
	
	*/
	
	string s;
	cin>>s;
	
	int count=0;
	for(int i=0;i<s.size()-2;i++){
		if(s[i]=='Q'){
	    	for(int j=i+1;j<s.size()-1;j++){
	    		if(s[j]=='A'){
			        for(int k=j+1;k<s.size();k++){
			        	if(s[k]=='Q'){
			        		count++; 
			        	}
			        }
	    		}
			}
		}
	}
	
	cout <<count <<endl;
	
	
	
	
	
	
	
	
	
	
	
}