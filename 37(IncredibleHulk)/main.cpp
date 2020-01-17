#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int t,n,nearest=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int steps=0;
        if(n==0) cout<<0<<endl;
        for(int j=0;j<n;j++){
            if(pow(2,j)==n){
                steps++;
                 break;
            }
            else if(pow(2,j)>n){
            nearest=pow(2,j-1);
            n=n-nearest;
            j=-1;
            steps++;
            }
        }
            cout<<steps<<endl;


    }



    return 0;
}
