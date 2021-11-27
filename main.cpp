/* A non-reference function taking a const parameter makes the arguments passed into it constant. So, a non-reference const can be declared. 

This means that the parameter value cannot be changed by the function as it stays constant throughout.

A non-reference const is used to check that the value is never changed while being used in a function.

When the parameter is used in a function, only the copy of the parameter's value is changed instead of the original parameter which is why
people don't use it much.

Below is an example
*/

#include <iostream>

using namespace std;

void constFunction(const int ex);

int main(void)
{
    const int ex = 10;
    constFunction(ex);
}

// basic function to showcase const, if user were to try and modify the value, then it would throw an error.
void constFunction(const int ex)
{
    cout<< ex << endl;
    cout<< ex + 10 << endl;
}