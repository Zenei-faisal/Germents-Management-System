#include <iostream>
#include <string>
#include <fstream>
using namespace std;


class shirt
{
public:
    string a;
    int t;
    s_choice()
    {
        ifstream fin;
        fin.open("shirt.txt",ios::in);
        while(fin>>a)
        {
            cout<<a<<endl;
            fin>>t;
            cout<<t<<" taka"<<endl;
            getline(fin,a);

        }
        fin.close();
    }
};

class pants
{
public:
    string a;
    int t;
    p_choice()
    {
        ifstream fin;
        fin.open("pants.txt",ios::in);
        while(fin>>a)
        {
            cout<<a<<endl;
            fin>>t;
            cout<<t<<" taka"<<endl;
            getline(fin,a);
        }
        fin.close();
    }

};

class male:public shirt, public pants
{
public:
    int i;
    int mal()
    {
        cout<<"Which accessory do you want"<<endl;
        cout<<" 1. Shirt\n"<<" 2. Pants"<<endl;
        cin>>i;
        if(i==1) s_choice();
        else if(i==2) p_choice();
        else return 0;
    }

};

class saree
{
public:
    string a;
    int t;
    s_choice()
    {
        ifstream fin;
        fin.open("saree.txt",ios::in);
        while(fin>>a)
        {
            cout<<a<<endl;
            fin>>t;
            cout<<t<<" taka"<<endl;
            getline(fin,a);
        }
        fin.close();
    }

};

class  threepiece
{
public:
    string a;
    int t;
    t_choice()
    {
        ifstream fin;
        fin.open("threepiece.txt",ios::in);
        while(fin>>a)
        {
            cout<<a<<endl;
            fin>>t;
            cout<<t<<" taka"<<endl;
            getline(fin,a);
        }
        fin.close();
    }

};

class female:public saree, public threepiece
{
public:
    int i;
    int femal()
    {
        cout<<"Which accessory do you want"<<endl;
        cout<<" 1. Saree\n"<<" 2. Threepiece"<<endl;
        cin>>i;
        if(i==1) s_choice();
        else if(i==2) t_choice();
        else return 0;
    }
};

class product:public male,public female
{
public:
    product(int i)
    {
        if(i==1) mal();
        else if(i==2)  femal();


    }
};


void produt()
{
    int i;
    do
    {

    cout<<"Which product do you want"<<endl;
    cout<<" 1. Male\n"<<" 2. female\n 3. Exit"<<endl;
    cin>>i;
    if(i==1||i==2) product p(i);

    }while(i==1||i==2);
}
