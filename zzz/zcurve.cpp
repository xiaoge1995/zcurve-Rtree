#include<iostream>
#include<math.h>
using namespace std;
int zcurve(int x,int y)
{
    int i,j=0,a[30];
    int k=0,b[30];
    for(i=0;i<30;i++)
    {
        a[i]=0;
    }
    while(x!=0)
    {
        i=x%2;
        a[j]=i;
        j++;
        x=x/2;
    }

    for(i=0;i<30;i++)
    {
        b[i]=0;
    }
    while(y!=0)
    {
        i=y%2;
        b[k]=i;
        k++;
        y=y/2;
    }
    int c[60];
    for(i=0;i<60;i++)
    {
        c[i]=0;
    }

    for(i=0;i<=max(j,k);i++)
    {
        c[2*i]=a[i];
        c[2*i+1]=b[i];
    }
    int sum=0;
    for(i=2*max(j,k);i>=0;i--)
    {
       if(c[i]==1)
          sum=sum+pow(2,i);


    }
    cout<<sum;


    return 0;
}
int main()
{
    int size;
    cin >> size;
    int* x[] = new int[size];
    int* y[] = new int[size];
    
    cin>>x>>y;
    zcurve(x,y);
}
