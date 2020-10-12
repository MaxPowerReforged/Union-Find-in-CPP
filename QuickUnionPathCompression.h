#pragma once
#include "QuickUnionWeighted.h"

class QuickUnionPathCompression : public QuickUnionWeighted {
public:
	QuickUnionPathCompression(int n);
	int Root(int p);
};