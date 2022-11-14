#include <iostream>
using namespace std;

int main()
{
    // Swapping the value of variables
    int justinbox = 2;
    int brianbox = 9;
    
    int pogi;

    pogi = justinbox;
    justinbox = brianbox;
    brianbox = pogi;

    cout << "justin box swap " << justinbox << "\n";
    cout << "brian box swap " << brianbox;
         

    return 0;
    
}

