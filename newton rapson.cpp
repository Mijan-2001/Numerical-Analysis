
#include<bits/stdc++.h>
using namespace std;

#define f(x) x*x*x-9*x+1
#define g(x) 3*x*x-9
int main()
{
    double x0,x1,x,f0,f1,f,e,g0;
    cout<<"Enter first value : ";
    cin>>x0;
    cout<<"Enter tollerabl value : ";
    cin>>e;
    int n;
    cin>>n;
    int step=1;
    cout<<setprecision(4)<<fixed;
    do{

        f0=f(x0);
        g0=g(x0);
        x1=x0-f0/g0;

        if(g0==0.0) exit(0);


        cout<<step<<"      "<<x1<<"          "<<f(x1)<<endl;
        x0=x1;
        step++;
        if(step>n) break;
        f1=f(x1);

    }while(fabs(f1)>e);

    cout<<"Root : "<<x1<<endl;


    return 0;
}
