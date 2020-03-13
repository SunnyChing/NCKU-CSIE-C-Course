#include <cstdlib>
#include <iostream>

#include "gen_mino.h"

#define NUM_MINO 5
#define MINO_S 0
#define MINO_I 1
#define MINO_L 2
#define MINO_O 3
#define MINO_T 4

mino *gen_mino(){
	int mino_type;
	mino *ptr;
	mino_type = random() % NUM_MINO;
	switch (mino_type){
		case MINO_S:
			ptr = new mino_s;
			break;
		case MINO_I:
			ptr = new mino_i;
			break;
		case MINO_L:
			ptr = new mino_l;
			break;
		case MINO_O:
			ptr = new mino_o;
			break;
        case MINO_T:
            ptr = new mino_t;
	}
	return ptr;
}