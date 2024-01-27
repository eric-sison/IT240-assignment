#include <iostream>
using namespace std;
#include <stack>

void application();

int main(int argc, char** argv) {
	application();
	return 0;

}

void application()
{
	stack<char> s0;
	stack<char> s1;
	s0.push('x');
	s1.push('y');
	s1.push('z');
	s0.push('a');
    printf("popped: %c\n",s0.top());
    printf("popped: %c\n",s1.top());
    s0.pop();
}

