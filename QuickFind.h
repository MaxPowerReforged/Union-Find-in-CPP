#pragma once
#include <vector>

class QuickFind {
private:
	std::vector<int> arr;

public:
	QuickFind(int n);
	bool Connected(int p, int q);
	void Union(int p, int q);
};