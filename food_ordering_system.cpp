#include<iostream>
#include<cstdlib>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
float total,Ototal;
int Ftotal;

template<class T>
int roundoff(T numb)
{
	int a = int(numb);
	T b = numb-a;
	if(b<0.5)
    {
		return a;
	}
	else
    {
		return a+1;
    }
}

float getoffer(float total)
{
	float tot;
	if( total > 500)
    {
		cout<<"\n          yay! 10% off!"<<endl;
		tot=(total*10)/100;
		total-=tot;
		return total;
	}
	else
	{
		return total;
	}
}

class items
{
	private:
         string veg,nonveg;
         string icecream,juice;
	public:
        virtual void whichtype()=0;
        virtual void itemsdisplay()=0;
		virtual float orderdisplay()=0;

};

class customer : public items
{
	public:
		int rating;
		int num;
		vector<double>::iterator it;
		vector<string>::iterator item;
		vector<int>::iterator p;
		vector<string> items;
		vector<double> price;
		vector<int> qty;
		void whichtype();
		void itemsdisplay();
		float orderdisplay();

		friend ostream &operator<<(ostream &out,customer &c);

};

void customer :: whichtype()
{
	cout<<"\n          You prefer veg or non-veg?(V/NV)\n";
	cout<<"          ";
	string choice;
	cin>>choice;
	cout<<"\n";
	if(choice == "veg" || choice == "VEG" || choice == "v" || choice == "V")
    {
        char ch;
	do{
	 cout<<"\n            ITEMS                PRICES ";
	 cout<<"\n";
	 cout<<"          1. BURGER               40.25/-\n";
	 cout<<"          2. NOODLES              60.50/-\n";
	 cout<<"          3. SANDWICH             45.20/-\n";
	 cout<<"          4. NACHOS               35.00/-\n";
	 cout<<"          5. VEG THAALI          150.75/-\n";
	 cout<<"          Enter Your Choice-->  ";
	 int choice;
	 cin>>choice;
	 int num;
	 switch(choice)
	 {
	 	case 1:
	 		cout<<"\n          QUANTITY : ";
	 		cin>>num;
	 		cout<<"\n          "<<num<<" Burger added to list";
	 		items.push_back("BURGER");
	 		price.push_back(40.25);
	 		qty.push_back(num);
	 		break;
	 	case 2:
	 		cout<<"\n          QUANTITY : ";
	 		cin>>num;
		  cout<<"\n          "<<num<<" Noodle added to list";
		    items.push_back("NOODLES");
		    price.push_back(60.50);
		    qty.push_back(num);
			break;
		case 3:
			cout<<"\n          QUANTITY : ";
			cin>>num;
			cout<<"\n          "<<num<<" Sandwich added to list";
			items.push_back("SANDWICH");
			price.push_back(45.20);
		    qty.push_back(num);
			break;
		case 4:
			cout<<"\n          QUANTITY : ";
			cin>>num;
		 	cout<<"\n          "<<num<<" Nachos added to list";
		 	items.push_back("NACHOS");
		 	price.push_back(35.00);
		 	qty.push_back(num);
			 break;
		case 5:
			cout<<"\n          QUANTITY : ";
			cin>>num;
		cout<<"\n          "<<num<<" Veg thaali added to list";
			items.push_back("VEG_THAALI");
			price.push_back(150.75);
			qty.push_back(num);
			break;
		default:
			cout<<"\n          Wrong choice\n";
			break;
		}
		cout<<"\n\n          Want to order again?(y/n)\n";cout<<"          ";
		cin>>ch;
		}
	 while(ch == 'y' || ch == 'Y');
	 cout<<"\n          Your order is placed\n";

	}
	else
    {
		char ch;
		int num;
	do{
	  cout<<"\n            ITEMS                PRICES ";
	 cout<<"\n";
	 cout<<"          1. BIRIYANI                 120.15/-\n";
	 cout<<"          2. EGG ROLL                  40.00/-\n";
	 cout<<"          3. SHAVARMA                 100.00/-\n";
	 cout<<"          4. CHICKEN MOMOS             60.50/-\n";
	 cout<<"          5. CHICKEN CHILLI           120.25/-\n";
	 cout<<"          Enter Your Choice-->  ";
	 int choice;
	 cin>>choice;

	 switch(choice)
	 {
	 	case 1:
	 		cout<<"\n          QUANTITY : ";
	 		cin>>num;
	 		cout<<"\n          "<<num<<" Biriyani added to list";

	 		items.push_back("BIRIYANI");
	 		price.push_back(120.15);
	 		qty.push_back(num);
	 		break;
	 	case 2:
		   cout<<"\n          QUANTITY : ";
		   cin>>num;
		    cout<<"\n          "<<num<<" Egg Roll added to list";
		    items.push_back("EGG_ROLL");
		    price.push_back(40.00);
		    qty.push_back(num);
			break;
		case 3:
			cout<<"\n          QUANTITY : ";
			cin>>num;
			cout<<"\n          "<<num<<" shavarma added to list";
			items.push_back("SHAVARMA");
			price.push_back(100.00);
			qty.push_back(num);
			break;
		case 4:
		 	cout<<"\n          QUANTITY : ";
		 	cin>>num;
		 cout<<"\n          "<<num<<" chicken momos added to list";
		 	items.push_back("CHICKEN_MOMOS");
		 	price.push_back(60.50);
		 	qty.push_back(num);
			 break;
		case 5:
			cout<<"\n          QUANTITY : ";
			cin>>num;
		cout<<"\n          "<<num<<" chicken chilli added to list";
			items.push_back("CHICKEN_CHILLI");
			price.push_back(120.25);
			qty.push_back(num);
			break;
		default:
			cout<<"\n          Wrong choice\n";
			break;}
		cout<<"\n          Want to order again?(y/n)";cout<<"\n          ";
		cin>>ch;
		}
	 while(ch == 'y' || ch == 'Y');
	 cout<<"\n          Your order is placed\n";

  }
}

void customer :: itemsdisplay()
{
	cout<<"\n          You prefer Ice-cream or Juice?(J/I)\n";
	cout<<"          ";
	string choice;
	cin>>choice;
	cout<<"\n";
	if(choice == "juice" || choice == "JUICE" || choice == "j" || choice == "J")
    {
        char ch;
	do{
	 cout<<"\n            ITEMS                PRICES ";
	 cout<<"\n";
	 cout<<"          1. MANGO JUICE            60.00/-\n";
	 cout<<"          2. APPLE JUICE            80.25/-\n";
	 cout<<"          3. CHICKOO JUICE          45.25/-\n";
	 cout<<"          4. WATERMELON JUICE       75.50/-\n";
	 cout<<"          5. PAPAYA JUICE           50.75/-\n";
	 cout<<"          Enter Your Choice-->  ";
	 int choice;
	 cin>>choice;
	 int num;
	 switch(choice)
	 {
	 	case 1:
	 		cout<<"\n          QUANTITY : ";
	 		cin>>num;
	 		cout<<"\n          "<<num<<" MANGO JUICE added to list";
	 		items.push_back("MANGO_JUICE");
	 		price.push_back(60.00);
	 		qty.push_back(num);
	 		break;
	 	case 2:
	 		cout<<"\n          QUANTITY : ";
	 		cin>>num;
		    cout<<"\n          "<<num<<" APPLE JUICE added to list";
		    items.push_back("APPLE_JUICE");
		    price.push_back(80.25);
		    qty.push_back(num);
			break;
		case 3:
			cout<<"\n          QUANTITY : ";
			cin>>num;
			cout<<"\n          "<<num<<" CHICKOO JUICE added to list";
			items.push_back("CHICKOO_JUICE");
			price.push_back(45.25);
		    qty.push_back(num);
			break;
		case 4:
			cout<<"\n          QUANTITY : ";
			cin>>num;
		 	cout<<"\n          "<<num<<" WATERMELON JUICE added to list";
		 	items.push_back("WATERMELON_JUICE");
		 	price.push_back(75.50);
		 	qty.push_back(num);
            break;
		case 5:
			cout<<"\n          QUANTITY : ";
			cin>>num;
		    cout<<"\n          "<<num<<" PAPAYA JUICE added to list";
			items.push_back("PAPAYA_JUICE");
			price.push_back(50.75);
			qty.push_back(num);
			break;
		default:
			cout<<"\n          Wrong choice\n";
			break;
		}
		cout<<"\n\n          Want to order again?(y/Y)\n";cout<<"          ";
		cin>>ch;
    }
	 while(ch == 'y' || ch == 'Y');
	 cout<<"\n          Your order is placed\n";

	}
	else
    {
		char ch;
		int num;
	do{
	  cout<<"\n            ITEMS                PRICES ";
	 cout<<"\n";
	 cout<<"          1. CHOCOLATE                120.00/-\n";
	 cout<<"          2. VANILLA                   75.25/-\n";
	 cout<<"          3. BUTTERSCOTCH              90.75/-\n";
	 cout<<"          4. MANGO                     80.00/-\n";
	 cout<<"          5. BLACK CURRENT            120.00/-\n";
	 cout<<"          Enter Your Choice-->  ";
	 int choice;
	 cin>>choice;

	 switch(choice)
	 {
	 	case 1:
	 		cout<<"\n          QUANTITY : ";
	 		cin>>num;
	 		cout<<"\n          "<<num<<" CHOCOLATE added to list";

	 		items.push_back("CHOCOLATE");
	 		price.push_back(120.00);
	 	    qty.push_back(num);
	 		break;
	 	case 2:
		    cout<<"\n          QUANTITY : ";
		    cin>>num;
		    cout<<"\n          "<<num<<" VANILLA added to list";
		    items.push_back("VANILLA");
		    price.push_back(75.25);
		    qty.push_back(num);
			break;
		case 3:
			cout<<"\n          QUANTITY : ";
			cin>>num;
			cout<<"\n          "<<num<<" BUTTERSCOTCH added to list";
			items.push_back("BUTTERSCOTCH");
			price.push_back(90.75);
			qty.push_back(num);
			break;
		case 4:
		 	cout<<"\n          QUANTITY : ";
		 	cin>>num;
		    cout<<"\n          "<<num<<" MANGO added to list";
		 	items.push_back("MANGO");
		 	price.push_back(80.00);
		 	qty.push_back(num);
            break;
		case 5:
			cout<<"\n          QUANTITY : ";
			cin>>num;
		    cout<<"\n          "<<num<<" BLACK CURRENT added to list";
			items.push_back("BLACK_CURRENT");
			price.push_back(120.00);
			qty.push_back(num);
			break;
		default:
			cout<<"\n          Wrong choice\n";
			break;}
        cout<<"\n          Want to order again?(y/Y)";cout<<"\n          ";
		cin>>ch;
		}
	 while(ch == 'y' || ch == 'Y');
	 cout<<"\n          Your order is placed\n";

  }
}

float customer :: orderdisplay()
{
    char ch,choice;
    float tot,value=0;

    cout<<"\n\n          ******************************************************************\n\n";
    cout<<"          Ordered items :"<<endl;

    for(int i=0;i<items.size();i++)
    {
        cout<<"          "<<i+1<<"."<<items[i]<<"--->"<<price[i]<<"--->"<<qty[i]<<endl;
        value += price[i]*qty[i];
    }
    cout<<"          TOTAL AMOUNT : Rs."<<value<<endl;
    cout<<"\n\n          ******************************************************************\n\n";

    cout<<"          Do you want to cancel any items?(Y/N) ";
    cin>>ch;
    do{
          if(ch == 'y' || ch == 'Y')
          {
               cout<<"\n\n          Enter the item no. to be cancelled : ";
               cin>>num;
               num=num-1;

            	it=price.begin()+num;
                p=qty.begin()+num;

                item=items.begin()+num;
                items.erase(item);

                tot=(*it)*(*p);
                value-=tot;

                qty.erase(p);
                price.erase(it);

          }
          if(items.size()!=0 && ch=='y' || ch == 'Y')
          {
               value=0;
            cout<<"\n\n          ******************************************************************\n\n";
	        cout<<"          Ordered items :"<<endl;

	        for(int i=0;i<items.size();i++)
            {
		   	    cout<<"          "<<i+1<<"."<<items[i]<<"--->"<<price[i]<<"--->"<<qty[i]<<endl;
		   	    value += price[i]*qty[i];
		    }
		   cout<<"          TOTAL AMOUNT : Rs."<<value<<endl;
            cout<<"\n\n          ******************************************************************\n\n";
             cout<<"          Do you want to cancel any item again?(Y/N) ";
             cin>>ch;
          }
          else
          {
             ch = 'n';
          }
      }while(ch == 'y' || ch == 'Y');
        if(items.size()==0)
        {
            cout<<"\n          Your Order list is empty!\n";
        }
        else
        {
            cout<<"\n\n          ******************************************************************\n\n";
            cout<<"          Final order list :"<<endl;

            for(int i=0;i<items.size();i++)
            {
                cout<<"          "<<i+1<<"."<<items[i]<<"--->"<<price[i]<<"--->"<<qty[i]<<endl;
            }
            cout<<"          TOTAL AMOUNT : Rs."<<value<<endl;
            cout<<"\n\n          ******************************************************************\n\n";


            cout<<"                      *********************************************************************************************\n";
            cout<<"                                           Your Order Will Be Ready In 15-30 minutes.\n";
            cout<<"                                                   .....HAPPY ORDERING.....\n";
            cout<<"                       *********************************************************************************************\n";
        }
        return value;
}

ostream &operator<<(ostream &out,customer &c)
{
    int x,y,v,u;
    double val=0;
    out<<"          -------------------------------------------------------------------------------------------\n";
    out<<"                         ITEMS               |     QTY     |        AMOUNT       \n";
    out<<"          -------------------------------------------------------------------------------------------\n";
    for(int i=0;i<c.items.size();i++)
    {
        out<<"          "<<i+1<<"."<<c.items[i];

        x=c.items[i].size();
        y=33-x;
        for(int z=0;z<y;z++)
        {
            cout<<" ";
        }
        out<<"|";
        out<<"     "<<c.qty[i]<<"       |";
        out<<"        Rs."<<roundoff(c.price[i]*(c.qty[i]))<<endl;
        val += roundoff(c.price[i]*(c.qty[i]));
        out<<"          ------------------------------------------------------------------------------------------\n";
    }
    total = val;
    Ototal = getoffer( total);
    Ftotal = roundoff<>(Ototal);
    out<<"                                             | SUBTOTAL    |"<<"         Rs."<<val<<endl;
    out<<"          ------------------------------------------------------------------------------------------\n";
    out<<"                                             | AMOUNT(O/NO)|"<<"         Rs."<<Ototal<<endl;
    out<<"          ------------------------------------------------------------------------------------------\n";
    out<<"            TOTAL AMOUNT                                   |"<<"         Rs."<<Ftotal<<endl;
    out<<"          ------------------------------------------------------------------------------------------\n";
    return out;
}

int main()
{
	char ch;
	string pay;
    customer person;
    items *lst = &person;
    do{
         cout<<"                                 **************************************************************************\n";
	     cout<<"                                                     WELCOME TO FOOD ORDER SYSTEM\n";
	     cout<<"                                 **************************************************************************\n\n\n";
	     cout<<"\n\n          1. FOOD SECTION--> \n\n          2. JUICE OR ICECREAM--> \n\n          3. DISPLAY ORDERS--> \n\n          4. PAYMENT--> \n\n\n             Enter Your Choice ---> ";
	     int choice;
	     cin>>choice;
         cout<<"\n";

	     switch(choice)
	     {
	         case 1:

                lst->whichtype();
	            break;

             case 2:

		        lst->itemsdisplay();
	            break;

	         case 3:

		        total=lst->orderdisplay();
                break;

	         case 4:

			    cout<<person;
			    cout<<"          PAYMENT:\n                 1.CASH\n                 2.CARD\n"; cout<<"          ";
			    cin>>pay;
			    cout<<"          RATINGS(1-5) : ";
			    cin>>person.rating;
			    for(int i=0;i<person.rating;i++)
                {
				    cout<<"     *\t\t";
			    }
		        break;

	         default:
		        cout<<"\n          Wrong input\n";
		        break;
        }
		cout<<"\n          Want to go back to MAIN PAGE?(y/Y)\n";
		cout<<"          ";
		cin>>ch;
	}
	while(ch == 'y' || ch == 'Y');
	cout<<"\n\n\n";
    cout<<"                                 *******************************THANK YOU**************************************\n";

    cout<<"                                 *********Feeling HUNGRY ? Call or Walk-In FOODIE GOODIE KITCHEN***************\n\n";

}
