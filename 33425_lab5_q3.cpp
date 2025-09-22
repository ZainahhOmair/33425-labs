#include <iostream>
#include <iostream>
using namespace std;
int main(){
    int totalseats = 500;
    int soldticks = 0;
    int tickets = 0;
    int choice;
    int sophos, juniors;
    double price;
    double income = 0;

    while(true){
        
        cout<<"1. Purchase Ticket"<<endl;
        cout<<"2. Display Information"<<endl;
        cout<<"3. Exit"<<endl;
        
        cout<<"Enter your Choice Please -: ";
        cin>>choice;

        if (choice == 3){
            break;
        }else if(choice == 2){
            cout<<"Free seats: "<<totalseats<<" Income: "<<income<<endl;
        }else if(choice == 1){
            
            cout<<"How many tickets would you like to buy? ";
            cin>>tickets;

            if(tickets <= totalseats){
                cout<<"How many Sopho? ";
                cin>>sophos;
                cout<<"How many Juniors? ";
                cin>>juniors;

                if(sophos + juniors != tickets){
                    cout<<"Error: total must match entered tickets!"<<endl;
                } else {
                    price = sophos*100 + juniors*50;

                    if(tickets > 3){
                        price = 0.8 * price;  
                    }

                    cout<<"Price is: "<<price<<endl;

                    totalseats = totalseats - tickets;
                    soldticks = soldticks + tickets;
                    income = income + price;
                }
            }else{
                cout<<"Sorry, the available seats are "<<totalseats<<endl;
            }
        }
        cout<<endl;
    }
}
