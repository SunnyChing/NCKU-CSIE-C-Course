
#include<iostream>

using namespace std;


int main(){
    int n;
    cout<< "please enter a number n"<< endl;
    cin>> n;
    while(n!=0){
    if(n==1) return 0;
    else if(n%2!=0){
        n=3*n+1;
        cout<<n<<" ";}//when n is odd
    else {
        n=n/2;
        cout<<n<<" ";
    }
    }
    return 0;
}
