#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
    cin>>n;
    for(int i=0;i<=2*n;i++){
        for(int j=0;j<=2*n;j++){
              (n>j?x=n-j:x=j-n);
              (i>n?y=2*n-i:y=i);
            if(i>=0&&i<=2*n&&j>=y&&j<=2*n-y)
            cout<<x<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
