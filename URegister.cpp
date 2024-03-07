#include <iostream>
#include <fstream>
#include <string>
//#include "Quiz.cpp"
using namespace std;

bool LoggedIn(){
    int count;
    string userName,Password,uName,pass;
    cout<<"Enter UserName"<<endl;
    cin>>userName;
    cout<<"Enter Password"<<endl;
    cin>>Password;
    ifstream input("User.txt");
    // getline(read,uName);
    // getline(read,pass);
    while(input>>uName>>pass){
    if(uName==userName && pass==Password){
        count=1;
    }
    }
        // while(getline(input,uName) && getline(input,pass)){
        //     if(uName==userName && pass==Password){
        //         count=1;
        //         break;
        //     }
        // }
        // input.close();
    
    if(count==1){
        return true;
    }else{
        return false;
    }
}

class UserRegister{
    public:
    UserRegister(){
    int choice;
    cin>>choice;
    if(choice==1){
        string userName,Password,uName,pass;
        cout<<"Enter UserName"<<endl;
        cin>>userName;
        cout<<"Enter Password"<<endl;
        cin>>Password;
        ofstream file;
        file.open("User.txt",ios::app);
        ifstream input("User.txt");
         while(input>>uName>>pass){ 
        file<<userName<<" "<<Password<<endl;
        file.close();
        cout<<"Registration Done Successfully"<<endl;
        break;
    
    }
    }
    else if(choice==2){
        bool flag = LoggedIn();
        if(!flag){
            cout<<"Login UnSuccessfull"<<endl;
        }else{
            cout<<"Login Successfull"<<endl;
            //Quiz Q1;
        }
    }
    }

};

int main(){

   UserRegister A1;
    return 0;
}