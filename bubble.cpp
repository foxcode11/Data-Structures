#include<iostream>
#include"myheader.h"
using namespace std;
int main()
{
    int s;
    cout<<"ENTER THE SIZE OF ARRAY\n";
    cin>>s;
    int ar[s];
    for(int i=0;i<s;i++)
    {
        ar[i]=Rdm(s);
    }
    cout<<"ORIGINAL ARRAY IS:"<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<"\nAPPLYING BUBBLE SORT\n";
    cout<<"ARRAY AFTER EACH PASS:\n";
    for(int i=0;i<s-1;i++)
    {
        cout<<"PASS: "<<i+1<<"--> ";
        for(int j=0;j<s-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                int t=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=t;
            }
        }
        for(int i=0;i<s;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
    cout<<"FINAL SORTED ARRAY IS\n";
    for(int i=0;i<s;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
