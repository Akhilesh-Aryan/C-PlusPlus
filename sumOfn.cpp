#include <iostream>
using namespace std;
#include <math.h>
int sum(int n){
    int ans = 0;
    for (int i = 0; i<=n; i++)
    {
        ans+=i;
    }
    return ans;
}
    int32_t main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
}