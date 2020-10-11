#pragma once
#include <vector>

class QuickUnion {
protected:
	std::vector<int> arr;

public:
	typedef QuickUnion super;
	QuickUnion(int n);
	bool Connected(int p, int q);
	int Root(int p);
	void Union(int p, int q);
};