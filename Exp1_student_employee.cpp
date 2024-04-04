#include<iostream>
using namespace std;
class Person{
	public:
	string name;
	int age;
};

class Student:public Person{
	public:
	string college_name;
	string PRN;
	
	void setdata(){
		cout<<"Enter the name of student: ";
		cin>>name;
		cout<<"enter the age of student: ";
		cin>>age;
		cout<<"enter the college name: ";
		cin>>college_name;
		cout<<"enter the PRN: ";
		cin>>PRN;
		
	}
	void getdata(){
		cout<<"***Student Information***"<<endl;
		cout<<"Name of student is: ";
		cout<<name<<endl;
		cout<<"Age of student is: ";
		cout<<age<<endl;
		cout<<"College name: ";
		cout<<college_name<<endl;
		cout<<"PRN: ";
		cout<<PRN;
		
	}
	
};
class Employee: public Person{
	public:
	string position;
	 int ID;
	
	void setdata(){
		cout<<"Enter the name of Employee: ";
		cin>>name;
		cout<<"enter the age of Employee: ";
		cin>>age;
		cout<<"enter the position: ";
		cin>>position;
		cout<<"enter the ID: ";
		cin>>ID;
		
	}
	void getdata(){
		cout<<"***Employee Information***"<<endl;
		cout<<"Name of Employee is: ";
		cout<<name<<endl;
		cout<<"Age of Employee is: ";
		cout<<age<<endl;
		cout<<"Employee ID: ";
		cout<<ID<<endl;
		cout<<"Employee position: ";
		cout<<position<<endl;
		
	}
};

int main()
{
	int choice;
	Student s;
	Employee e;
	
	cout<<"1.Student Login"<<endl;
	cout<<"2.Employee Login"<<endl;
	cin>>choice;
	if(choice==1)
	{
		cout<<"Enter the information of student"<<endl;
		s.setdata();
		s.getdata();
	}
	else if(choice==2)
	{
		cout<<"Enter the information of Employee"<<endl;
		e.setdata();
		e.getdata();
	}

	else
	{
		cout<<"Enter a Valid input";
	}
}

