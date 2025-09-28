
#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter an amount in figures: "<<endl;
    cin>>n;
    while(n<-999999 || n>999999){
        cout<<"Number out of range"<<endl;
        cin>>n;
    }
    if(n==0){
        cout<<"zero"<<endl;
        return 0;
    }
    if(n<0){
        cout<<"negative ";
        n=-n;
    }
    if(n>=-999999 || n<=999999){
        if(n>=100000){
            int hundredt=n/100000;
            switch (hundredt){
                case 1:
                    cout<<"one hundred ";
                    break;
                case 2:
                    cout<<"two hundred ";
                    break;
                case 3:
                    cout<<"three hundred ";
                    break;
                case 4:
                    cout<<"four hundred ";
                    break;
                case 5:
                    cout<<"five hundred ";
                    break;
                case 6:
                    cout<<"six hundred ";
                    break;
                case 7:
                    cout<<"seven hundred ";
                    break;
                case 8:
                    cout<<"eight hundred ";
                    break;
                case 9:
                    cout<<"nine hundred ";
                    break;
            }
            n=n-(hundredt*100000);
        }
        if(n>=10000){
            int tent=n/10000;
            switch (tent){
            case 2:
                cout<<"twenty ";
                break;
            case 3:
                cout<<"thirty ";
                break;
            case 4:
                cout<<"forty ";
                break;
            case 5:
                cout<<"fifty ";
                break;
            case 6:
                cout<<"sixty ";
                break;
            case 7:
                cout<<"seventy ";
                break;
            case 8:
                cout<<"eighty ";
                break;
            case 9:
                cout<<"ninety ";
                break;
            }
            n=n-(tent*10000);
        }
        if(n>=1000){
            int thousand=n/1000;
            switch (thousand){
            case 1:
                cout<<"one thousand ";
                break;
            case 2:
                cout<<"two thousand ";
                break;
            case 3:
                cout<<"three thousand ";
                break;
            case 4:
                cout<<"four thousand ";
                break;
            case 5:
                cout<<"five thousand ";
                break;
            case 6:
                cout<<"six thousand ";
                break;
            case 7:
                cout<<"seven thousand ";
                break;
            case 8:
                cout<<"eight thousand ";
                break;
            case 9:
                cout<<"nine thousand ";
                break;
            }
            n=n-(thousand*1000);
        }
        if(n>=100){
            int hundred=n/100;
            switch (hundred){
            case 1:
                cout<<"one hundred ";
                break;
            case 2:
                cout<<"two hundred ";
                break;
            case 3:
                cout<<"three hundred ";
                break;
            case 4:
                cout<<"four hundred ";
                break;
            case 5:
                cout<<"five hundred ";
                break;
            case 6:
                cout<<"six hundred ";
                break;
            case 7:
                cout<<"seven hundred ";
                break;
            case 8:
                cout<<"eight hundred ";
                break;
            case 9:
                cout<<"nine hundred ";
                break;
            }
            n=n-(hundred*100);
        }
        cout<<"and ";
        if(n>=20){
            int ten=n/10;
            switch (ten){
            case 2:
                cout<<"twenty ";
                break;
            case 3:
                cout<<"thirty ";
                break;
            case 4:
                cout<<"forty ";
                break;
            case 5:
                cout<<"fifty ";
                break;
            case 6:
                cout<<"sixty ";
                break;
            case 7:
                cout<<"seventy ";
                break;
            case 8:
                cout<<"eighty ";
                break;
            case 9:
                cout<<"ninety ";
                break;
            }
            n=n-(ten*10);
        }
        switch (n){
            case 0:
                cout<<" ";
                break;
            case 1:
                cout<<"one ";
                break;
            case 2:
                cout<<"two ";
                break;
            case 3:
                cout<<"three ";
                break;
            case 4:
                cout<<"four ";
                break;
            case 5:
                cout<<"five ";
                break;
            case 6:
                cout<<"six ";
                break;
            case 7:
                cout<<"seven ";
                break;
            case 8:
                cout<<"eight ";
                break;
            case 9:
                cout<<"nine ";
                break;
            case 10:
                cout<<"ten ";
                break;
            case 11:
                cout<<"eleven ";
                break;
            case 12:
                cout<<"twelve ";
                break;
            case 13:
                cout<<"thirteen ";
                break;
            case 14:
                cout<<"fourteen ";
                break;
            case 15:
                cout<<"fifteen ";
                break;
            case 16:
                cout<<"sixteen ";
                break;
            case 17:
                cout<<"seventeen ";
                break;
            case 18:
                cout<<"eighteen ";
                break;
            case 19:
                cout<<"nineteen ";
                break;
        }
    }
    
}
