#include <iostream>

using namespace std;

int main()
{
    int n,a[200],x;
    cin>>n;
    a[0]=0;
    a[1]=1;
    int k=(n*(n+1))/2;
    for(int i=2;i<k;i++){
        a[i]=a[i-1]+a[i-2];
    }
    cout<<0<<endl;
     x=n-2;
    for(int i=1;i<k;x--){
           // cout<<"\ni="<<i<<endl;
        int j=n-x;
            while(j>0){
            cout<<a[i]<<"\t";
            i++;j--;
            }
        cout<<endl;
    }
    return 0;
}
