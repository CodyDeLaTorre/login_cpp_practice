#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forgot();

int main(){

    int c;
    cout<<"\t\t\t__________________________________________________\n\n\n";
    cout<<"\t\t\t         Welcome to the Login Page                \n\n\n";
    cout<<"\t\t\t______________    MENU   _________________________\n\n\n";
    cout<<"                                                          \n\n";
    cout<<"\t| Press 1 to Login           |"<<endl;
    cout<<"\t| Press 2 to Register           |"<<endl;
    cout<<"\t| Press 3 if you Forgot Your Password           |"<<endl;
    cout<<"\t| Press 4 to Exit           |"<<endl;
    cout<<"\n\n\n\t Please enter your choice! ";
    cin>>c;
    cout<<endl;

    switch(c)
    {
        case 1:
            login();
            break;
        case 2:
            registration();
            break;
        case 3:
            forgot();
            break;
        case 4:
            cout<<"\t\t\t Thanks! \n\n";
            break;
        default:
            system("cls");
            cout<<"\t\t\t Please select from the options given above \n"<<endl;
            main();
    }

    void login()
    {
        int count;
        string userID, password, id, pass;
        system("cls");
        cout<<"\t\t\t Please enter the username and password: "<<endl;
        cout<<"\t\t\t USERNAME ";
        cin>>userID;
        cout<<"\t\t\t PASSWORD ";
        cin>>"password";

        ifstream input("records.txt");
        
        while(input>>id>>pass)

    }



}
