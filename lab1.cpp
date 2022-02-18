# include <iostream>
#include <vector>
#include <string>

using namespace std;

void binaryTransform(int x) {
    int binaryNumber = 0;
    std::vector< int > arrOfNumbers;
    while (x >= 1) {
        binaryNumber = x% 2;
        arrOfNumbers.push_back(binaryNumber);
        x /= 2;
    }
    cout<<"Number in binary = ";
    for (int i = 0; i <= arrOfNumbers.size() - 1; i++) {
        cout<<arrOfNumbers[arrOfNumbers.size() - 1 - i];
    }
    cout<<endl;
 } 

void octTransform(int x) {
    int octNumber = 0;
    std::vector< int > arrOfNumbers;

    while (x >= 1) {
      octNumber = x % 8;  
      x /= 8;
      arrOfNumbers.push_back(octNumber);
    }
    cout<<"Number in oct = ";
    for (int i = 0; i <= arrOfNumbers.size() - 1; i++) {
        cout<<arrOfNumbers[arrOfNumbers.size() - 1 - i];
    }
    cout<<endl;
}

void hexTransform(int x) {
    int hexNumber = 0;
    string hexString = " ";
    std::vector< string > arrOfNumbers;

    while (x >= 1) {
      hexNumber = x % 16; 

      if (hexNumber < 10) {
        arrOfNumbers.push_back(to_string(hexNumber));
      } else {
          switch (hexNumber) {
              case 10:
              hexString = "A"; break;
              case 11:
              hexString = "B"; break;
              case 12:
              hexString = "C"; break;
              case 13:
              hexString = "D"; break;
              case 14:
              hexString = "E"; break;
              case 15:
              hexString = "F"; break;
              
          } 
          arrOfNumbers.push_back(hexString);
      }

      x /= 16;
    }
    cout<<"Number in hex = ";
    for (int i = 0; i <= arrOfNumbers.size() - 1; i++) {
        cout<<arrOfNumbers[arrOfNumbers.size() - 1 - i];
    }
    cout<<endl;
}

int main() {
    int tuskNumber;
    int decimalNumber = 0;

    cout<<"To convert decimal to binary enter 1"<<endl;
    cout<<"To convert decimal to octal enter 2"<<endl;
    cout<<"To convert decimal to hex enter 3"<<endl;
    cout<<"To convert decimal to all in one enter 4"<<endl;

    cin>>tuskNumber;

    cout<<"Enter the decimal number greater than 0"<<endl;

    cin>>decimalNumber;


    switch (tuskNumber) {
        case 1:
        binaryTransform(decimalNumber); break;
        case 2:
        octTransform(decimalNumber); break;
        case 3:
        hexTransform(decimalNumber); break;
        case 4:
        binaryTransform(decimalNumber);
        octTransform(decimalNumber);
        hexTransform(decimalNumber); break;
    }
}

