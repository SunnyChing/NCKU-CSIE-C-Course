#include "mino_i.h"

char i_arr[2][4][4] = {{{'0', '0', '1', '0'},
						{'0', '0', '1', '0'},
						{'0', '0', '1', '0'},
						{'0', '0', '1', '0'}},
					   {{'0', '0', '0', '0'},
						{'0', '0', '0', '0'},
						{'1', '1', '1', '1'}, 
						{'0', '0', '0', '0'}}};

mino_i::mino_i() : mino(1){}

void mino_i::paint(){
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 4; ++j) cout << i_arr[rotate_index][i][j];
		cout << endl;
	}
}