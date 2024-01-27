#include <iostream>
using namespace std;
#include "stack.h"

void application();

int main(int argc, char** argv)
{
	application();
	return 0;
}

void application()
{
	stack s0;
	stack s1;
	s0.push('x');
	s1.push('y');
	s1.push('z');
	s0.push('a');
	
	char ans = s1.pop();
    
	cout << "popped: " << ans << endl;
	cout << "popped: " << s0.pop() << endl;
}

