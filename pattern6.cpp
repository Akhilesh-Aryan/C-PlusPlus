#include<iostream>
using  namespace std;
int main(){
    int count=1, n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
    return 0;
}