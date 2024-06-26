#include <iostream>
#include <fstream>
#include <cstring>
#include<conio.h>
using namespace std;

int dom_pnr = 100;
int int_pnr = 200;

class dom_booking
{
public:
    int d_pnr, dom_passengers, dom_meal_choice;
    char flight_dom[10];
    char dom_meal[20], meal1[20];
    string date_dom;
    int dom_meal_price, dom_price;
    char dom_dep[20], dom_arr[20];
    int choice_dom, source, destination;
    int dtotal_price;
public:
    void generate_dom_pnr();
    void travel_details_dom();
    void select_flight_dom();
    void dom_meals();
    void createfile_dom();
    void dom_cancelticket(int);
    void dom_checkticket(int);
};

void dom_booking::generate_dom_pnr()
{
    dom_pnr++;
    d_pnr = dom_pnr;
}

void dom_booking::travel_details_dom()
{
    try
    {
        cout << "\n\n\n\t\t\tPlease enter date of departure (DD/MM/YY):";
        cin >> date_dom;
        if((date_dom.size()!=8) || (date_dom.size()<11/05/23))
        {
            throw date_dom;
        }
    }
    catch(string)
    {
        cout << "\n\t\tYou have entered the wrong input.\n\t\tPlease enter date in the given format (DD/MM/YY).......\n\n"<< endl;
        travel_details_dom();
    }
    system("CLS");
    try
    {
        cout << "\t\t-----------------" << endl;
        cout << "\t\t SOURCE " << endl;
        cout << "\t\t-----------------" << endl;
        cout << "\t\t1. New Delhi" << endl;
        cout << "\t\t2. Chennai" << endl;
        cout << "\t\t3. Kolkatta" << endl;
        cout << "\t\t4. Mumbai" << endl;
        cout << "\t\t------------------\n"<< endl;
        cout << "\t\tEnter your source:" << endl;
        cin >> source;
        if((source<1) || (source>4))
        {
            throw source;
        }
    }
    catch(int)
    {
        cout << "\n\t\tYou have entered the wrong input.\n\t\tPlease try again.......\n\n"<< endl;
        travel_details_dom();
    }
    system("CLS");
    try
    {
        cout << "\t\t-----------------" << endl;
        cout << "\t\t DESTINATION " << endl;
        cout << "\t\t-----------------" << endl;
        cout << "\t\t1. New Delhi" << endl;
        cout << "\t\t2. Chennai" << endl;
        cout << "\t\t3. Bangalore" << endl;
        cout << "\t\t4. Kolkatta" << endl;
        cout << "\t\t------------------\n"<< endl;
        cout << "\t\tEnter your destination :" << endl;
        cin >> destination;
        if((destination<1) || (destination>4))
        {
            throw destination;
        }
    }
    catch(int)
    {
        cout << "\n\t\tYou have entered the wrong input.\n\t\tPlease try again.......\n\n"<< endl;
        travel_details_dom();
    }
    system("CLS");
    if ((source == 1 && destination == 2) || (source == 2 && destination == 1))
    {
        cout << "\t \t \tAvailable flights" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "   Airlines\tDeparture\tArrival\t\tPrice\n"<< endl;
        cout << "1. Air India\t08:00\t\t11:05\t\tRs.5000\n";
        cout << "2. IndiGo\t14:00\t\t17:05\t\tRs.5500\n";
        cout << "3. SpiceJet\t19:00\t\t22:05\t\tRs.6000\n";
    }
    else if ((source == 1 && destination == 3) || (source == 3 && destination == 1))
    {
        cout << "\t \t \tAvailable flights" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "   Airlines\tDeparture\tArrival\t\tPrice\n"<< endl;
        cout << "1. Air India\t08:00\t\t11:05\t\tRs.5000\n";
        cout << "2. IndiGo\t14:00\t\t17:05\t\tRs.5500\n";
        cout << "3. SpiceJet\t19:00\t\t22:05\t\tRs.6000\n";
    }
    else if ((source == 1 && destination == 4) || (source == 4 && destination == 1))
    {
        cout << "\t \t \tAvailable flights" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "   Airlines\tDeparture\tArrival\t\tPrice\n"<< endl;
        cout << "1. Air India\t08:00\t\t11:05\t\tRs.5000\n";
        cout << "2. IndiGo\t14:00\t\t17:05\t\tRs.5500\n";
        cout << "3. SpiceJet\t18:00\t\t21:05\t\tRs.6000\n";
    }
    else if ((source == 2 && destination == 3) || (source == 3 && destination == 2))
    {
        cout << "\t \t \tAvailable flights" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "   Airlines\tDeparture\tArrival\t\tPrice\n"<< endl;
        cout << "1. Air India\t08:00\t\t11:05\t\tRs.5000\n";
        cout << "2. IndiGo\t14:00\t\t17:05\t\tRs.5500\n";
        cout << "3. SpiceJet\t18:00\t\t21:05\t\tRs.6000\n";
    }
    else if ((source == 2 && destination == 4) || (source == 4 && destination == 2))
    {
        cout << "\t \t \tAvailable flights" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "   Airlines\tDeparture\tArrival\t\tPrice\n"<< endl;
        cout << "1. Air India\t08:00\t\t11:05\t\tRs.5000\n";
        cout << "2. IndiGo\t14:00\t\t17:05\t\tRs.5500\n";
        cout << "3. SpiceJet\t18:00\t\t21:05\t\tRs.6000\n";
    }
    else if ((source == 3 && destination == 4) || (source == 4 && destination == 3))
    {
        cout << "\t \t \tAvailable flights" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "   Airlines\tDeparture\tArrival\t\tPrice\n"<< endl;
        cout << "1. Air India\t08:00\t\t11:05\t\tRs.5000\n";
        cout << "2. IndiGo\t14:00\t\t17:05\t\tRs.5500\n";
        cout << "3. SpiceJet\t18:00\t\t21:05\t\tRs.6000\n";
    }
    else if (source == destination)
    {
        cout << "\n\t\tSource and destination are the same.\n\t\tPlease enter try again........\n\n"<< endl;
        return travel_details_dom();
    }
    else
    {
        cout << "\n\t\tSOMETHING WENT WRONG.......\n\t\tPlease try again.........\n\n"<< endl;
        return travel_details_dom();
    }
}

void dom_booking::select_flight_dom()
{
    cout << "\n\t\tEnter your choice : " << endl;
    cin >> choice_dom;
    switch (choice_dom)
    {
        case 1:
            cout << "\n\t\tYour travel information:" << endl;
            cout << "\t\t---------------------------------------" << endl;
            cout << "\t\tFlight name     |  Air India" << endl;
            strcpy(flight_dom, "Air India");
            cout << "\t\tDeparture Time  |   08:00" << endl;
            cout << "\t\tArrival Time    |   11:05" << endl;
            cout << "\t\tPrice           |   5000" << endl;
            strcpy(dom_dep, "08:00");
            strcpy(dom_arr, "11:05");
            dom_price = 5000;
            break;

        case 2:
            cout << "\n\t\tYour travel information:" << endl;
            cout << "\t\t---------------------------------------" << endl;
            cout << "\t\tFlight name     |  Indigo" << endl;
            strcpy(flight_dom, "Indigo");
            cout << "\t\tDeparture Time  |  14:00" << endl;
            cout << "\t\tArrival Time    |  17:05" << endl;
            cout << "\t\tPrice           |  5500" << endl;
            strcpy(dom_dep, "14:00");
            strcpy(dom_arr, "17:05");
            dom_price = 5500;
            break;

        case 3:
            cout << "\n\t\tYour travel information" << endl;
            cout << "\t\t---------------------------------------" << endl;
            cout << "\t\tFlight name     |  SpiceJet" << endl;
            strcpy(flight_dom, "SpiceJet");
            cout << "\t\tDeparture Time  |   18:00" << endl;
            cout << "\t\tArrival Time    |   21:05" << endl;
            cout << "\t\tPrice           |   6000" << endl;
            strcpy(dom_dep, "18:00");
            strcpy(dom_arr, "21:05");
            dom_price = 6000;
            break;

        default:
            cout << "\n\t\tYou have entered the wrong input.\n\t\tPlease Try again..........\n\n"<< endl;
            return select_flight_dom();
    }
}

void dom_booking::dom_meals()
{
    try
    {
        cout << "\t\t---------------------------------------" << endl;
        cout << "\t\tPlease enter your meal preference : " << endl;
        cout << "\t\t---------------------------------------" << endl;
        cout << "\t\t1. Vegetarian meal      |  Rs.350"<<endl;
        cout << "\t\t2. Non-Vegetarian meal  |  Rs.450"<<endl;
        cout << "\t\t3. No meal              |  Rs.000\n\n";
        cout << "\t\tEnter your choice : ";
        cin >> dom_meal_choice;
        if(dom_meal_choice > 3 || dom_meal_choice < 1)
        {
            throw dom_meal_choice;
        }
    }
    catch(int)
    {
        cout << "\n\t\tYou have entered the wrong input.\n\t\tPlease select a number between 1 and 3\n";
        cin >> dom_meal_choice;
    }
    if (dom_meal_choice == 1)
    {
        strcpy(meal1, "vegetarian meal");
        dom_meal_price=350;
    }
    else if (dom_meal_choice == 2)
    {
        strcpy(meal1, "non-Vegetarian meal");
        dom_meal_price=450;
    }
    else
    {
        strcpy(meal1, "no meal");
        dom_meal_price=0;
    }
    dtotal_price= dom_price + dom_meal_price;
    cout << "\t\tYou have chosen " << meal1 << endl;
}

class int_booking
{
public:
    int i_pnr, int_passengers, int_meal_choice;
    char flight_int[20], int_dep[20], int_arr[20], meal2[30], int_meal_choices[20];
    string date_int;
    int int_price, int_meal_price;
    int source_int, destination_int, choice_int;
    int itotal_price;
public:
    void generate_int_pnr();
    void travel_details_int();
    void select_flight_int();
    void int_meal();
    void createfile_int();
    void int_cancelticket(int);
    void int_checkticket(int);
};

void int_booking::generate_int_pnr()
{
    int_pnr++;
    i_pnr = int_pnr;
}

void int_booking::travel_details_int()
{
    try
    {
        cout << "\n\t\tPlease enter date of departure (DD/MM/YY):" << endl;
        cin >> date_int;
        if(date_int.size()!=8 || (date_int.size()<11/05/23))
        {
            throw date_int;
        }
    }
    catch(string)
    {
        cout << "\n\t\tYou have entered the wrong input.\n\t\tPlease enter date in the given format (DD/MM/YY).......\n\n"<< endl;
        travel_details_int();
    }
    system("CLS");
    try
    {
        cout << "\n\t\t SOURCE " << endl;
        cout << "\t\t-----------------" << endl;
        cout << "\t\t1. Dubai" << endl;
        cout << "\t\t2. London" << endl;
        cout << "\t\t3. Hong Kong" << endl;
        cout << "\t\t4. Delhi" << endl;
        cout << "\t\t------------------\n"<< endl;
        cout << "\t\tEnter your source:" << endl;
        cin >> source_int;
        if((source_int<1) || (source_int>4))
        {
            throw source_int;
        }
    }
    catch(int)
    {
        cout << "\n\t\tYou have entered the wrong input.\n\t\tPlease try again.......\n\n\n"<< endl;
        travel_details_int();
    }
    try
    {
        cout << "\n\t\t DESTINATION " << endl;
        cout << "\t\t-----------------" << endl;
        cout << "\t\t1. Dubai" << endl;
        cout << "\t\t2. London" << endl;
        cout << "\t\t3. Hong Kong" << endl;
        cout << "\t\t4. Delhi" << endl;
        cout << "\t\t------------------\n"<< endl;
        cout << "\t\tEnter your destination : \n"<< endl;
        cin >> destination_int;
        if((destination_int<1) || (destination_int>4))
        {
            throw destination_int;
        }
    }
    catch(int)
    {
        cout << "\n\t\tYou have entered the wrong input.\n\t\tPlease try again.......\n"<< endl;
        travel_details_int();
    }
    if ((source_int == 1 && destination_int == 2) || (source_int == 2 && destination_int ==1))
    {
        cout << "\t \t \tAvailable flights" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "   Airlines\tDeparture\tArrival\t\tPrice\n"<< endl;
        cout << "1. Lufthansa\t04:10\t\t08:30\t\tRs.14,010\n";
        cout << "2. Emirates\t14:00\t\t18:05\t\tRs.15,120\n";
        cout << "3. Vistara\t22:00\t\t02:10\t\tRs.12,500\n";
    }
    else if ((source_int == 1 && destination_int == 3) || (source_int == 3 && destination_int == 1))
    {
        cout << "\t \t \tAvailable flights" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "   Airlines\tDeparture\tArrival\t\tPrice\n"<< endl;
        cout << "1. Lufthansa\t04:10\t\t08:30\t\tRs.23,010\n";
        cout << "2. Emirates\t14:00\t\t18:05\t\tRs.28.340\n";
        cout << "3. Vistara\t22:00\t\t02:10\t\tRs.29,320\n";
    }
    else if ((source_int == 1 && destination_int == 4) || (source_int == 4 && destination_int == 1))
    {
        cout << "\t \t \tAvailable flights" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "   Airlines\tDeparture\tArrival\t\tPrice\n"<< endl;
        cout << "1. Lufthansa\t04:10\t\t08:30\t\tRs.10,500\n";
        cout << "2. Emirates\t14:00\t\t18:05\t\tRs.9,120\n";
        cout << "3. Vistara\t22:00\t\t02:10\t\tRs.10,550\n";
    }
    else if ((source_int == 2 && destination_int == 3) || (source_int == 3 && destination_int == 2))
    {
        cout << "\t \t \tAvailable flights" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "   Airlines\tDeparture\tArrival\t\tPrice\n"<< endl;
        cout << "1. Lufthansa\t04:10\t\t08:30\t\tRs.14,010\n";
        cout << "2. Emirates\t14:00\t\t18:05\t\tRs.15,120\n";
        cout << "3. Vistara\t22:00\t\t02:10\t\tRs.12,500\n";
    }
    else if ((source_int == 2 && destination_int == 4) || (source_int == 4 && destination_int == 2))
    {
        cout << "\t \t \tAvailable flights" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "   Airlines\tDeparture\tArrival\t\tPrice\n"<< endl;
        cout << "1. Lufthansa\t04:10\t\t08:30\t\tRs.14,010\n";
        cout << "2. Ethiad\t14:00\t\t18:05\t\tRs.15,120\n";
        cout << "3. Vistara\t22:00\t\t02:10\t\tRs.12,500\n";
    }
    else if ((source_int == 3 && destination_int == 4) || (source_int == 4 && destination_int == 3))
    {
        cout << "\t \t \tAvailable flights" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "   Airlines\tDeparture\tArrival\t\tPrice\n"<< endl;
        cout << "1. Lufthansa\t04:10\t\t08:30\t\tRs.14,010\n";
        cout << "2. Emirates\t14:00\t\t18:05\t\tRs.15,120\n";
        cout << "3. Vistara\t22:00\t\t02:10\t\tRs.12,500\n";
    }
    else if (source_int == destination_int)
    {
        cout << "\nSource and destination are the same.\nPlease try again.........\n\n\n"<< endl;
        return travel_details_int();
    }
    else
    {
        cout << "\n\t\tYou have entered the wrong input.\n\t\tPlease try again.......\n\n\n"<< endl;
        return travel_details_int();
    }
}

void int_booking::select_flight_int()
{
    cout << "\n\t\tEnter your choice : " << endl;
    cin >> choice_int;
    switch (choice_int)
    {
        case 1:
            cout << "\n\t\tYour travel information" << endl;
            cout << "\t\t-----------------------------\n"<< endl;
            cout << "\t\tFlight name     |  Lufthansa" << endl;
            strcpy(flight_int, "Lufthansa");
            cout << "\t\tDeparture Time  |    04:10" << endl;
            cout << "\t\tArrival Time    |    14:05" << endl;
            cout << "\t\tPrice           |    14,010" << endl;
            strcpy(int_dep, "10:00");
            strcpy(int_arr, "14:05");
            int_price = 14010;
            break;
    
        case 2:
            cout << "\n\t\tYour travel information" << endl;
            cout << "\t\t-----------------------------\n"<< endl;
            cout << "\t\tFlight name     |  Emirates" << endl;
            strcpy(flight_int, "Emirates");
            cout << "\t\tDeparture Time  |   14:00" << endl;
            cout << "\t\tArrival Time    |   18:05" << endl;
            cout << "\t\tPrice           |   15,120" << endl;
            strcpy(int_dep, "14:00");
            strcpy(int_arr, "18:05");
            int_price = 15120;
            break;

        case 3:
            cout << "\n\t\tYour travel information" << endl;
            cout << "\t\t-----------------------------\n"<< endl;
            cout << "\t\tFlight name     |  Vistara" << endl;
            strcpy(flight_int, "Vistara");
            cout << "\t\tDeparture Time  |   18:00" << endl;
            cout << "\t\tArrival Time    |   22:05" << endl;
            cout << "\t\tPrice           |   12,500" << endl;
            strcpy(int_dep, "18:00");
            strcpy(int_arr, "22:05");
            int_price = 12500;
            break;

        default:
            cout << "\n\t\tYou have entered the wrong input.\n\t\tPlease Try again..........\n\n\n"<< endl;
            return select_flight_int();
    }
}

void int_booking::int_meal()
{
    try
    {
        cout << "\t\t------------------" << endl;
        cout << "\t\tPlease enter your Meal preferences " << endl;
        cout << "\t\t------------------" << endl;
        cout << "\t\t1. Vegetarian meal       |  Rs.450 \n";
        cout << "\t\t2. Non-Vegetarian meal   |  Rs.500\n";
        cout << "\t\t3. No meal               |  Rs.000\n\n";
        cout << "\t\tEnter your choice : ";
        cin >> int_meal_choice;
        if(int_meal_choice > 3 || int_meal_choice < 1)
        {
            throw int_meal_choice;
        }
    }
    catch(int)
    {
        cout << "\n\t\tYou have entered the wrong input.\n\t\tPlease enter a number between 1 and3\n";
        cin >> int_meal_choice;
    }
    if (int_meal_choice == 1)
    {
        strcpy(meal2, "vegetarian meal");
        int_meal_price = 450;
    }
    else if (int_meal_choice == 2)
    {
        strcpy(meal2, "non-vegetarian meal");
        int_meal_price = 500;
    }
    else
    {
        strcpy(meal2, "no meal");
        int_meal_price = 0;
    }
    itotal_price=int_price + int_meal_price;
    cout << "\t\tYou have chosen " << meal2 << endl;
}

class passenger : public dom_booking, public int_booking
{
protected:
    char name[100];
    char email[50];
    char gender[20];
    char pass_no[30];
    char contact_no[30];
public:
    void passenger_details(int x);
    void display_details();
    int getpnr_dom();
    int getpnr_int();
    void disp_dom();
    void disp_int();
};

void passenger::passenger_details(int x)
{
    system("CLS");
    if (x == 1)
    {
        travel_details_dom();
        select_flight_dom();
        dom_meals();
    }
    else
    {
        travel_details_int();
        select_flight_int();
        int_meal();
    }
    system("CLS");
    cout << "\n\n\n\t\tEnter the required details:\n";
    cout << "\t\t------------------------------------\n"<< endl;
    cout << "\t\tEnter your name:";
    cin >> name;
    cout << "\t\tEnter your email ID:";
    cin >> email;
    cout << "\t\tEnter your gender:";
    cin >> gender;
    cout << "\t\tEnter your contact number:";
    cin >> contact_no;
    cout << "\t\tEnter your passport number:";
    cin >> pass_no;
}

void passenger::display_details()
{
    system("CLS");
    cout << "\n\n\t\tPassenger details\n";
    cout << "\t\t--------------------------------------"<< endl;
    cout << "\t\t Name            |  " << name << endl;
    cout << "\t\t Gender          |  " << gender << endl;
    cout << "\t\t Email ID        |  " << email << endl;
    cout << "\t\t Contact No.     |  " << contact_no << endl;
    cout << "\t\t Passport number |  " << pass_no << endl;
    cout << "\t\t--------------------------------------"<< endl;
}
    
int passenger::getpnr_dom()
{
    return d_pnr;
}
    
int passenger::getpnr_int()
{
    return i_pnr;
}

void passenger::disp_dom()
{
    cout << "\n\n\t\tPassenger flight details\n";
    cout << "\t\t--------------------------------------"<< endl;
    cout << "\t\tPNR              |  " << d_pnr << endl;
    cout << "\t\tFlight           |  " << flight_dom << endl;
    cout << "\t\tBoarding date    |  " << date_dom << endl;
    cout << "\t\tDeparture Time   |  " << dom_dep << endl;
    cout << "\t\tArrival Time     |  " << dom_arr << endl;
    cout << "\t\tMeal choice      |  " << meal1 << endl;
    cout << "\t\tTotal Price      |  " << dtotal_price << endl;
    cout << "\t\t--------------------------------------"<< endl;
}

void passenger::disp_int()
{
    cout << "\n\n\t\tPassenger flight details\n";
    cout << "\t\t--------------------------------------"<< endl;
    cout << "\t\tPNR              |  " << i_pnr << endl;
    cout << "\t\tFlight           |  " << flight_int << endl;
    cout << "\t\tBoarding date    |  " << date_int << endl;
    cout << "\t\tDeparture Time   |  " << int_dep << endl;
    cout << "\t\tArrival Time     |  " << int_arr << endl;
    cout << "\t\tMeal choice      |  " << meal2 << endl;
    cout << "\t\tTotal Price      |  " << itotal_price << endl;
    cout << "\t\t--------------------------------------"<< endl;
}

class payment
{
protected:
    int choice3, bank, bank1, user_id;
    string date, cvv, card;
    char password[30];
public:
    void getcn();
    void geted();
    void getcvv();
    void payment_details();
};

void payment::getcn()
{
    try
    {
        cout << "\t\tEnter card number:"<<endl;
        cin >> card;
        if(card.size()!=16)
        {
            throw card;
        }
    }
    catch(string)
    {
        cout<<"\t\tInvalid card number"<<endl;
        cout<<"\t\tPlease try again.............."<<endl;
        getcn();
    }
}

void payment::geted()
{
     try
     {
        cout << "\t\tEnter expiry date:(MM/YY)"<<endl;
        cin >> date;
        if(date.size()!=5)
        {
            throw date;
        }
     }
    catch(string)
    {
        cout<<"\t\tInvalid expiry date"<<endl;
        cout<<"\t\tPlease try again.............."<<endl;
        geted();
    }
}

void payment::getcvv()
{
    try
    {
        cout << "\t\tEnter CVV number:"<<endl;
        cin >> cvv;
        if(cvv.size()!=3)
        {
            throw cvv;
        }
    }
    catch(string)
    {
        cout<<"\t\tInvalid CVV"<<endl;
        cout<<"\t\tPlease try again.............."<<endl;
        getcvv();
    }
}

void payment::payment_details()
{
    system("CLS");
    cout << "\n\n\n\t\tMode of payment"<<endl;
    cout << "\t\t---------------------------"<< endl;
    cout << "\t\t1. Debit Card \n\t\t2. Credit Card \n\t\t3. Net Banking"<<endl;
    cout << "\t\tEnter your choice :"<<endl;
    cin >> choice3;
    switch (choice3)
    {
        case 1:
            getcn();
            geted();
            getcvv();
            cout << "\t\t---------------------------"<< endl;
            cout << "\t\tTransaction Successful"<<endl;
            break;

        case 2:
            getcn();
            geted();
            getcvv();
            cout << "\t\t---------------------------"<< endl;
            cout << "\t\tTransaction Successful"<<endl;
            break;

        case 3:
            cout << "\t\tBanks Available:\n\t\t-----------------------"<<endl;
            cout<<"\t\t1. State bank of India"<<endl;
            cout<<"\t\t2. ICICI Bank"<<endl;
            cout<<"\t\t3. Axis Bank"<<endl;
            cout<<"\t\t4. HDFC Bank"<<endl;
            cout <<"\t\tSelect your bank:";
            cin >> bank;
            cout << "\t\tYou have selected:" << bank<<endl;
            cout << "\t\tEnter user id:";
            cin >> user_id;
            cout << "\t\tEnter password:";
            cin >> password;
            cout << "\t\t-----------------------------";
            cout << "\n\t\tTransaction Successful\n";
            cout << "\t\t-----------------------------";
            break;

        default:
            cout << "\n\t\tWrong input entered.\n\t\tTry again..........\n";
            payment_details();
            break;
    }
}

void  dom_booking :: createfile_dom()
{
    ofstream file_out;
    file_out.open("Domestic_flight_details.txt", ios::out);

    if (!file_out) {
    cout << "\n\t\t\tError opening file. Please try again later.\n";
        return;
    }

    file_out << d_pnr << " " << flight_dom << " " << date_dom << " " << dom_dep<< " " << dom_arr << " " << meal1 << " "<< dtotal_price << std::endl;

    file_out.close();


cout << "\n\t\t\tPress any key to continue...";
/*cin.ignore();*/
cin.get();
}

void dom_booking :: dom_cancelticket(int x)
{
passenger Passenger;
ifstream inFile;
inFile.open("Domestic_flight_details.txt");

if (!inFile) {
    cout << "\n\t\t\tError opening file. Please try again later.\n";
    return;
    inFile.close();
}

 while (inFile >>d_pnr >>flight_dom >>date_dom >> dom_dep  >> dom_arr >> meal1 >>dtotal_price)
{
    if (Passenger.getpnr_dom() != x) {
        cout<<"PLEASE ENTER CORRECT PNR"<<endl;
    }
    else{
        Passenger.disp_dom();
        cout<<"Your ticket has been deleted"<<endl;
    }
}

inFile.close();
cout << "\n\t\t\tPress any key to continue...";
//cin.ignore();
cin.get();
}

void dom_booking :: dom_checkticket(int x)
{ 
passenger Passenger;
    int f = 0;
    ifstream inFile;
    inFile.open("Domestic_flight_details.txt",ios::in | ios::out);
    //GinFile.seekg(0);
    if (!inFile) {
        cout << "\n\t\t\tError opening file. Please try again later.\n";
        return;
        
    }

    while (!inFile.eof())
    {    passenger Passenger; // create a Passenger object
        inFile>>Passenger.d_pnr;
        inFile>>Passenger.flight_dom;
        inFile>>Passenger.date_dom;
        inFile>>Passenger.dom_dep;
        inFile>>Passenger.dom_arr;
        inFile>>Passenger.meal1;
        inFile>>Passenger.dtotal_price;
            if (Passenger.d_pnr == x) {
            cout<<"\n\n\tTicket Details\n"<<endl;
            Passenger.disp_dom();
            f=1;
            break;
        }
    }
    inFile.close();
    if(f == 0)
    {
        cout<<"\t\tThis PNR doesnt exist"<<endl;
    }

    inFile.close();
    cout << "\n\t\t\tPress any key to continue...";
    //cin.ignore();
    cin.get();
}

void int_booking::createfile_int()
{
    // ofstream file_out;
    // file_out.open("International.txt", ios::out);
    // file_out.write((char *)&Passenger, sizeof(Passenger));
    // file_out.close();

    ofstream file_out;
    file_out.open("International_flight_details.txt", ios::out);

    if (!file_out) {
    cout << "\n\t\t\tError opening file. Please try again later.\n";
        return;
    }

    file_out << i_pnr << " " << flight_int << " " << date_int << " " << int_dep<< " " << int_arr << " " << meal2 << " "<< itotal_price << std::endl;

    file_out.close();

    /*cout << "\n\t\t\tTicket booked successfully!\n";*/

cout << "\n\t\t\tPress any key to continue...";
/*cin.ignore();*/
cin.get();
}

void int_booking :: int_cancelticket(int x)
{
    passenger Passenger;
    ifstream inFile;
    inFile.open("International_flight_details.txt");

    if (!inFile) {
        cout << "\n\t\t\tError opening file. Please try again later.\n";
        return;
        inFile.close();
    }

    while (inFile >> i_pnr  >> flight_int >> date_int >> int_dep  >> int_arr  >> meal2>>itotal_price )
    {
        if (Passenger.getpnr_int() != x) {
            cout<<"PLEASE ENTER CORRECT PNR"<<endl;
        }
        else{
            Passenger.disp_int();
            cout<<"Your ticket has been deleted"<<endl;
        }
    }

    inFile.close();
    cout << "\n\t\t\tPress any key to continue...";
    //cin.ignore();
    cin.get();
}

void int_booking ::int_checkticket(int x)
{
    passenger Passenger;
    int f=0;
    ifstream inFile;
    inFile.open("International_flight_details.txt");

    if (!inFile) {
    cout << "\n\t\t\tError opening file. Please try again later.\n";
    return;
    inFile.close();
    }

    while (inFile >> i_pnr >> flight_int >> date_int >> int_dep  >> int_arr  >> meal2>>itotal_price)
   {
    if (Passenger.getpnr_int() == x) {
        cout<<"\n\n\tTicket Details\n"<<endl;
        Passenger.disp_int();
        f++;
    }
   }
   inFile.close();
   if(f == 0)
   {
    cout<<"\t\tThis PNR doesnt exist"<<endl;
   }

   inFile.close();
   cout << "\n\t\t\tPress any key to continue...";
   //cin.ignore();
   cin.get();
}

int main()
{
    class dom_booking d;
    class int_booking i;
    class passenger p;
    class payment pay;
    int choice, choice1, choice2, choice3, input;
    char input1;
    string log="aaaaa";
    string pass="aaaa";
    system("CLS");

loop:   cout<<"\n\n\n\n\n\t\t\t\t\t Login ID : ";
        cin>>log;
        cout<<"\n\t\t\t\t\t Password : ";
        cin>>pass;

        if(log == "OOP" && pass == "2023" || log== "OOPproject" && pass =="abcd1234")
        {
            cout<<"\n\n\t\t\t\t\t     WELCOME!!!!"<<endl;
            cout<<"\t\t   YOU ARE SUCCESSFULLY LOGGED IN THE AIRLINE RESERVATION SYSTEM";
            cout<<"\n\t\t\t\t   Press any key to continue....!!";
            getch();
            system("CLS");
        }
        else
        {
            cout<<"\n\n\t\t\t\t Please Try Again!!!!!!";
            getch();
            system("CLS");
            goto loop;
        }

    cout<<"\n\t\t\t\t\t************************************";
    cout<<"\n\t\t\t\t\t*  AIRLINE RESERVATION SYSTEM PROJECT  *";
    cout<<"\n\t\t\t\t\t************************************";
    cout<<"\n\n\t\t\t\t\t\t     ACCOMPLISHED BY:";
    cout<<"\n\t\t\t\t\t     -------------------------------";
    cout<<"\n\t\t\t\t\t     |        NAME        | ROLLNO |";
    cout<<"\n\t\t\t\t\t     -------------------------------";
    cout<<"\n\t\t\t\t\t     |    Sadhika Jain    |   01   |";
    cout<<"\n\t\t\t\t\t     |    Saumya Jain     |   06   |";
    cout<<"\n\t\t\t\t\t     |   Priyanshi Jain   |   18   |";
    cout<<"\n\t\t\t\t\t     |     Sayal Goyal    |   31   |";
    cout<<"\n\t\t\t\t\t     -------------------------------";
    cout<<"\n\n\n\t\t\t\t\t     Press any key to continue....!!";
    getch();
    do
    {
again:  system("CLS");
        cout << "\n\t\t\t\t***********";
        cout << "\n\t\t\t\t* AIRLINE RESERVATIONS SYSTEM *";
        cout << "\n\t\t\t\t         * MAIN MENU *";
        cout << "\n\t\t\t\t***********"<<endl;
        cout << "\n\n\t\t\t\t    1------>Book flight" << endl;
        cout << "\t\t\t\t    2------>Cancel fight" << endl;
        cout << "\t\t\t\t    3------>Check flight ticket" << endl;
        cout << "\t\t\t\t    4------>Exit" << endl;
        cout << "\n\t\t\t--------------------------------------------------" << endl;
        cout << "\t\t\t\t    Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                system("CLS");
                cout << "\n\n\t\tPlease enter your choice" << endl;
                cout << "\t\t1. Domestic Fights" << endl;
                cout << "\t\t2. International Flights" << endl;
                cout << "\t\tEnter your option: ";
                cin >> choice1;
                switch (choice1)
                {
                    
                    case 1:
                        p.generate_dom_pnr();
                        p.passenger_details(1);
                        pay.payment_details();
                        p.display_details();
                        p.disp_dom();
                        p.createfile_dom();
                        break;
                        
                    case 2:
                        p.generate_int_pnr();
                        p.passenger_details(2);
                        pay.payment_details();
                        p.display_details();
                        p.disp_int();
                        p.createfile_int();
                        break;

                    default:
                        cout << "\t\tWrong input" << endl;
                        goto again;
                }
                break;

            case 2:
                system("CLS");
                cout << "\n\n\t\t1. Domestic Fights" << endl;
                cout << "\t\t2. International Flights" << endl;
                cout << "\t\tPlease enter your option";
                cin >> choice2;
                if (choice2 == 1)
                {
                    cout << "\t\tEnter your PNR number :";
                    cin >> input;
                    p.dom_cancelticket(input);
                }
                else if (choice2 == 2)
                {
                    cout << "\t\tEnter your PNR number :";
                    cin >> input;
                    p.int_cancelticket(input);
                }
                else
                {
                    cout << "\t\tWrong input.\n";
                    goto again;
                }
                break;
            
            case 3:
                system("CLS");
                cout << "\t\tCheck your tickets" << endl;
                cout << "\t\t----------------------------" << endl;
                cout << "\t\t1. Domestic Fights" << endl;
                cout << "\t\t2. International Flights" << endl;
                cout << "\n\t\tEnter your option :";
                cin >> choice3;
                if (choice3 == 1)
                {
                    cout << "\n\t\tEnter your PNR number :";
                    cin >> input;
                    p.dom_checkticket(input); // function call to display domestic ticket details
                }
                else if (choice3 == 2)
                {
                    cout << "\n\t\tEnter your PNR number :";
                    cin >> input;
                    p.int_checkticket(input); // function call to display domestic ticket details
                }
                else
                {
                    cout << "\t\tWrong input.";
                    goto again;
                }
                break;

            case 4:
                system("CLS");
                return 0;

            default:
                cout << "\t\tWrong input.Please enter the correct input \n\n\n\n" << endl;
                goto again;
        }
        cout << "\n\n\n\t\tDo you wish to continue? (Y/N)..............." << endl;
        cin >> input1;
    } while (input1 == 'Y' || input1 == 'y');
    return 0;
}