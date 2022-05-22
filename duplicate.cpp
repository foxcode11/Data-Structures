#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int s;
    cout<<"ENTER THE SIZE OF ARRAY"<<endl;
    cin>>s;
    int ar[s];
    cout<<"ENTER THE ELEMENTS OF ARRAY"<<endl;
    for(int i=0;i<s;i++)
        cin>>ar[i];
    cout<<"THE INPUT ARRAY IS :"<<endl;
    for(int i=0;i<s;i++)
        cout<<ar[i]<<" ";
    int max=ar[0];
    for(int i=1;i<s;i++)
        {
            if(ar[i]>max)
                max=ar[i];
        }
    int *count=(int*)calloc(max+1,sizeof(int));
    for(int i=0;i<s;i++)
    {
        count[ar[i]]++;
    }
    int c=count[0];
    for(int i=1;i<=max;i++)
    {
        if(count[i]>c)
            c=i;
    }
    cout<<"\nTHE ELEMENT WITH MAX FREQUENCY IS :"<<c;
    return 0;
}
