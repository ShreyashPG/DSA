#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={2,31,1,0,5};

    for(int i=1;i<5;i++)
    {   int p=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>p)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=p;
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}