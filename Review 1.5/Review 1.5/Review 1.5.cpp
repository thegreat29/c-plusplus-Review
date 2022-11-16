#include <iostream>

using namespace std;

int main()
{

    /*int j = 0;  

    while (j < 5) {
        j++;
        cout << j;


    }*/

    /*int b = 0;
    do {

        b++;
        cout << b;

    } while (b < 9);*/

    int lives = 5;
    string answer;

    while (lives != 0) {

        // simple quiz with lives Game 
        cout << "what is the nearest planet in the earth? \n";
        cout << "Answer:";
        cin >> answer;

        if (answer == "Mercury") {
            cout << "Your answer is correct!";
                break;

        }
        else {
            lives--;
           cout << "You're answer is wrong! Try again! " << "Lives remaining: " << lives << "\n";
           
        }
        if (lives == 0) {
            cout << "You lose :( ";
            break;

        }
            

    }
        


    return 0;

}

