#include <iostream>
using namespace std;

int F(int n)
{
    int k,j=n,h,a=1;
    while(j!=0)
    {
        h=j%10;
        k=h*a;
        a=a*10;
        j=j/10;
    }
    if(k==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() {
    int sum=0,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+F(i);
    }
    cout<<sum;
    return 0;
}