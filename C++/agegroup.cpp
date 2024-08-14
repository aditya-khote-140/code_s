#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Age : ";
    int age;
    
    cin>>age;
    if(age < 5){
        cout<<"You enter "+ to_string(age)+" Year so you are Baby ::-"<<endl;
    }
    else if(age<= 12){
        cout<<"You enter "+to_string(age)+" Year so you are Child ::-"<<endl;  
    }
    else if(age > 12 && age <= 18){
        cout<<"You enter "+to_string(age)+" Year so you are Teenager ::-"<<endl;
    }
    else if(age < 60){
        cout<<"You enter "+to_string(age)+"Year so you are Adult ::-"<<endl;
    }
    else {
        cout<<"You enter "+to_string(age)+" Year so you are Seniour  "<<endl;
    }
    
    return 0;
}