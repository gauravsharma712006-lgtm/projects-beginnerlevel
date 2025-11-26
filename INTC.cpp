
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

string b1 = "SHASWAT DWIVEDI";
string b2 = "ADITYA YADAV";
string bow = "GAURAV SHARMA";
string temp;
int r = 0;
int w = 0;
int b = 0;
int o = 0;

void GI();

void SI()
{
    cout << "b1-" << b1 << "   BOWLER-" << bow << "   " << endl
         << "b2-" << b2 << "  " << endl;
    cout << r << "/" << w << "  " << b << "/" << o << endl;
    GI();
}

void GI()
{
    int x;
    cin >> x;

    if (x == 1 || x == 3)
    {
        temp = b1;
        
        b1 = b2;
        b2 = temp;
    }

    if (x >= 0 && x <= 6)
    {

        r = r + x;
        b++;
        if (b == 6)
        {
            b = 0;
            o++;
            temp = b1;
            ;
            b1 = b2;
            b2 = temp;

            SI();

            cout << "enter name of new bowler" << endl;
            cin >> bow;
        }
    }
    else if (x == -1)
    {
        w++;
        b++;
        if (w == 10)
        {
            cout << "MATCH OVER  !!!!" << endl;
            return;
        }
        cout << "ENTER NAME OF BATSMAN" << endl;
        cin >> b1;

         if (b == 6)
        {
            b = 0;
            o++;
            temp = b1;
            ;
            b1 = b2;
            b2 = temp;

            SI();

            cout << "enter name of new bowler" << endl;
            cin >> bow;
        }
    }
    else if (x == -2)
    {
        w++;
        b++;
        if (w == 10)
        {
            cout << "MATCH OVER  !!!!" << endl;
            return;
        }
        cout << "ENTER NAME OF BATSMAN" << endl;
        cin >> b2;

         if (b == 6)
        {
            b = 0;
            o++;
            temp = b1;
            ;
            b1 = b2;
            b2 = temp;

            SI();

            cout << "enter name of new bowler" << endl;
            cin >> bow;
        }
    }
    // else if (x == -999)
    // {
    //     r++;
    // }

    if(x==-9){
        r++;
    }

    if(x==-99){
        cout<<"NO BALL----->>>>>NEXT BALL IS FREE HIT"<<endl;
        cout<<"ENTER RUN IN NO BALL "<<endl;
        int nb;
        cin>>nb;

        r=r+nb;
        SI();
        cin>>nb;
        if (nb == 1 || nb == 3)
    {
        temp = b1;
        
        b1 = b2;
        b2 = temp;
    }
         r=r+nb;
          SI();


        

    }

    SI();
}

int main()
{

    GI();

    return 0;
}
