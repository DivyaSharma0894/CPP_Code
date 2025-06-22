#include<iostream>
#include<cmath>
using namespace std;
int main(){double a,b;
cin>>a>>b;
double ans=a/b;
 double f=floor(ans);
 double c=ceil(ans);
 double r=round(ans);

    cout<<"floor "<<a<<" / "<<b<<" = "<<f<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<c<<endl;
     cout<<"round "<<a<<" / "<<b<<" = "<<r<<endl;

}