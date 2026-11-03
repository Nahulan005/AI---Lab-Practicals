#include <iostream>
using namespace std;

int main() {
    int n ; // no . of stdts 
    double marks;
    double sum=0;
    cout<<"enter no of stdts: " ;
    cin >> n;
   

    for(int i=0; i<n ; i++){
        cout<<"enter marks: " ;
        cin>>marks;
        sum+=marks;

    }

    double avg = static_cast<double> (sum) /n ;
    cout<<"Average of class " << avg << "\n";
    
    return 0;
}