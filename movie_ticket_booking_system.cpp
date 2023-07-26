#include <iostream>
#include <string>
using namespace std;
class Details
{
protected:
    string name;
    string mobile_number;
    int movie_option;
    string movie_name;
    int seat_no;
    int customer_id;
    float ticket_price;

public:
    void select_movie()
    {
        int m;
        cout << "1 for Avengers endgame"
             << "                       ";
        cout << "2 for Spider man No way home"
             << "                     ";
        cout << "3 for Iron man 3" << endl
             << endl
             << endl
             << endl;
        cin >> m;
        movie_option = m;
        if (m == 1)
        {
            cout << "You choose: Avengers endgame" << endl;
            movie_name = "Avengers endgame";
            ticket_price = 700;
        }
        else if (m == 2)
        {
            cout << "You choose: Spider man No way home" << endl;
            movie_name = "Spider man No way home";
            ticket_price = 600;
        }
        else
        {
            cout << "You choose: Iron man 3" << endl;
            movie_name = "Iron man 3";
            ticket_price = 650;
        }
    }
    void select_seat()
    {
        int s;

        for (int i = 1; i <= 105; i++)
        {
            printf("  %d\t", i);
        }
        cout << endl
             << endl
             << endl
             << endl;
        cout << "Which seat you want" << endl;
        cin >> s;
        seat_no = s;
    }

    void customer_ID()
    {
        static int id = 1000;
        cout << "You customer id is " << id<<endl<<endl<<endl<<endl;
        customer_id = id;
    }
    void display()
    {
        cout << "Your name: " << name << endl;
        cout << "your mobile number " << mobile_number << endl;
        cout << "Customer id: " << customer_id << endl;
        cout << "Movie name: " << movie_name << endl;
        cout << "Seat no: " << seat_no << endl;
    }
    void increment_id(int &a){
        a++;
    }
};
class Customer_details : public Details
{
public:
    void name_of_customer()
    {
        cout<<"Welcome to my Booking system!"<<endl<<endl;
        cout << "Enter your name" << endl;
        getline(cin, name);
    }
    void mobile_Number()
    {
        cout << "Enter your mobile number" << endl;
        getline(cin, mobile_number);
    }

    void display()
    {
        cout << "Customer name: " << name << endl;
        cout << "Customer mobile no: " << mobile_number << endl;
        cout << "Customer id:  " << customer_id << endl;
        cout << "Name of the movie: " << movie_name << endl;
        cout<<"Ticket price: "<<ticket_price<<endl;
        cout << "Seat no: " << seat_no << endl;
        increment_id(customer_id);
    }
};
int main()
{
        
    Customer_details customer;
    customer.name_of_customer();
    customer.mobile_Number();
    customer.select_movie();
    customer.select_seat();
    customer.customer_ID();
    customer.display();
    return 0;
}