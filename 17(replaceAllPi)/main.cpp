#include <iostream>
#include<string.h>

using namespace std;
int main()
{
    int n;
    char a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        for(int k=0;k<strlen(a);k++){
        if(a[k]=='p'&&a[k+1]=='i'){
                 a[k]='3';a[k+1]='.';

            for(int j=strlen(a);j>=k+2;j--){
                a[j+2]=a[j];
            }
            a[k+2]='1';a[k+3]='4';
        }
        }
        cout<<a<<endl;
    }

    return 0;
}
