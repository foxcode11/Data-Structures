#include<iostream>
using namespace std;
int main()
{
    int l,s,x;
    cout<<"enter the size of array\n";
    cin>>l;
    int ar[l];
    cout<<"enter the elements of array\n";
    for(int i=0;i<l;i++)
        cin>>ar[i];
    cout<<"enter the search number:\n";
    cin>>s;
    int c=-1;
    for(int i=0;i<l;i++)
    {
   if (s==ar[i])
       c=i;
    }
    if(c>-1)
     {
         l=l-1;
         for(int i=c;i<l;i++)
            ar[i]=ar[i+1];
     }
    else
    cout<<"Error: element not found\n";
    for(int i=0;i<l;i++)
        cout<<ar[i]<<" ";
    return 0;
}
