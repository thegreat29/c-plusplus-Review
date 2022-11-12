#include <iostream>
using namespace std;

int main()
{
    
    while (true) {
        int inp;
        bool valid = false;

        cout << "Enter a number day:";
        cin >> inp;

        switch (inp) {

        case 1:
            cout << "It's Sunday today" << "\n";
            valid = true;
            break;

        case 2:
            cout << "It's Monday today" << "\n";
            valid = true;
            break;

        case 3:
            cout << "It's Tuesday today" << "\n";
            valid = true;
            break;

        case 4:
            cout << "It's Wednesday today" << "\n";\
            valid = true;
            break;

        case 5:
            cout << "It's Thursday today" << "\n";
            valid = true;
            break;

        case 6:
            cout << "It's Friday today" << "\n";
            valid = true;
            break;

        case 7:
            cout << "It's Saturday today" << "\n";
            valid = true;
            break;

        default:
            cout << "Invalid input!" << "\n";
            break; 

        }

        if (valid) {
            break;
        }
    }

    return 0;
}

