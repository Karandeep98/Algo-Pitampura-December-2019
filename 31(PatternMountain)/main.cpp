#include <iostream>

using namespace std;

int main()
{
  int n,i,j,k;
  cin>>n;
  for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j<<"\t";
        }
        k=2*(n-i)-1;
        while(k>0){
            cout<<"\t";
            k--;
        }
        for(j=i;j>=1;j--){
            if(j==n)
                j--;
        cout<<j<<"\t";
        }
        cout<<endl;

  }



    return 0;
}
