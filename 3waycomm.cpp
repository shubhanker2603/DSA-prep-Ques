#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int r;
	    cin>>r;
	    int a,b,x,y,p,q;
	    cin>>a>>b;
	    cin>>x>>y;
	    cin>>p>>q;
	    
	    float d1=sqrt(pow(x-a,2)+pow(y-b,2));
	    float d2=sqrt(pow(p-x,2)+pow(q-y,2));
	    float d3=sqrt(pow(a-p,2)+pow(b-q,2));
	    
	    int count=0;
	    
	    if(d1<=r)
	     { count++;}
	    if(d2<=r)
	      {count++;}
	    if(d3<=r)
	      {count++;}
	      
	    
	    if(count>=2)
	       { cout<<"yes"<<endl;}
	    else
	       { cout<<"no"<<endl;}
	      
	   
	}
	return 0;
}
