#include <iostream>
using namespace std;

int main()
{
    //if else statment & new statement
    /*float inp, a = 5; 

    cout << "Enter a number:";
    cin >> inp;

    if (inp > a) {
        cout << "yes it's greater ";
    }else if (inp <= a){
        cout << "no it is less";
    
    }
    if (inp <= a ) {
        cout << "no it is less 2";

    }*/

    
    int inp;

    cout << "Enter a number day:";
    cin >> inp;

    switch (inp) {

    case 1:
        cout << "It's Sunday today";
        break;

    case 2:
        cout << "It's Monday today";
        break;

    case 3:
        cout << "It's Tuesday today";
        break;

    case 4:
        cout << "It's Wednesday today";
        break;

    case 5:
        cout << "It's Thursday today";
        break;

    case 6:
        cout << "It's Friday today";
        break;

    case 7:
        cout << "It's Saturday today";
        break;

    default :
        cout << "Invalid input!";
        break;

    }


    return 0;
}

