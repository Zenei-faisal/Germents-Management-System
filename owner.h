#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class setValue
{
public:
    setValue(int i)  //constructor
    {
        cout<<"Which file do you add data\n";
        cout<<"1. Worker\n2. Shirt\n3. Pants\n4. Saree\n5. Threepiece\n";
        cin>>i;
        if(i==1)
        {
            string z;
            cout<<"Give name(identity)\n";
            cin>>z;
            cout<<"Give Value"<<endl;
            cin>>i;

            ofstream fout;                         //File handling
            fout.open("workerData.txt",ios::app);
            fout<<z<<endl;
            fout<<i<<endl;
            fout.close();
            cout<<"add data successfully"<<endl;
        }

        if(i==2)
        {
            string z;
            cout<<"Give name(identity)\n";
            cin>>z;
            cout<<"Give Value"<<endl;
            cin>>i;

            ofstream fout;
            fout.open("shirt.txt",ios::app);
            fout<<z<<endl;
            fout<<i<<endl;
            fout.close();
            cout<<"add data successfully"<<endl;
        }

        if(i==3)
        {
            string z;
            cout<<"Give name(identity)\n";
            cin>>z;
            cout<<"Give Value"<<endl;
            cin>>i;

            ofstream fout;
            fout.open("pants.txt",ios::app);
            fout<<z<<endl;
            fout<<i<<endl;
            fout.close();
            cout<<"add data successfully"<<endl;
        }

        if(i==4)
        {
            string z;
            cout<<"Give name(identity)\n";
            cin>>z;
            cout<<"Give Value"<<endl;
            cin>>i;

            ofstream fout;
            fout.open("saree.txt",ios::app);
            fout<<z<<endl;
            fout<<i<<endl;
            fout.close();
            cout<<"add data successfully"<<endl;
        }

        if(i==5)
        {
            string z;
            cout<<"Give name(identity)\n";
            cin>>z;
            cout<<"Give Value"<<endl;
            cin>>i;

            ofstream fout;
            fout.open("threepiece.txt",ios::app);
            fout<<z<<endl;
            fout<<i<<endl;
            fout.close();
            cout<<"add data successfully"<<endl;
        }
    }
};






class workerdetail
{
public:
    int workerdet()
    {
        int i=0,t;
        string a;
        ifstream fin;
        fin.open("workerData.txt",ios::in);
        while(fin>>a)
        {
            cout<<a<<endl;
            fin>>t;
            cout<<t<<" hour\n";
            i+=t;
        }
        fin.close();
        return i;
    }
};

class selldetail
{
public:
    int selldet()
    {
        int j=0,t;
        string a;
        ifstream fin;
        fin.open("sellDetail.txt",ios::in);
        while(getline(fin,a))
        {
            cout<<a<<endl;
            fin>>t;
            getline(fin,a);
            cout<<t<<" taka\n";
            j+=t;
        }
        fin.close();
        return j;

    }
};

class owner:public workerdetail,public selldetail  //inhreitance.
{
public:
    owner()
    {
        cout<<"Which Data Do You Want\n";
        cout<<"1. Worker Data\n2. Sell Data\n3. Total Income\n";
        int t;
        cin>>t;
        if(t==1)
        {
            int i=workerdet();
            cout<<"Your worker total salary is "<<(i*100)<<" taka\n";
        }
        else if(t==2)
        {
            int j=selldet();
            cout<<"Your total  product sell is "<<j<<" taka\n";
        }
        else if(t=3)
        {
            cout<<"\tSell_Detail:\n";
            int j=selldet();
            cout<<"\tWorker_Data:\n";
            int i=workerdet();
            cout<<"Your total  product sell is "<<j<<" taka\n";
            cout<<"Your worker total salary is "<<(i*100)<<" taka\n";
            cout<<"Your total  Income is "<<(j-(i*100))<<" taka\n";
        }

    }


};

void ownar()
{
    int x;
    do
    {

        cout<<"Which work do you want"<<endl;
        cout<<"1. Set data\n2. Get data\n3. Exit"<<endl;
        cin>>x;
        if(x==1)  setValue v(x);
        else if(x==2)
            owner o;
    }
    while(x==1||x==2);
}
