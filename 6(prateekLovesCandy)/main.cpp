#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n,num[100000],a[100000],k=0;
    a[0]=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n;i++){
         int j=2;
         if(num[i]<=k)
            cout<<a[num[i]-1]<<endl;
         else{
                if(i==0) j=0;
         else{
            int x=k-1;
            j=a[x]+1;
         }
         num[i]-=k;
        while(num[i]>0){
            if(isPrime(j))
            {   num[i]--;
                a[k]=j;
                k++;
            }
            j++;
        }
        cout<<j-1<<endl;
        }
    }
    return 0;
}
