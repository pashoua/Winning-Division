#include <iostream>
#include <string>

using namespace std;

double getSales(string name){
    double sales = 0;
    cout<<"Please enter the quarterly sales figure for "<< name<<endl;
    cin>>sales;
    if (sales<=0){
        cout<<"Amount cannot be less than $0.00. Try again."<<endl;
        cin>>sales;
    }
    return sales;
}
void findHighest(double a, double b, double c, double d){
    double largest=0;
    if(a>b && a>c && a>d){
        largest = a;
        cout<<"NorthEast has the highest sales of $"<<largest<<endl;
    }
    else if(b>c && b>d){
        largest = b;
        cout<<"SouthEast has the highest sales of $"<<largest<<endl;
    }
    else if (c>d){
        largest = c;
        cout<<"NorthWest has the highest sales of $"<<largest<<endl;
    }
    else{
        largest = d;
        cout<<"SouthWest has the highest sales of $"<<largest<<endl;
    }
}
int main()
{

    double NEsales, SEsales, NWsales, SWsales;
    NEsales = getSales(string ("NorthEast"));
    SEsales = getSales(string ("SouthEast"));
    NWsales = getSales(string ("NorthWest"));
    SWsales = getSales(string ("SouthWest"));
    findHighest(NEsales, SEsales, NWsales, SWsales);
    return 0;
}

