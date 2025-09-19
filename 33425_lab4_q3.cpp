#include <iostream>
#include<string>
using namespace std;
//display perc of cal that come from fat
//if fatcal is less that 30 per of total cal then display msg
//calculate calories from fat and compare with total cal
//using the cal from fat use the ither formula to find calfat
//make sure cals and fatgrams are not less that 0
int main(){
int calories;
int fatper;
int calfat;
int fatgr;
cout<<"enter the number of calories in food";
cin>> calories;
cout<<"enter the number of fatgrams in food";
cin>> fatgr;
if (calories != 0 && fatgr != 0){
    calfat = fatgr * 9;
    if (calfat <= calories){
        fatper = calfat/calories * 100;
        if ( calfat < 0.3 * calories){
            cout<<"your food is less in calories";
    }
        
    }else {
        cout<<"calories or fatgrams are entered incorrectly";
    }
}else{
    cout<<"calores or fat cannot be zero.";
}
    
}