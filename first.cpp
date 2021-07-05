#include<iostream>
using namespace std;
int main(){
    int num;
    int i,count = 0;
    cout<<"Enter any num."<<endl;
    cin>>num;
    for ( i = 2; i <num; i++)
    {
        if (num%i==0)
        {
            /* code */
            cout<<"no.is not prime"<<endl;
            count=count=1;
        }
              break;
    }
    if (count ==2){
        cout<<"number is prime"<<endl;
    }
    return 0;
}
