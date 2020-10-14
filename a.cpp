#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;


int answer1; // Store the number of the quadrant where the coordinate point lies;
 // Set this number to 5 if the point lies on the x-axis;
 // Set this number to 6 if the point lies on the y-axis;
 // Set this number to 7 if the point is the origin (0,0). 


int main() {
  float x,y;
  string desc, dynamicDesc;
  stringstream ssx, ssy;

  cout << "input x: ";
  cin >> x;
  
  cout << "input y: ";
  cin >> y;

  if ((x > 0) && (y > 0)){
    dynamicDesc = "is in quadrant I";
    answer1 = 1;
  } else if ((x < 0) && (y > 0)){
    dynamicDesc = "is in quadrant II";
    answer1 = 2;
  } else if ((x < 0) && (y < 0)){
    dynamicDesc = "is in quadrant III";
    answer1 = 3;
  } else if ((x < 0) && (y > 0)){
    dynamicDesc = "is in quadrant IV";
    answer1 = 4;
  } else if ((x != 0) && (y == 0)){
    dynamicDesc = "is on the x-axis";
    answer1 = 5;
  } else if ((x == 0) && (y != 0)){
    dynamicDesc = "is on the y-axis";
    answer1 = 6;
  } else if ((x == 0) && (y == 0)){
    dynamicDesc = "is the origin";
    answer1 = 7;
  }

  ssx << fixed << setprecision(1) << x;
  ssy << fixed << setprecision(1) << y;
  desc = "The point (" + ssx.str() + ", " + ssy.str() + ") ";
  cout << desc << dynamicDesc;

  return 0;
}

