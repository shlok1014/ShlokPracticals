#include<iostream>
using namespace std;

class tata {

private:

string modale;
string fuel_type;
double price;
double milage;
string transmission;
double tank_capacity;
int no_seats;
bool airBag;


public:

void get_data(){

 cout << "Enter Model Name : ";
 cin >> modale;

 cout << "Enter Type of Fuel : ";
 cin >> fuel_type;

 cout << "Enter Price of Car : ";
 cin >> price;

 cout << "Enter milage of Car : ";
 cin >> milage;

 cout << "Enter Transmission of Car : ";
 cin >> transmission;

 cout << "Enter Capacity of Tank : ";
 cin >> tank_capacity;

 cout << "Enter No. of sit in Car : ";
 cin >> no_seats;

 cout << "If airbag is Available press '1' Otherwise '0' : ";
 cin >> airBag;

 cout << endl<<endl;
}

void model_option(){


cout << modale;


}

};



int main(){

int n;
cout << "Enter No. of Cars : ";
cin >> n;
tata car[n];


for(int i=0; i<n; i++){

cout << endl;

cout << "Enter Details of Car " <<i+1<<endl<<endl; 

car[i].get_data();

}

cout << "Get The Car details Accordingly your Preference:"<<endl<<endl;
cout << "(1) Model Name  (2) Fuel Type  (3) Price Range" << endl<<endl;
int option;
cout << "Enter your Option : ";
cin >> option;
cout << endl;

switch (option)
{
case 1:

for(int i=0; i<n; i++){

cout <<"(" << i+1 << ") "; car[i].model_option(); cout  << "  ";

}
break;


}


}