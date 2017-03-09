#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()

{
    int age;

    cout << "Please enter your age: ";
    cin >> age;

    if ( age > 15 )
    {
        cout << endl << "Congratulations you are eligible to vote! " << endl;
    }

    else if ( age < 15 )
    {
        cout << endl << "Sorry. you are not eligible to vote " << endl;
    }

    return 0;
}
Contact GitHub API Training Shop Blog About
© 2017 GitHub, Inc. Terms Privacy Security Status Help
