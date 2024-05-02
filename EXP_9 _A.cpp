#include<iostream>
#include<string.h>
using namespace std;

class Product{
	
	private:
	int prod_id;
	string prod_name;
	int stock, gst, discount, prod_price;
	
	public:
	Product(string n,int i,int s,int g, int d,int p){
		prod_id=i;
		prod_name=n;
		stock=s;
		gst=g;
		discount=d;
		prod_price=p;
	}
	void setdata(){
		cout<<"Enter product id                          : ";
		cin>>prod_id;
		cout<<"Enter product name                        : ";
		cin>>prod_name;
		cout<<"Enter stock Qty                           : ";
		cin>>stock;
		cout<<"Enter Tax percent                         : ";
		cin>>gst;
		cout<<"Enter Discount                            : ";
		cin>>discount;
		cout<<"enter the product price (Exclusive of GST): ";
		cin>>prod_price;
	}
	void display(){
		
	    cout<<" "<<endl;
	    cout<<"                  **FOR ADMIN**"<<endl;
		cout<<"product id                          : "<<prod_id <<endl;
		cout<<"product name                        : "<<prod_name<<endl;
		cout<<"stock Qty                           : "<<stock<<endl;
		cout<<"Tax percent                         : "<<gst<<endl;
		cout<<"Discount                            : "<<discount<<endl;
		cout<<"product price (Exclusive of GST)    : "<<prod_price<<endl;
	}
	void crequest(){
		int Qty;
		cout<<" "<<endl;
		cout<<"                **CUNSUMER PORTAL**"<<endl;;
		cout<<"Enter Qty:";
		cin>>Qty;
		if(Qty<=stock){
			cout<<" "<<endl;

			cout<<"          **BILL GENERATED SUCCESSFULLY**"<<endl;
			cout<<" "<<endl;

		    cout<<"product id                      : "<<prod_id <<endl;
			cout<<"product price (Exclusive of GST): "<<prod_price<<endl;
			cout<<"Discount                        : "<<discount<<endl;
		    cout<<"Tax percent                     : "<<gst<<endl;
		    float prod_price_wgst = prod_price + (prod_price*gst/100);
            float final_p=prod_price_wgst-(prod_price_wgst*discount/100);
            cout<<"price per product               : "<<final_p<<endl;
            cout<<"Final Price                     : "<<final_p*Qty<<endl;

		}
		else{
			cout<<"Request can not fullfilled !"<<endl;
			cout<<"Available Stock: "<<stock<<endl;
		}
	}
};

int main(){
	Product product("Default", 0, 0, 0, 0, 0);
	product.setdata();
	product.display();
	product.crequest();
}
