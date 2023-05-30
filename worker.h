#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class timeDuration
{
public:
    virtual void f(){}
    template <typename T>  //template
    int time(T nam)
    {
        int t,flag=0;
        string a;
        ifstream fin;
        fin.open("workerData.txt",ios::in);
        while(fin>>a>>t)
        {
            if(a==nam)
            {
                fin.close();
                flag=1;
                return t;
            }

        }
        fin.close();
        try                              //exception handling.
        {
            throw flag;

        }

        catch(int k)
        {
            if(k==0)
            {
                cout<<"No name found\n";
                return 0;

            }
        }
        catch(string d)
        {
            cout<<"code mismatch\n";
        }

    }

};
class worker:public timeDuration
{
public:
    void f(){}
    string nam;
    int t;
    worker()
    {
        cout<<"Enter your name"<<endl;
        cin>>nam;
        t=time(nam);
    }
    friend ostream& operator<<(ostream &out,worker &o)
    {
        out<<"Name: "<<o.nam<<"\n"<<"Your working time is "<<o.t<<" hours"<<endl;
        out<<"Your salary is "<<(o.t*100)<<" taka"<<endl;
    }
};
void workar()
{
    worker o,*derived_p;
    cout<<o;
    timeDuration d,*base_p;
    derived_p = dynamic_cast<worker *> (&d);   //dynmic cast
    if(derived_p) cout<<"1";
    else cout<<"0";

}
