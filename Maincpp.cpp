#include "poly.h"
#ifndef iostream
#include <iostream>
#endif // !1
#include <vector>

// This program is me testing out how polymorphism works attempting to confirm my understanding

using namespace poly_test;

int main() {
	char FF;
	B p;
	C q;

	std::vector<A*> x = { &p, &q };

	for (int i = 0; i < 2; i++) {
		x[i]->do_thing();
	}

	std::cin >> FF;

	delete &x;
}
