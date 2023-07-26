#include <iostream>
using namespace std;
class Detail
{

protected:
    string aadhaar_card_number;
    string name;
    string contact_number;
    int nRoom;
    int choice;
    string roomClass;
    float price=0;

public:
    void set_details()
    {
        cout << "Enter your name" << endl;
        getline(cin, name);

        cout << "Enter your Aadhaar card number" << endl;
        getline(cin, aadhaar_card_number);

        cout << "Enter your contact number" << endl;
        getline(cin, contact_number);

        cout << "Enter how many rooms do you want" << endl;
        cin >> nRoom;

        cout << "1 for Standard Room\n2 for Superior Room\n3 for Executive Room" << endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << "You choose Standard Room" << endl;
            roomClass = "Standard Room";
            price = 900;
        }
        else if (choice == 2)
        {
            cout << "You choose Superior Room" << endl;
            roomClass = "Superior Room";
            price = 2000;
        }
        else if (choice == 3)
        {
            cout << "You choose Executive Room" << endl;
            roomClass = "Executive Room";
            price = 4000;
        }
        else
        {
            cout << "Invalid input" << endl;
        }
    }
};
class Display : public Detail
{

public:
    void display()
    {
        cout << "Your name is: " << name << endl;
        cout << "Your aadhaar number is: " << aadhaar_card_number << endl;
        cout << "Your contact number is: " << contact_number << endl;
        cout << "You have booked " << nRoom << " rooms" << endl;
        cout << "You have choose " << roomClass << endl;
        cout << "Total amount per day is " <<nRoom*price << endl;
    }
};
int main()
{

    Display d1;
    d1.set_details();
    d1.display();

    return 0;
}