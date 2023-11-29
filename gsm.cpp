// *****************************************gsm q.1 t=0.15 , L=0 , R=1 ******************************************
#include<bits/stdc++.h>
using namespace std;
#define fn(x) 4*x*x*x+x*x-7*x+14 ;
int main()
{
float N ,K=1;
cout<<"enter the value of tolerance:\n";
cin>>N;
float L,R, X1,X2,FX1,FX2;
cout<<"enter the vaule (L  R)\n";
cin>>L>>R;
cout<<"K\tL\tR\tX1\tX2\tf(X1)\tf(X2)\t(L/R)\t"<<endl;
while(R-L>N)
{
X2=L+ (0.618)*(R-L);
X1=L+R-X2;
FX1=fn(X1);
FX2=fn(X2);
cout<<K<<"\t"<<L<<"\t"<<R<<"\t"<<X1<<"\t"<<X2<<"\t"<<FX1<<"\t"<<FX2<<"\t";
char c;
if(FX2>FX1)
{
c='L';
R=X2;
}
else if(FX2<FX1)
{
    c='R';
    L=X1;
}
else 
{
    if(L<R)
    {
      R=X2;
      c='L'; 
    }else
    {
      L=X1;
      c='R' ; 
    }
}

cout<<setprecision(4);
cout<<c<<"\t"<<endl;
K++;
}
cout<<"Ans in interval"<<"["<<L<<" "<<R<<"]"<<endl;

float mi = (L+R)/2, ans=fn(mi);
cout<<"ANS = "<<ans<<endl;
}