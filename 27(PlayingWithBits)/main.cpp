#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        int count=0;
        for(int j=a;j<=b;j++){
                int x=j;
            while(x>0){
                if(x%2==1)
                    count++;
                x/=2;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
