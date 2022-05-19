#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int Rdm(int n)
{
    int *ar=new int[n];
    for(int i=0;i<n;i++)
    {
     ar[i]=rand()%100;
    }
    return *ar;
}







