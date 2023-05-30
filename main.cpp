#include <iostream>
#include<string>
#include "product.h"
#include "worker.h"
#include "owner.h"
#include "customer.h"
using namespace std;
void log_reg(int i)
{
    string s;
    if(i==1)
    {
        cout<<"Enter Password:"<<endl;
        cin>>s;
        if(s.length()==4) ownar();
        else
        {
            cout<<"wrong Password"<<endl;
            log_reg(i);
        }
    }

    else if(i==2)
    {
        cout<<"Enter Password:"<<endl;
        cin>>s;
        if(s.length()==5) workar();
        else
        {
            cout<<"wrong Password"<<endl;
            log_reg(i);
        }
    }
    else if(i==3)
    {
        cout<<"Enter Password:"<<endl;
        cin>>s;
        if(s.length()==6) produt();
        else
        {
            cout<<"wrong Password"<<endl;
            log_reg(i);
        }
    }
    else if(i==4)
    {
        cout<<"Enter Password:"<<endl;
        cin>>s;
        if(s.length()==7) customar();
        else
        {
            cout<<"wrong Password"<<endl;
            log_reg(i);
        }
    }
    else return;
}

using namespace std;

int main()
{
    cout<<"\n\n\n\t\t\tWelcome To Luise Vitton Germents Ltd.\t\n";
    cout<<"\t\t\tItaly, France.\t\n";
    cout<<"Enter Your Choise:\n";
    cout<<" 1 . Owner\n 2 . Worker\n 3 . Product\n 4 . Customer\n";
    int i;
    cin>>i;
    log_reg(i);
    return 0;
}
