#include <iostream>

using namespace std;

int main()
{
    int n;char a[1000][1000];
    cin>>n;
    for(int i=0;i<=2*n;i++){
        for(int j=0;j<=2*n;j++){
            if(j==0||j==2*n)
                a[i][j]=n+'0';
        }
    }
    for(int i=0;i<=2*n;i++){
        for(int j=0;j<=2*n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
