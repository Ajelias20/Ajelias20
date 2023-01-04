#include <iostream>
using namespace std;

int main() {

/*
If the year can be evenly divided by 4 then it is a leap year, however…
If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
If that year is evenly divisible by 400, then it is a leap year.

*/
  int y= 0;
  cout<<"Enter Year: ";
  cin>>y;
  if(y<1000 || y > 9999){
    cout<<"Invalid Entry"<<endl;
  }
  else if (y % 4 == 0 && y % 100 !=0 || y % 400 == 0){
    cout<<y;
    cout<<" Falls on a leap year."<<endl;
  }
  else {
    cout<<y;
    cout<<" is not a leap year."<<endl;
  }



}
