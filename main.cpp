#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int number, first, last, sum, digits, result, a, b; 
    //use 'long' instead of 'int' if you want run code with large number like '1234567898765432123456789'
 
    cout << " Input any number: ";
    cin >> number;
    //Incase if number comes with less than zero it will save the programe to crahs
    while(number == 0){
        cout << "You enter a invalid number \n";
        cout << "Type again \n"
        cin >> number;
    }
        
    
    digits = (int)log10(number);
    first = number / pow(10, digits);
    last = number % 10;
    a = first * (pow(10, digits));
    b = number % a;
    number = b / 10;
    result = last * (pow(10, digits)) + (number * 10 + first);
    cout << " The number after swaping the first and last digits are: " << result;
}  
