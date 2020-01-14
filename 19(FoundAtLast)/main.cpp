#include <iostream>

using namespace std;

int check(int a[],int n,int m){
    if(a[n-1]==m)
        return n-1;
    else if(n==1)
        return -1;
    else
        check(a,n-1,m);

}
int main()
{
    int n,a[1000],m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    cout<<check(a,n,m);
    return 0;
}
