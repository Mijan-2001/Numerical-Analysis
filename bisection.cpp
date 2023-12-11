#include<bits/stdc++.h>
using namespace std;

#define f(x) x*x*x-9*x+1
int main()
{
    double x0,x1,x,f0,f1,f,e;
    cout<<"Enter first and second value : ";
    cin>>x0>>x1;

    f0=f(x0);
    f1=f(x1);
    if(f0*f1>0.0) cout<<"Invalid number :"<<endl;
    cout<<"Enter tollerabl value : ";
    cin>>e;
    int step=1;
    cout<<setprecision(4)<<fixed;
    do{


        //x=(x0+x1)/2;
        x=x0-(x1-x0)*f0/(f1-f0);

        f=f(x);
        cout<<step<<"      "<<x<<"          "<<f(x)<<endl;
        if(f*f0<0) x1=x;
        else x0=x;
        step++;

    }while(fabs(f)>e);

    cout<<"Root : "<<x<<endl;


    return 0;
}

