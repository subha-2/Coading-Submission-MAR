#include<iostream>
using namespace std;
//Bass class 
class Employee{
    public :
    int id;
    float salary;
    Employee (int inpId){
        id = inpId;
        salary = 22.00;
    }
Employee(){}
};
/*
Derive class syntex
class {{Derive - class - name}} : {{visibility - mode }} {{Base - class - name }}
Visibility :
1. Default visibility mode is Private 
2. Public Visibility mode : Public members of base class becomes Public members of Derive class
3. Private visibility mode : Public members of base class becomes Private members of Derive class
4. Private members are never inherited

*/

// Creating  a programmer class Derive from Employee Base calss :
class Programmer : public Employee{
public:
int languageCode;
Programmer (int impid){
    id = impid ;

languageCode = 9;
}
void getdata(){
    cout << languageCode;
}
};

int main(){
Employee sp(66) , herry(62);

cout << sp.salary<<endl;
cout << herry.salary<<endl;
   Programmer SKILLF(2);
   cout<< SKILLF.languageCode <<endl;
   cout << SKILLF.id << endl;
   SKILLF.getdata();

    return 0; 
}