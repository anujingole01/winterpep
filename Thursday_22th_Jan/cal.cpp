#include <iostream>

using namespace std;


int main(){

int a, b, c;

cout << "Enter the numbers"<<endl;

cin >> a >> b;


bool flag = true;

while(flag){
cout << "Enter the choice number"<<endl;
cout << "Sum (1)"<<endl;
cout << "Subtract (2)"<<endl;
cout << "Multiply (3)"<<endl;
cout << "Divide (4)"<<endl;
cout << "Mod (5)"<<endl;
cout << "Bit-Wise right (6)"<<endl;
cout << "Bit-wise left (7)"<<endl;
cout << "Exit form the program (0)" <<endl;
cin >> c;

switch (c)
{
case 1:
{
    int sum = a + b;
    cout << "The sum number is: "<< sum <<endl;
    break;
}

case 2:
{
    int sub = a - b;
    cout << "The subtracted number is: "<< sub <<endl;
    break;
}

case 3:
{
    int mul = a * b;
    cout << "The multiply number is: "<< mul <<endl;
    break;
}
case 4:
{
    int div = a / b;
    cout << "The divded number is: "<< div <<endl;
    break;
}
case 5:
{
    int mod = a % b;
    cout << "The modules number is: "<< mod <<endl;
    break;
}
case 6:
{
    int rig = a >> b;
    cout << "The bitwise right is: "<< rig <<endl;
    break;
}
case 7:
{
    int lef = a << b;
    cout << "The bitwise left is: "<< lef <<endl;
    break;
}
case 0:
{
  flag = false;
  cout << "Exit form the loop" << endl;
  break;
}
default:
   cout << "The number you enter is invalid " <<endl;
    break;
}
}
return 0;
}