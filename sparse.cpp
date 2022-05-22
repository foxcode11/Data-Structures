#include<iostream>
using namespace std;
int main()
{
    int r,c,count=0;
    cout<<"ENTER THE ROWS AND COLUMN OF MATRIX"<<endl;
    cin>>r>>c;
    cout<<"ENTER THE ELEMENTS OF MATRIX"<<endl;
    int ar[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        {
        cin>>ar[i][j];
        if (ar[i][j]==0)
            count++;
        }
    cout<<"THE ENTERED MATRIX IS "<<endl;
    for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }
    if (count>((r*c)/2))
    {
        cout<<"THE MATRIX IS SPARSE MATRIX\n";
        int k=(r*c)-count;
        int s[k+1][3];
        s[0][0]=r;
        s[0][1]=c;
        s[0][2]=k;
        int m=1;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        {
            if(ar[i][j]!=0)
            {
                s[m][0]=i+1;
                s[m][1]=j+1;
                s[m][2]=ar[i][j];
                m++;
            }
        }
        cout<<"THE SPARSE MATRIX IS\n";
        for(int i=0;i<k+1;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<s[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"THE MEMORY SAVED IS:"<<endl;
        int x=((r*c)-3*(k+1))*4;
        cout<<x<<" BYTES"<<endl;

    }
    else
        cout<<"SPARSE MATRIX CANNOT BE FORMED";
    return 0;
}
