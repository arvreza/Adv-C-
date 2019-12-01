// data.cpp by Bill Weinman <http://bw.org/>
// updated bw 2018-11-08
#include <cstdio>
using namespace std;

//struct data member default to public as oppose to class which default to private
//for presenting of data it is a good practice to use struct, but when we have functions then we should use class
struct A {
    int ia;
    const char * sb = "";
    int ic;
};

int main() {
    A a;
    a.ia = 1;
    a.sb = "two";
    a.ic = 3;
    printf("ia is %d, sb is %s, ic is %d\n", a.ia, a.sb, a.ic);
    
    return 0;
}
