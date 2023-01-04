#include<iostream>  
#include<cstdlib>  
#include<ctime>  
using namespace std;  
int main(){  
  int choice=0;  
  int tries=0;  
  tries++;  
  cout<<"You're a 16 year old kid looking to join a Football academy"<<endl<<endl;  
  cout<<"Choose a number between 1-10 to be in an academy, and we'll choose for you"<<endl<<endl;  

  cout<<left;  
  cout<<"fc Barcelona"<<endl;  
  cout<<"fc Bayern munich"<<endl;  
  cout<<"Fc chelsea"<<endl;  
  cout<<"Manchester United"<<endl;  
   cout<<"manchester city"<<endl;  
   cout<<"RealMadrid"<<endl;  
   cout<<"Ac milan"<<endl;  
   cout<<"inter Milan"<<endl;  
   cout<<"Liverpool"<<endl;  
   cout<<"fc leipzig"<<endl<<endl;  

   cout<<endl;

  while (choice <= 10 && tries<2){  
     cout<<"Select your Choice"<<endl;  
    cout<<"Remember, you only have one try"<<endl;  

     cin >> choice;
     tries++;



     if( choice==1){
       cout<<"You will sign for Chelsea Fc"<<endl;
     }
     else if(choice== 2){
       cout<<"You will sign for leipzig"<<endl;
     }
      else if(choice== 3){
      cout<<"You will sign for Fc barcelona"<<endl;
     }
     else if(choice== 4){
      cout<<"You will sign for Realmadrid"<<endl;
     }
     else if(choice== 5){
      cout<<"You will sign for Bayern munich"<<endl;
     }

      else if(choice== 6){
      cout<<"You will sign for Liverpool"<<endl;
      }

      else if(choice== 7){
      cout<<"You will sign for Manchester City"<<endl;
      }

      else if(choice== 8){
      cout<<" You will sign for Inter Milan"<<endl;
      }

      else if(choice== 9){
      cout<<" You will sign for Manchester united"<<endl;
      }
      else if(choice==10){
        cout<<"You will sign for Ac Milan"<<endl;
      }
  }


 return 0;

}

