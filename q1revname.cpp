#include <iostream>
#include <string>
using namespace std;

int revname(){
    string fname;
    string lname;
    string name;
    cout<<"enter ur first name";
    cin>>fname;
    cout<<"enter ur last name";
    cin>>lname;
    string newname;
    name = fname + " " + lname;
    for (int i = name.length() -1; i >= 0; i--){
         newname = newname + name[i];

    }
    cout<<"reverse name:"<<endl<<newname;

}
int main(){
    revname();
    return 0;
}