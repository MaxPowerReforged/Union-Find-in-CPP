#pragma once
#include <vector>

class QuickUnion {
private:
	std::vector<int> arr;

public:
	QuickUnion(int n);
	bool Connected(int p, int q);
	int Root(int p);
	void Union(int p, int q);
};
