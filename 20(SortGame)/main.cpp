#include <iostream>
#include<string.h>

using namespace std;
void swap(int salary[],int j){
            int t=salary[j];
            salary[j]=salary[j+1];
            salary[j+1]=t;
    }

    void sort(){
    }
int main()
{

    int x,n,salary[1000];
    char name[1000][1000];
    cout<<strcmp("AKASH","akash");

    cin>>x>>n;

    for(int i=0;i<n;i++){
        cin>>name[i]>>salary[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
        if(salary[j]>salary[j+1]){
            swap(salary,j);
             char a[1000];
            strcpy(a,name[j]);
            strcpy(name[j],name[j+1]);
            strcpy(name[j+1],a);
        }

    }
    }
    int c=0;
    for(int i=n-1;i>=0;i--){

        if(salary[i]==salary[i-1]){
                c++;
                /*if(stricmp(name[i],name[i-1])>0){
                    char a[1000];
                    strcpy(a,name[i]);
                    strcpy(name[i],name[i-1]);
                    strcpy(name[i-1],a);
                }*/
        }
        else
            sort()
    }
    for(int i=n-1;i>=0;i--){
    if(salary[i]>=x){

        cout<<name[i]<<" "<<salary[i]<<endl;
    }
    }

    return 0;
}
