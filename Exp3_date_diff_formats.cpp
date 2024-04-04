#include <iostream>
#include <string>
using namespace std;

class Date {
    int day;
    int month;
    int year;
public:
    Date() {
        day = 1;
        month = 1;
        year = 2020;
    }
    Date(int a, int b, int c) {
        day = a;
        month = b;
        year = c;
    }
    void set_data(){
    	cout<<"Enter date"<<endl;
    	cin>>this->day>>this->month>>this->year;
    	
	}
	
	void gate_data1(){
		cout<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;

	}
    void gate_data2(){
		cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;

	}
    string mon(int month) {
        string str[] = {" ", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        return str[month];
    }
    void gate_data3(){
		cout<<this->day<<"-"<<this->mon(month)<<"-"<<this->year<<endl;

	}
    
};

int main() {
    Date d1;
    
    d1.set_data();
    d1.gate_data1();
    d1.gate_data2();
    d1.gate_data3();


    
    return 0;
}
