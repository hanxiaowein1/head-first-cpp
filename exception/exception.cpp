#include <iostream>
#include <stdexcept>
using namespace std;

double safe_divide(double num, double den)
{
    if (den == 0){
        throw invalid_argument {"Divide by zero"};
    }
    return num / den;
}

int main()
{
    try {
        cout << safe_divide(23, 0) << endl;
    }catch(const invalid_argument &e){
        cout << "Caught exception: " << e.what() << endl;
    }
    cout << "after try/catch" << endl;
    return 0;
}