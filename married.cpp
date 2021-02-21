#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstNameSpouse1;
   string lastNameSpouse1;
   string firstNameSpouse2;
   string lastNameSpouse2;

   cout << "Spouse 1 First Name?" << endl;
   cin >> firstNameSpouse1;
   cout << "Spouse 1 Last Name?" << endl;
   cin >> lastNameSpouse1;

   cout << "Spouse 2 First Name?" << endl;
   cin >> firstNameSpouse2;
   cout << "Spouse 2 Last Name?" << endl;
   cin >> lastNameSpouse2;
      
   cout << "Married Names could be:" << endl;
   cout << firstNameSpouse1 << " " << lastNameSpouse1 << " and " << firstNameSpouse2 << " " << lastNameSpouse2 << endl;
   cout << firstNameSpouse1 << " and " << firstNameSpouse2 << " " << lastNameSpouse1 << endl;
   cout << firstNameSpouse1 << " and " << firstNameSpouse2 << " " << lastNameSpouse2 << endl;
   cout << firstNameSpouse1 << " " << lastNameSpouse1 << "-" << lastNameSpouse2 << endl;
   cout << firstNameSpouse2 << " " << lastNameSpouse2 << "-" << lastNameSpouse1 << endl; 
   

   return 0;
}