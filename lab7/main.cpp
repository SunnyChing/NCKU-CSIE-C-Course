#include <iostream>
#include <cstdlib>
#include <ctime>

#include "gen_mino.h"

using namespace std;

int main(){
	mino *mino_ptr;
	srandom(time(NULL));
	for(int i = 0; i < 10; ++i){
		mino_ptr = gen_mino();
		mino_ptr->paint();
		cout << endl;
		delete mino_ptr;
	}
	return 0;
}