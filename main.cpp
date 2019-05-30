#include <iostream>

using namespace std;
void Admin()
{
    int choice;
    cout<<"\n\n\n\n\t\t\t***************************************************************"<<endl;
    cout<<"\t\t\t***************************************************************"<<endl;
    cout << "\n\t\t\t\t\t\tSHOP MANAGEMENT SYSTEM" << endl;
    cout<< "\t\t\t\t\t\t1. Enter Sale" <<endl;
    cout<< "\t\t\t\t\t\t2. Stock" <<endl;
    cout<< "\t\t\t\t\t\t3. Sales" <<endl;
    cout<< "\t\t\t\t\t\t4. Employee details" <<endl;
    cout<< "\t\t\t\t\t\t5. Correct sales error" <<endl;
    cout<< "\t\t\t\t\t\t0. Exit" <<endl;
    cout<<"\n\t\t\t***************************************************************"<<endl;
    cout<<"\t\t\t***************************************************************"<<endl;
    cout<< "\n\t\t\tSelect your choice: ";
    cin>>choice;
}
void User(){
    int choice;
    cout<<"\n\n\n\n\t\t\t***************************************************************"<<endl;
    cout<<"\t\t\t***************************************************************"<<endl;
    cout << "\n\t\t\t\t\t\tSHOP MANAGEMENT SYSTEM" << endl;
    cout<< "\t\t\t\t\t\t1. Enter sale" <<endl;
    cout<< "\t\t\t\t\t\t2. Stock" <<endl;
    cout<< "\t\t\t\t\t\t9. Back" <<endl;
    cout<< "\t\t\t\t\t\t0. Exit" <<endl;
    cout<<"\n\t\t\t***************************************************************"<<endl;
    cout<<"\t\t\t***************************************************************"<<endl;
    cout<< "\n\t\t\tSelect your choice: ";
    cin>>choice;
}
void Exit()
{
    cout<<"You're exiting"<<endl;
}

void LogIn()
{
    int choice;
    cout<<"\n\n\n\n\t\t\t***************************************************************"<<endl;
    cout<<"\t\t\t***************************************************************"<<endl;
    cout << "\n\t\t\t\t\t\tSHOP MANAGEMENT SYSTEM" << endl;
    cout<< "\n\t\t\t\t\t\t1. Administrator" <<endl;
    cout<< "\t\t\t\t\t\t2. User" <<endl;
    cout<< "\t\t\t\t\t\t9. Back" <<endl;
    cout<< "\t\t\t\t\t\t0. Exit" <<endl;
    cout<<"\n\t\t\t***************************************************************"<<endl;
    cout<<"\t\t\t***************************************************************"<<endl;
    cout<< "\n\t\t\tSelect your choice: ";
    cin>>choice;
      switch(choice){
    case 1:
        Admin();
        break;
    case 2:
        User();
        break;
    case 9:
        cout<<"You're going back"<<endl;
    case 0:
        Exit();
        break;
    default:
        cout<<"Invalid Input"<<endl;
        break;
    }
}


int main()
{
    int choice;
    cout<<"\n\n\n\n\t\t\t***************************************************************"<<endl;
    cout<<"\t\t\t***************************************************************"<<endl;
    cout << "\n\t\t\t\t\tWELCOME TO THE SHOP MANAGEMENT SYSTEM" << endl;
    cout<< "\n\t\t\t\t\t\t1. Log In" <<endl;
    cout<< "\t\t\t\t\t\t0. Exit" <<endl;
    cout<<"\n\t\t\t***************************************************************"<<endl;
    cout<<"\t\t\t***************************************************************"<<endl;
    cout<< "\n\t\t\tSelect your choice: ";
    cin>>choice;
    switch(choice){
    case 1:
        LogIn();
        break;
    case 0:
        Exit();
        break;
    default:
        cout<<"Invalid Input"<<endl;
        break;
    }


    return 0;
}
