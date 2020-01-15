#include <iostream>

using namespace std;

int main()
{
    int n,a[100],b[100],count;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int j=0;
        while(a[i]>0){
           b[j]=a[i]%2;
           a[i]/=2;
            j++;
        }
    count=0;
    for(int i=j-1;i>=0;i--){
            if(b[i]==1)
        count++;
    }
    cout<<count<<endl;
    }
    return 0;
}
