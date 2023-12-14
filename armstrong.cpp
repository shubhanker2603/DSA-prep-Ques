#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,sqr=0;
    cin>>a;
    int original=a;
    while(a>0)
    {
       b=a%10;
       sqr=sqr+pow(b,3);
       a=a/10;
    }
    if(sqr==original)
     cout<<"number is aarmstrong";
    else
      cout<<"not"; 
     return 0;
}