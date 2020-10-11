#pragma once
#include "QuickUnion.h"

class QuickUnionWeighted : public QuickUnion {
private:
	std::vector<int> size;

public:
	QuickUnionWeighted(int n);
	void Union(int p, int q);
};
