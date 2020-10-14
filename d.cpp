#include <iostream>
using namespace std;

int answer1; // Store the total value of the hand
int answer2; // Store the sum of the three input integers

int main() {
  // const totalCnt = 3;
  int x,y,z;
  int oneCnt = 0;
  int sum = 0;

  cout << "input x: ";
  cin >> x;
  
  if (x == 1)
    oneCnt++;
  else if ( x > 10) {
    cout << "should not exceed 10" << endl;
    return 1;
  }
  else
  {
    sum += x;
  }
      

  cout << "input y: ";
  cin >> y;

  if (y == 1)
    oneCnt++;
  else if ( y > 10) {
    cout << "should not exceed 10" << endl;
    return 1;
  }    
  else
  {
    sum += y;
  }

  cout << "input z: ";
  cin >> z;

  if (z == 1)
    oneCnt++;
  else if ( z > 10) {
    cout << "should not exceed 10" << endl;
    return 1;
  }    
  else
  {
    sum += z;
  }
  
  // oneCnt could only be 1, 2 or 3
  // there can only be at most 1 one to be 11

  while (oneCnt > 0)
  { 
    oneCnt--;
    if (sum + 11 < 21){
      sum += 11;
    } else if (sum + 11 == 21){
      sum += (oneCnt > 0) ? 1 : 11; 
    } else {
      sum += 1;
    }
  }

  if (sum <= 21)
    cout << "The total value of the hand is " << sum << "." << endl;
  else
  {
    cout << "The total value of the hand is " << sum << " (bust)." << endl;
  }

  return 0;
}