#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double ad, mu, di, a, b, c;
    cout<<"Input 3 numbers a, b, c: ";
    cin>>a>>b>>c;
    ad = a + b;
    mu = b * c;
    di = a / c;
    cout<<"Answers are: "<<ad<<" "<<mu<<" "<<di;


    return(0);
}