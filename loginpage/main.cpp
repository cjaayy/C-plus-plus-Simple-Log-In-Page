#include <iostream>

using namespace std;

int main() {

    string gender, yourName, reg_user, reg_pass, userName, passWord;

    cout << "\tPlease Register Your Information!" << endl << endl;

    cout << "Enter Your Name: ";
    getline(cin, yourName);

    cout << endl <<  endl;

    cout << "Select Your Gender - (M - Male, F - Female): ";
    cin >> gender;

    if (gender == "Male" || gender == "male" || gender == "M" || gender == "m"){
         gender = "Mr. ";
    }
    else if (gender == "Female" || gender == "female" || gender == "F" || gender == "f"){
         gender = "Ms. ";
    }
    else  {
        cout << "Invalid Gender!";
        return 0;
    }

    cout << endl <<  endl;

    cout << "Register Your Username: ";
    cin >> reg_user;

    cout << endl;

    cout << "Register Your Password: ";
    cin >> reg_pass;

    cout << endl <<  endl;

    cout << "\tRegistered!";

    cout << endl << endl << endl << endl;

    cout << "Please Log In to Your Account!";

    cout << endl << endl;

    cout << "Enter Username: ";
    cin >> userName;

    cout << endl << endl;

    if (userName == reg_user){
    cout << "Enter Password: ";
    cin >> passWord;
    }
    else {
        cout << endl;
        cout << "Incorrect Username!";
        cout << endl;
        return 0;
    }
    if (passWord == reg_pass){
        cout << endl;
        cout << "\tLog In Successful!\n\n\tWelcome! " << gender << yourName;
        cout << endl;
    }
    else {
        cout << endl;
        cout << "Incorrect Password!";
        cout << endl;
        return 0;
    }

    return 0;
}
