#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main(){
    int num, ls_temp, total;
    int i=0;
    vector<int>Cowsls;
    cin>>num;
    while(num--){
        cin >>ls_temp;
        Cowsls.push_back(ls_temp);
    }
    sort(Cowsls.begin(),Cowsls.end());
    while(i<5){
        total += Cowsls.back();
        Cowsls.pop_back();
        i++;
    }
    printf("%d\n", total);
    return 0;
}
