#include <iostream>

using namespace std;

int main()
{
    int n;char a[100][100];
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(i==0&&j>=n/2)
                    a[i][j]='*';
                else if(i==n/2||j==n/2)
                    a[i][j]='*';
                else if(i==n-1&&j<=n/2)
                    a[i][j]='*';
                else if(i<=n/2&&j==0)
                    a[i][j]='*';
                else if(i>=n/2&&j==n-1)
                     a[i][j]='*';
                     else
                    a[i][j]=' ';
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        if(i<n-1)
        cout<<endl;
    }
    return 0;
}
