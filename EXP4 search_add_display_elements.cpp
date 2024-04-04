#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
class List{
	private:
		Node* head;
		public:
			List(){
				head=NULL;
			}
			void insert(int d){
				Node* newNode= new Node;
				newNode->data=d;
				newNode->next= head;
				head= newNode;
			}
			
			void display(){
				Node* current=head;
				while(current!=NULL)
				{
					cout<< current->data<<" ";
					current= current->next;
				}
				cout<<endl;
			}
			void search(int x)
			{
				Node* current=head;
				while(current!=NULL)
                  	{
	                	if(x==current->data)
	                	{
	                		cout<<"Element present"<<endl;
	                		break;
						}
					    else if(current->next == NULL)
					    {
					    	cout<<"Element Not found"<<endl;
						}
						current= current->next;

	                }
	                cout<<endl;
			
			}
			
			
};
int main()
{
	List l;
	int n,i,choice,x;
	do{
		cout<<"1.enter data:"<<endl;
		cout<<"2.Display"<<endl;
		cout<<"3.search"<<endl;
		cout<<"4.terminate"<<endl;
		cout<<"Enter choice:"<<endl;
		cin>>choice;
		if(choice==1)
		{
			 cout<<"enter the number of data"<<endl;
             cin>>n;
	         int d;

	         for(i=0;i<n;i++)
                  	{
	                	cout<<"enter the data for node "<<i<<endl;

	                   	cin>>d;
	                    l.insert(d);
	                }
		}
		else if(choice==2)
		{
			l.display();

		}
		else if(choice==3)
		{
			cout<<"enter the data you want to search:"<<endl;
			cin>>x;
			l.search(x);
		}
	
		
	   
}
while(choice!=4);
	
	return 0;
}
