#include <iostream>

using namespace std;
    bool isPrime(int n){
        if(n==1)
            return false;
        for(int i=2;i<n;i++){
            if(n%i==0)
                return false;
        }
        return true;
        }
int main()
{
   int n,a,b;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>a>>b;
    int count=0;
    for(int j=a;j<=b;j++){
        if(isPrime(j))
            count++;
    }
    cout<<count<<endl;
   }
    return 0;
}
