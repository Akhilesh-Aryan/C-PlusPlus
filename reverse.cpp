#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number atleast of two digit "<<endl;
    cin>>num;
    int rev = 0;
    while(num>0){
        int ld = num%10;
        rev = rev*10+ld;
        num = num/10;
         
    }
    cout<<rev<<endl;
    return 0;

}