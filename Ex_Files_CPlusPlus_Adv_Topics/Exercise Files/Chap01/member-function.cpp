// member-function.cpp by Bill Weinman <http://bw.org/>
// updated bw 2018-10-03
#include <cstdio>
using namespace std;

class A {
private:
    int _value = 0;
public:
    void setv ( const int a ) { _value = a; };
    int getv () const; //const is part of function signature.
    int getv ();
};

int A::getv () const {
    puts("Immutable");
    return _value;
};

int A::getv ()  {
    puts("mutable");
    return _value;
};

int main() {
    A a;
    a.setv(42);
    printf("a is %d\n", a.getv());

    const A b = a; //const qualify objects.
    printf("b is %d\n", b.getv());

    return 0;
}
