// ********************************// fibo 1 , n=3, L=0 , R=1 *********************************
#include<bits/stdc++.h>
using namespace std;
#define fn(x) x*x ;

int main()
{
int N ,K;
float  fibo[7]={1,1,2,3,5,8,13};
cout<<"enter the value of N:\n";
cin>>N;
float L,R, X1,X2,FX1,FX2, f;
cout<<"enter the vaule (L  R)\n";
cin>>L>>R;
cout<<"K\tF*\tL\tR\tX1\tX2\tf(X1)\tf(X2)\t(L/R)\t"<<endl;
for(K=1; K<=N; K++)
{
f=fibo[N-K]/fibo[N-K+1];
X2=L+f * (R-L);
X1=L+R-X2;
FX1=fn(X1);
FX2=fn(X2);
cout<<setprecision(4);
cout<<K<<"\t"<<f<<"\t"<<L<<"\t"<<R<<"\t"<<X1<<"\t"<<X2<<"\t"<<FX1<<"\t"<<FX2<<"\t";
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
cout<<c<<"\t"<<endl;



}
cout<<"Ans in interval"<<"["<<L<<" "<<R<<"]"<<endl;

float mi = (L+R)/2, ans=fn(mi);
cout<<"ANS = "<<ans<<endl;

}