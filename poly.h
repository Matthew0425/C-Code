#pragma once

namespace poly_test {
	class A {
	public:
		virtual void do_thing() = 0;
	};

	class B : public A {
	public:
		void do_thing();
	};

	class C : public A {
		void do_thing();
	};
}