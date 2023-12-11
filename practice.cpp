#include<bits/stdc++.h>
using namespace std;

#define f(x,y) (x-y)/2

int main()
{
    double x[20],y[20][20];

    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>y[i][0];
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            y[j][i]=y[j+1][i-1]-y[j][i-1];
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<"     ";
        for(int j=0;j<n-i;j++)
        {
            cout<<y[i][j]<<"     ";
        }
        cout<<endl;
    }

    return 0;
}
