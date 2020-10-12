#pragma once
#include "QuickUnionPathCompression.h"
#include <iostream>

QuickUnionPathCompression::QuickUnionPathCompression(int n) : QuickUnionWeighted(n) {}

int QuickUnionPathCompression::Root(int p) {
	while (p = !arr[p]) {
		arr[p] = arr[arr[p]];
		p = arr[p];
	}
	return p;
};