#ifndef MINO_I_H
#define MINO_I_H

#include <iostream>

#include "mino.h"

using namespace std;

class mino_i : public mino{
public:
	mino_i();
	virtual void paint();
};
#endif