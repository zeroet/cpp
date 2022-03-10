#include <iostream>

int gl_val = 10;
int f(void){ return 4;}

namespace Bar {
	int gl_val = 5;
	int f(void) { return 7; }
}

namespace Muf = Bar;


int main(void)
{
	printf("gl_val: %d\n", gl_val);
	printf("f(): %d\n", f());

	printf("Bar gl_val : %d\n", Bar::gl_val);
	printf("Bar f(): %d\n", Bar::f());

	printf("Muf gl_val : %d\n", Muf::gl_val);
	printf("Muf f(); %d\n", Muf::f());

	printf("::gl_val %d\n",::gl_val);
	printf("::f(): %d\n", ::f());

	return (0);
}
