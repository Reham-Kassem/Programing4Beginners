#include<iostream>
using namespace std;

int main() {

    int num;
    cin >> num;
    int numOfYears= num/360;
    cout<<numOfYears<<" Years"<<"\n";
    int remain = num -(numOfYears*360);
    int months = remain/30;
    cout<<months<<" Months"<<"\n";
    int days = remain-(months*30);
    cout<<days<<" Days\n";


    return 0;
}
