
// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void ls(  vector<double>&x,  vector<double>&y,double&a,double&b,int sz )
{
    double sx=0,sy=0,sxy=0,sxx=0;
    for(int i=0;i<sz;i++)
    {
        sx += x[i];
        sy += y[i];
        sxy += x[i]*y[i];
        sxx+= x[i]*x[i];

    }
    b=( sz*sxy - sx*sy )/( sz*sxx - sx*sx);
    a=(sy -b*sx)/sz;
}

int main()
{
    vector<double>x={5,8,7,6,4};
    vector<double>y={3,4,5,2,1};
    int sz=x.size();
    double a,b;
    ls(x,y,a,b,sz);
    cout<<"y="<<a<<" + "<<b<<"x"<<endl;

    return 0;
}
