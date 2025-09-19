#include<iostream>
using namespace std;
//n < 5.0 Little or no Damage
//5.0 ó n < 5.5 Some damage
//5.5 ó n < 6.5 Serious damage: walls may crack or fall
//6.5 ó n < 7.5 Disaster: House and Buildings may collapse
//higher Catastrophe: most buildings destroyed

int main(){
    double n;
    cout<<"enter the ritcher scale number of the earthquake";
    cin>>n;
    if( n < 5.0){
        cout<<"little or no damage";
    }else if (n >=5.0 && n < 5.5){
        cout<<"there is some damage";
    }else if (n >= 5.5 && n < 6.5){
        cout<<"serious damage : walls may crack";
    }else if ( n >= 6.5 && n < 7.5){
        cout<<"disaster: houses and buildungs may collapse";
    }else {
        cout<<"most buildings destroyed";
    }
    
}