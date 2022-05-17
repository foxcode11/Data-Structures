#include<iostream>
using namespace std;
void minmax(int array[],int length,int&min,int&max)
{
    min=array[0];
    max=array[0];
    for(int i=1;i<length;i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    cout<<"THE MINIMUM VALUE IS:="<<min<<"\nTHE MAXIMUM VALUE IS:="<<max;

}
int main()
{
    int l,min,max;
    cout<<"ENTER THE SIZE OF ARRAY\n";
    cin>>l;
    int ar[l];
    cout<<"ENTER THE ELEMENTS IN ARRAY\n";
    for(int i=0;i<l;i++)
    cin>>ar[i];
    minmax(ar,l,min,max);
    return 0;
}
