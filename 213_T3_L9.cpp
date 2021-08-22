#include<iostream>
#include<string>

using namespace std;

class furniture
{
    int reg_price,dis_price;
    string material;
    string productName;
public:
    void set_info()
    {
        cout<<"Enter regular price: ";
        cin>>reg_price;
        cout<<"Enter discounted price: ";
        cin>>dis_price;
        cout<<"Enter material: ";
        cin>>material;
    }
    void get_info()
    {
        cout<<"Regular price: "<<reg_price<<endl;
        cout<<"Discounted price: "<<dis_price<<endl;
        cout<<"Material: "<<material<<endl;
    }
    void set_name()
    {
        cout<<"Name of product: ";
        cin>>productName;
    }
    string get_name()
    {
        return productName;
    }
};

class bed: public furniture
{
    string bedSize;
public:
    void set_bed()
    {
        cout<<"Enter information of bed:\n";
        set_info();
        cout<<"Enter Bed Size: ";
        cin>>bedSize;
    }
    void productDetails()
    {
        get_info();
        cout<<"Bed Size: "<<bedSize<<endl;
        cout<<"Bed name: "<<get_name()<<endl;
    }
    void set_name()
    {
        furniture::set_name();
    }
    string get_name()
    {
        return furniture::get_name();
    }
};

class sofa: public furniture
{
    int seatNum;
public:
    void set_sofa()
    {
        cout<<"Enter information of sofa:\n";
        set_info();
        cout<<"Enter Seat number: ";
        cin>>seatNum;
    }
    void productDetails()
    {
        cout<<"Sofa name: "<<get_name()<<endl;
        get_info();
        cout<<"Seat number: "<<seatNum<<endl;
    }
    void set_name()
    {
        furniture::set_name();
    }
    string get_name()
    {
        return furniture::get_name();
    }
};

class dinningTable: public furniture
{
    int chairCount;
public:
    void set_table()
    {
        cout<<"Enter information of Dinning table:\n";
        set_info();
        cout<<"Enter chair count: ";
        cin>>chairCount;
    }
    void productDetails()
    {
        cout<<"Table name: "<<get_name()<<endl;
        get_info();
        cout<<"chair count: "<<chairCount<<endl;
    }
    void set_name()
    {
        furniture::set_name();
    }
    string get_name()
    {
        return furniture::get_name();
    }
};

int main()
{
    bed a;
    sofa b;
    dinningTable c;

    a.set_bed();
    a.set_name();
    a.productDetails();
    //cout<<a.get_name()<<endl;
    cout<<endl;

    b.set_sofa();
    b.set_name();
    b.productDetails();
    //cout<<b.get_name()<<endl;
    cout<<endl;

    c.set_table();
    c.set_name();
    c.productDetails();
    //cout<<c.get_name()<<endl;
    cout<<endl;

}
