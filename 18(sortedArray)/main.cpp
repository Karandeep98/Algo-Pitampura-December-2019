#include <iostream>

using namespace std;
bool check(int a[],int i){
    if(a[i-1]>a[i])
        return false;
        else if(i==1)
        return true;
        else
            check(a,i-1);

}
int main()
{
    int n,a[1000];bool status=true;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    status= check(a,n-1);
    if(status) cout<<"true";
    else cout<<"false";
    return 0;
}
