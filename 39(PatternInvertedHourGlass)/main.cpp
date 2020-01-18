#include <iostream>

using namespace std;

int main()
{
    int n,x,k;
    cin>>n;
    for(int i=0;i<=2*n;i++){
        for(int j=0;j<=2*n;j++){
               (n>j? x=n-j: x=j-n);
               (i>n? k=2*n-i:k=i);
             if(i>=0&&i<=2*n&&(j<=k||j>=2*n-k))
                cout<<x<<" ";
                else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
