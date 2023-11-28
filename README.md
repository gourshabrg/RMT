# TMR
here is a help for you....

#Q1 Fibonacci Sequance 
```C
#include<stdio.h>
float Fx(float x)
{
   return x*x -2*x;
}
int main()
{
   float n, L, R;
   float X1,X2,F1;
   int x,i,k;
   printf("Enter value of N ");
   scanf("%d",&x);
   printf("Enter Lower limits ");
   scanf("%f",&L);
   printf("Enter Upper limits ");
   scanf("%f",&R);
   float Fx1, Fx2;
   
   float F[x+1];
   F[0] = 1;
   F[1] = 1;
   char Q ;
   for (i = 2; i < x + 1; i++)
   {
      F[i] = F[i-1]+F[i-2];
   }
   printf ("K\t F*\t L\t R\t X1\t X2\t Fx1\t Fx2\tL/R \n"); 
   for(k = 1; k <=x; k++)
   { 
      F1=F[x-k]/F[x-k+1];
      X2 = L + F1*(R - L);
      X1 = L + R - X2;
      Fx1 = Fx(X1);
      Fx2 = Fx(X2);
      if(Fx1>Fx2){
        Q = 'R';
      }
      if(Fx2>=Fx1){
        Q = 'L';
      }
      if(F1==1) printf("%d\t%.2f\t%.2f\t%.2f\n",k,F1,L,R); 
      else printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%c\n",k,F1,L,R,X1,X2,Fx1,Fx2,Q); 
      if(Fx1>Fx2){
        L = X1;
      }
      if(Fx2>=Fx1){
        R = X2;
      }
   }
      float xmin = (R + L) / 2;
      float Fxmin = Fx(xmin);
      printf("xmin = %.3f \nfxmin = %.3f\n",xmin,Fxmin);
   return 0;
}

```

#//output is :
```
Enter value of N 4
Enter Lower limits 0
Enter Upper limits 1
K        F*      L       R       X1      X2      Fx1     Fx2    L/R
1       0.60    0.00    1.00    0.40    0.60    -0.64   -0.84   R
2       0.67    0.40    1.00    0.60    0.80    -0.84   -0.96   R
3       0.50    0.60    1.00    0.80    0.80    -0.96   -0.96   L
4       1.00    0.60    0.80
xmin = 0.700
fxmin = -0.910
```
//////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////

#Q2 GSM 
```C
#include<stdio.h>
float Fx(float x)
{
    return x*x - 2*x ;
}
int main()
{
    float n, L, R;
    float X1,X2,F1;
    printf("Enter tolerance ");
    scanf("%f",&n);
    printf("Enter Lower limits ");
    scanf("%f",&L);
    printf("Enter Upper limits ");
    scanf("%f",&R);
    float Fx1, Fx2;
    char Q ;
    int k = 0;
    printf("K\t L\t R\t X1\t X2\t Fx1\t Fx2\t L/R \n");
    float L1 = L;
    float R1 = R;
    while((R1-L1)> n)
    {
        R1 = R;
        L1 = L;
        k++;
        F1 = 1 / 1.618;
        X2 = L + F1 * (R - L);
        X1 = L + R - X2;
        Fx1 = Fx(X1);
        Fx2 = Fx(X2);
        if(Fx1 > Fx2) Q = 'R';
        if(Fx2>=Fx1) Q = 'L';
        if((R-L)<= n){
          printf("%d\t%.2f\t%.2f \n",k,L,R);
          break;
        }
        else printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t %c\n",k,L,R,X1,X2,Fx1,Fx2,Q); 
        if(Fx1>Fx2) L = X1;
        if(Fx2>=Fx1) R = X2;
    }
        float xmin = (R + L) / 2;
        float Fxmin = Fx(xmin);
        printf("xmin = %.3f \nfxmin = %.3f\n",xmin,Fxmin);
    return 0;
    
}
```
#//output is :
```
Enter tolerance .13
Enter Lower limits 1
Enter Upper limits 2
K        L       R       X1      X2      Fx1     Fx2     L/R
1       1.00    2.00    1.38    1.62    -0.85   -0.62    L
2       1.00    1.62    1.24    1.38    -0.94   -0.85    L
3       1.00    1.38    1.15    1.24    -0.98   -0.94    L
4       1.00    1.24    1.09    1.15    -0.99   -0.98    L
5       1.00    1.15    1.06    1.09    -1.00   -0.99    L
6       1.00    1.09
xmin = 1.045
fxmin = -0.998
```
