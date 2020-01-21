//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<string>
 
using namespace std;
int main(){
    string status;
    int age,height,money;
    cout << "How old are you: ";
    cin >> age;
    if(age <20){
        cout << "How tall are you: ";
        cin >> height;
        if (height<160)
        {
            status = "UNFRIEND";
        }else if(height <175)
        {
            status = "FRIEND";
        }else{
            cout <<"How much money do you have: ";
            cin >> money;
            if(money>69000000){
                status = "MARRIED";
            }else{
                status = "ONE-NIGHT-STAND";
            }
        }

}    else if(age<30){
        cout <<"How much money do you have: ";
        cin >>money;
        if(money >10000000){
            status ="BESTFRIEND";
        }else
        {status = "UNFRIEND";
        }
    }else{status = "UNFRIEND";
        }
        cout << status;

}   

