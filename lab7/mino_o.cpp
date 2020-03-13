#include "mino_o.h"

char o_arr[1][4][4] = {{{'0', '0', '0', '0'},
						{'0', '1', '1', '0'},
						{'0', '1', '1', '0'},
						{'0', '0', '0', '0'}}};

mino_o::mino_o() : mino(0){}

void mino_o::paint(){
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 4; ++j) cout << o_arr[rotate_index][i][j];
		cout << endl;
	}
}