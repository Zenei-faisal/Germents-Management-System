#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class detail
{
public:
    inline int buy(int a,int b,string c)  //inline function
    {

        switch(a)
        {
        case 1:
        {
            int t,flag=0;
            string a;
            ifstream fin;
            fin.open("shirt.txt",ios::in);
            while(fin>>a>>t)
            {
                if(a==c)
                {
                    fin.close();
                    flag=1;
                    break;
                }

            }
            fin.close();
            if(flag==0)
            {
                cout<<"No item found\n";
                break;
            }

            cout<<"Your purchase is\nMale Shirt "<<a<<"\n"<<b<<" pices\n"<<(b*t)<<" taka"<<endl;
            ofstream fout;
            fout.open("sellDetail.txt",ios::app);
            fout<<"Male Shirt "<<a<<" "<<b<<" pices"<<endl;
            fout<<(b*t)<<endl;
            fout.close();
            break;
        }

        case 2:
        {
            int t,flag=0;
            string a;
            ifstream fin;
            fin.open("pants.txt",ios::in);
            while(fin>>a>>t)
            {
                if(a==c)
                {
                    fin.close();
                    flag=1;
                    break;
                }

            }
            fin.close();
            if(flag==0)
            {
                cout<<"No item found\n";
                break;
            }

            cout<<"Your purchase is\nMale Pants "<<a<<"\n"<<b<<" pices\n"<<(b*t)<<" taka"<<endl;
            ofstream fout;
            fout.open("sellDetail.txt",ios::app);
            fout<<"Male Pants "<<a<<" "<<b<<" pices"<<endl;
            fout<<(b*t)<<endl;
            fout.close();
            break;

        }
        case 3:
        {
            int t,flag=0;
            string a;
            ifstream fin;
            fin.open("saree.txt",ios::in);
            while(fin>>a>>t)
            {
                if(a==c)
                {
                    fin.close();
                    flag=1;
                    break;
                }

            }
            fin.close();
            if(flag==0)
            {
                cout<<"No item found\n";
                break;
            }

            cout<<"Your purchase is\nFemale Saree "<<a<<"\n"<<b<<" pices\n"<<(b*t)<<" taka"<<endl;
            ofstream fout;
            fout.open("sellDetail.txt",ios::app);
            fout<<"Feamale Saree "<<a<<" "<<b<<" pices"<<endl;
            fout<<(b*t)<<endl;
            fout.close();
            break;

        }
        case 4:
        {
            int t,flag=0;
            string a;
            ifstream fin;
            fin.open("threepiecs.txt",ios::in);
            while(fin>>a>>t)
            {
                if(a==c)
                {
                    fin.close();
                    flag=1;
                    break;
                }

            }
            fin.close();
            if(flag==0)
            {
                cout<<"No item found\n";
                break;
            }

            cout<<"Your purchase is\nFemale Threepieces "<<c<<"\n"<<b<<" pices\n"<<(b*t)<<" taka"<<endl;
            ofstream fout;
            fout.open("sellDetail.txt",ios::app);
            fout<<"Female Threepieces "<<c<<" "<<b<<" pices"<<endl;
            fout<<(b*t)<<endl;
            fout.close();
            break;

        }
        }


    }

};

class customer:public detail
{
public:
    int i,j;
    string p;
    friend istream& operator>>(istream &in,customer &o)  //operator overloading
    {
        cout<<"Enter your selection\n";
        cout<<"1. Male Shirt\n2. Male Pants\n3. Female Saree\n4. Female Threepices\n";
        cin>>o.i;

    }
    friend ostream& operator<<(ostream &out,customer &o)   //operator overloading
    {
        if(o.i==1)
        {
            int t;
            string a;
            ifstream fin;
            fin.open("shirt.txt");
            while(fin>>a)
            {
                cout<<a<<endl;
                fin>>t;
                cout<<t<<" taka\n";
            }
            fin.close();
        }
        if(o.i==2)
        {
            int t;
            string a;
            ifstream fin;
            fin.open("pants.txt");
            while(fin>>a)
            {
                cout<<a<<endl;
                fin>>t;
                cout<<t<<" taka\n";
            }
            fin.close();
        }
        if(o.i==3)
        {
            int t;
            string a;
            ifstream fin;
            fin.open("saree.txt");
            while(fin>>a)
            {
                cout<<a<<endl;
                fin>>t;
                cout<<t<<" taka\n";
            }
            fin.close();
        }
        if(o.i==4)
        {
            int t;
            string a;
            ifstream fin;
            fin.open("threepiece.txt");
            while(fin>>a)
            {
                cout<<a<<endl;
                fin>>t;
                cout<<t<<" taka\n";
            }
            fin.close();
        }


        cout<<"Which item you want and how much";
        cin>>o.p>>o.j;


    }


};

void customar()
{
    customer c;
    cout<<"Welcome  Luise Vitton Germents Ltd.\n";
    cout<<"What survice do you want.\n";
    cout<<" 1. View Product \n 2. Buy Product \n";
    int i;
    cin>>i;
    if(i==1) produt();
    else if(i==2)
    {
        cin>>c;
        cout<<c;
    }
    c.buy(c.i,c.j,c.p);
    cout<<"1. Again buy\n2. Exit.\n";
    cin>>i;
    while(i==1)
    {
        cin>>c;
        cout<<c;
        c.buy(c.i,c.j,c.p);
        cout<<"1. Again buy\n2. Exit.\n";
        cin>>i;
    }
}
