#include<iostream>
#include<iomanip>
using namespace std;

class Movie{
    char movieTitle[100];
    float adultTicketPrice;
    float childTicketPrice;
    int adultTicketsSold;
    int childTicketsSold;
    float donationPercentage;
    int totalTickets;
    float grossAmount;
    float donationAmount;
    float netSale;

public:
    void fetchDetails(){
        cout<<"Input the movie title: ";
        cin>>this->movieTitle;
        cout<<"Input the price of an adult ticket: ";
        cin>>this->adultTicketPrice;
        cout<<"Input the price of a child ticket: ";
        cin>>this->childTicketPrice;
        cout<<"Input the number of adult tickets sold: ";
        cin>>this->adultTicketsSold;
        cout<<"Input the number of child tickets sold: ";
        cin>>this->childTicketsSold;
        cout<<"Input the donation percentage: ";
        cin>>this->donationPercentage;
    }

    void calculate(){
        totalTickets = adultTicketsSold + childTicketsSold;
        grossAmount = (adultTicketPrice * adultTicketsSold) + (childTicketPrice * childTicketsSold);
        donationAmount = grossAmount * (donationPercentage / 100);
        netSale = grossAmount - donationAmount;
    }

    void displayDetails(){
        cout<<endl<<endl<<"Movie Title:"<<setw(24)<<setfill('.')<<"."<<this->movieTitle<<endl;
        cout<<"Total Tickets Sold:"<<setw(15)<<setfill('.')<<"."<<this->totalTickets<<endl;
        cout<<"Gross Amount:"<<setw(22)<<setfill('.')<<".$"<<this->grossAmount<<endl;
        cout<<"Donation Percentage:"<<this->donationPercentage<<"%"<<endl;
        cout<<"Donation Amount:"<<setw(20)<<setfill('.')<<".$"<<this->donationAmount<<endl;
        cout<<"Net Sale:"<<setw(26)<<setfill('.')<<".$"<<this->netSale<<endl;
    }

};

int main(){
    Movie m;
    m.fetchDetails();
    m.calculate();
    m.displayDetails();
    return 0;
}

