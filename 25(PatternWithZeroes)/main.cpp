#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            if(i>2&&j!=i&&j!=1)
            cout<<0<<"\t";
    else
            cout<<i<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
