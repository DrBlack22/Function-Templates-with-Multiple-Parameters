#include <iostream>
using namespace std;

template <class H, class F>
H smaller(H h, F f){
    return (h<f?h:f);
}

int main(){

    int h = 22;
    double f = 8.7;
    cout << smaller(f,h) << endl;

}
/* whenever working with different types of
data, you need more than one generic classes
or placeholders. A generic class is a variable
for the type of data instead of the value itself
. These variables can only be types of data
like int, double, float etc. */
