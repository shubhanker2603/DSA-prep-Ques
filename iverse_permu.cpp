#include<iostream>
using namespace std;
int main()
{
    
 
   while(true)
   {
       int n;
       cin>>n;
       if(n==0)
       {
           break;
       }
       int a[n];
       for(int j=1;j<=n;j++)
       {
           cin>>a[j];
       }
       int s[n];
       for(int j=1;j<=n;j++)
       {
           s[a[j]]=j;
           
       }
        int flag=1;
       for(int j=1;j<=n;j++)
       {
           if(s[j]!=a[j])
            { flag=0;
              break;}
           else
             continue;
       }
       if(flag==1)
         cout<<"ambiguous"<<endl;
       else
         cout<<"not ambiguous"<<endl;
   }
   return 0;
}