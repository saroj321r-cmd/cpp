#include <iostream>
using namespace std;
int reverse(int n){
     int r=0;
    while(n!=0){
        r=r*10+n%10;
        n=n/10;
    }
    return r;
}

int main(){
    int n;
    int a,b;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
    }
    for(int j=1;j<=n;j++){
        int rev_a=reverse(a);
        int rev_b=reverse(b);
        int sum=rev_a+rev_b;
        int rev_sum=reverse(sum);
        cout<<rev_sum;
        cout<<endl;
    }
    return 0;
}

