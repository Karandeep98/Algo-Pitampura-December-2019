#include <iostream>

using namespace std;

int main()
{
    int n,x,k;
    char a[1000][1000];
    cin>>n;
    for(int i=0;i<=2*n;i++){
        for(int j=0;j<=2*n;j++){
               if((n>j)? x=n-j: x=j-n);
               if(i>n? k=2*n-i:k=i);
            if(j==0||j==2*n)
                a[i][j]=n+'0';
            else if(i>0&&i<2*n&&(j<=k||j>2*n-k-1))
                a[i][j]=x+'0';
                else
                a[i][j]=' ';
        }
    }
    for(int i=0;i<=2*n;i++){
        for(int j=0;j<=2*n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
