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
    int getDP()
    {
        return dis_price;
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

void order(furniture** f1,furniture** f2)
{
    if ((*f1)->getDP() < (*f2)->getDP())
    {
        furniture* temp = *f1;
        *f1 = *f2;
        *f2 = temp;
    }
}

void sort_furniture_price(furniture** f,int n)
{
  for (int i=0; i<n-1; i++)
  {
    for (int j = i + 1; j<n; j++)
    {
      order(f+i, f+j);
    }
  }
}

int main()
{
  int n;
  cout<<"Please enter the number"<<endl;
  cin >> n;
  furniture* f[n];
  for (int i = 0; i < n; i++)
  {
    f[i] = new furniture;
    f[i]->set_info();
    cout << endl;
  }
  sort_furniture_price(f, n);
  cout << "The sorted array is: " <<endl;
  for (int i = 0; i < n; ++i)
  {
    cout << f[i]->getDP() << endl;
  }

  return 0;
}
