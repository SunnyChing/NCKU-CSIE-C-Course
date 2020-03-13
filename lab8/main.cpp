
#include <iostream>
#include <cstdlib>
#include <new>

#include "mino_i.h"
using namespace std;

int main(){
    mino *mino_ptr[50];
    try{
    for(int i = 0; i < 50; ++i){
        mino_ptr[i] = new mino_i[900000000];
        
        cout << "mino_ptr["<<i+1<<"]new success\n";
        
    }
    }catch(bad_alloc &MemoryAlloc){
        cerr<<"Exception:"<<MemoryAlloc.what()<<endl;
        
    }
    return 0;
}
