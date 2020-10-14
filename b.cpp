#include <iostream>
#include <cmath>
using namespace std;

int answer1; // Store the number of the first digit after encryption.
int answer2; // Store the number of the second digit after encryption.
int answer3; // Store the number of the third digit after encryption.
int answer4; // Store the number of the fourth digit after encryption.
int answer5; // Set this number to 1 if correctly input; otherwise set this number to 0 

int main() {
  answer5 = 1;
  int x;
  cout << "input number: ";
  cin >> x;

  if (x < 1000 || x > 9999){
    cout << "[ERROR] input should be a 4 digits number";
    answer5 = 0;
    return 1;
  }

  int ori = x;
  int y = 0;
  for (int i = 0; x > 0; i++){
    y += ((x % 10) + 7) % 10 * pow(10,i);
    x /= 10;
  }
  cout << y << endl;

  string yStr = to_string(y);
  cout << yStr.length() << endl;
  char tmpChar = yStr[0];
  yStr[0] = yStr[1];
  yStr[1] = tmpChar;

  tmpChar = yStr[2];
  yStr[2] = yStr[3];
  yStr[3] = tmpChar;

  cout << yStr + " is the encrypted integer of " + to_string(ori) << endl;

  answer1 = yStr[0] - '0';
  answer2 = yStr[1] - '0';
  answer3 = yStr[2] - '0';
  answer4 = yStr[3] - '0';
  return 0;
}