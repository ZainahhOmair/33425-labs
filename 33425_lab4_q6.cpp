#include<iostream>
using namespace std;
int main(){
char coftype; 
char d; 
char m; 
int totaltime=0; 
cout<<"Enter W for White Coffee or B for Black Coffee"<<endl;
cin>>coftype;
cout<<"Do you want double size cup? (y/n)"<<endl;
cin>>d;
cout<<"Is the coffee manual? (y/n)"<<endl;
cin>>m;

if(coftype=='W' || coftype=='w'){
cout<<"Put Water 15 minutes"<<endl;
totaltime=totaltime+15;
cout<<"Add Sugar 15 minutes"<<endl;
totaltime=totaltime+15;
cout<<"Mix Well 20 minutes"<<endl;
totaltime=totaltime+20;
cout<<"Add Coffee 2 minutes"<<endl;
totaltime=totaltime+2;
cout<<"Add Milk 4 minutes"<<endl;
totaltime=totaltime+4;
cout<<"Mix Well 20 minutes"<<endl;
totaltime=totaltime+20;
}
else if(coftype=='B' || coftype=='b'){
cout<<"Put Water 20 minutes"<<endl;
totaltime=totaltime+20;
cout<<"Add Sugar 20 minutes"<<endl;
totaltime=totaltime+20;
cout<<"Mix Well 25 minutes"<<endl;
totaltime=totaltime+25;
cout<<"Add Coffee 15 minutes"<<endl;
totaltime=totaltime+15;
cout<<"Mix Well 25 minutes"<<endl;
totaltime=totaltime+25;
}

if(d=='y' || d=='Y'){
totaltime=totaltime+totaltime/2;
}

cout<<"Total time is "<<totaltime<<" minutes"<<endl;

if(m=='y' || m=='Y'){
cout<<"Manual mode selected"<<endl;
}
else{
cout<<"Automatic mode selected"<<endl;
}
}