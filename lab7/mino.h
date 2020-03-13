#ifndef MINO_H
#define MINO_H

#include <iostream>

using namespace std;

class mino{
public:
	mino(int mri = 1);
	mino &turn();
	virtual void paint() = 0;
protected:
	int rotate_index, max_ri;
};
#endif