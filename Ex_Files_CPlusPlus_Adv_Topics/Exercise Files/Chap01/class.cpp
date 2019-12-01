// class.cpp by Bill Weinman <http://bw.org/>
// updated bw 2018-10-03
#include <cstdio>
using namespace std;

// a very simple class, we can put this in its own file called .h
class c1 {
    int i = 0;
public:
    void setvalue( const int & value );
    int getvalue() const;
};

void c1::setvalue( const int & value ) {
    i = value;
}

int c1::getvalue() const {
    return i;
}

//copy ctor and copy operator and copy ctor all are implicits.
int main() {
    const int i = 47;
    c1 o1;
    o1.setvalue(i);
    printf("value is %d\n", o1.getvalue());

    c1 o2 = o1; //copy constructor
    printf("value is %d\n", o2.getvalue());

    o1.setvalue(72);
    o2 = o1;
    printf("value is %d\n", o2.getvalue());
    return 0;
}
