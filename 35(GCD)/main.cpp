#include <iostream>

using namespace std;
int gcd(int n1,int n2){
    int x;
    if ((n1<n2)? x=n1: x=n2);

    while(x>=1){
        if(n1%x==0&&n2%x==0){
            return x;
        }
        x--;
    }
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<gcd(n1,n2);
    return 0;
}
