#include <iostream>
#include "SubRepo/functions.h"

using namespace std;

void arrayTest(int(&arrayIn)[10])
{
    for(int i{0}; i < 10; i++ )
        cout <<  arrayIn[i] << endl;
}

int main()
{
    cout << "Hello World!" << endl;

    int array[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    arrayTest(array);

    testFunction();
//    addedFunction();

    cout << adding(7) << endl;

    return 0;
}
