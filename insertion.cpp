#include<iostream>
#include"myheader.h"
using namespace std;
int main()
{
    int s,key,j;
    cout<<"ENTER THE SIZE OF ARRAY\n";
    cin>>s;
    int ar[s];
    for(int i=0;i<s;i++)
        ar[i]=Rdm(s);
    cout<<"ORIGINAL ARRAY IS:\n";
    for(int i=0;i<s;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    cout<<"APPLYING INSERTION SORT\n";
    cout<<"ARRAY AFTER EACH PASS\n";
    for(int i=1;i<s;i++)
    {
         key=ar[i];
         j=i-1;
         cout<<"PASS :"<<i<<"-->";
        while(j>=0&&ar[j]>=key)
        {
            ar[j+1]=ar[j];
            j=j-1;
        }
        ar[j+1]=key;
        for(int k=0;k<s;k++)
            cout<<ar[k]<<" ";
        cout<<endl;
    }
    cout<<"FINAL SORTED ARRAY\n";
    for(int i=0;i<s;i++)
        cout<<ar[i]<<" ";
    return 0;

}
