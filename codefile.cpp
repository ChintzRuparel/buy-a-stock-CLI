#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    int quantity;
    float upperrange;
    float lowerrange;
    string exchange;
    string name;
    float execprice;
    int jack;
    float totalinv;


     time_t tt;


    struct tm * ti;

    time (&tt);

    ti = localtime(&tt);

    cout << "                                                                                             "
         << asctime(ti);



    cout<<"Enter exchange name \n";




    cin>>exchange;
    cout<<"Enter name of the company \n";
    cin>>name;

    cout<<"Kindly provide the range of +5 or -5\n";

    cout<<"Enter upper range \n";
    cin>>upperrange;

    cout<<"Enter lower range \n";
    cin>>lowerrange;

    cout<<"Quantity of Shares \n";
    cin>>quantity;




    execprice=upperrange+lowerrange;

    execprice=execprice/2;

    cout<<"################################# \n";
    cout<<" \n Order Summary \n";
    cout<<" \n Name of exchange:  "<<exchange;
    cout<<" \n Name: "<<name;
    cout<<" \n order execution price:"<<execprice;

    totalinv=jack*execprice;

    cout<<" \n Total Investment:"<<totalinv;





    cout<<" \n ################################# \n";







}