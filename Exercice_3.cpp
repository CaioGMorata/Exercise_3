/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++) 
    {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FooBaa" << endl;
        } else if (i % 3 == 0) {
            cout << "Foo" << endl;
        } else if (i % 5 == 0) {
            cout << "Baa" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}
