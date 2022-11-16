#include <iostream>
using namespace std;

int main()
{
    /*for (int j = 0; j <= 5; j++) {

        cout << j;*/

    // ITERATE THROUGH AN ARRAY
    string Games[] = { "LOL","CODM","WR","VALORANT","SF"};
    int pogi = sizeof(Games) / sizeof(Games[0]); //To count or get the size of array
    //cout << pogi;

    for (int b = 0; b < 5; b++) { //to output inside of array

        cout << Games[b] << "\n";
    }

    return 0;
}