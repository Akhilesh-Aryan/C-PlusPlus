#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    for (int i = a; i<=b;i++)
    {
        if(i%2==0){

            cout<<i<<endl;
        }
        i++;
    }
    return 0;
}
//This changes made By feature1 branch