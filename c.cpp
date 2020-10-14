#include <iostream>
#include <cstring>  
using namespace std;

int answer1; // Store the score of the three throws
int answer2; // Set this number to 1 if correctly input; otherwise set this number to 0


int main() {
    int number1, number2, number3;
    int strik_cnt, spell_cnt;
    string desc;
    
    strik_cnt = spell_cnt = 0;
    answer2 = 1;
    
    cout << "first throw: ";
    cin >> number1;

    if (number1 > 10) {
      cout << "[Erroneous input] should not exceed 10" << endl;
      answer2 = 0;
      return 1;
    }
    if (number1 == 10)
      strik_cnt++;   
    answer1 += number1;

    cout << "second throw: ";
    cin >> number2;

    if (number2 > 10) {
      cout << "[Erroneous input] should not exceed 10" << endl;
      answer2 = 0;
      return 1;     
    } else if (number1 != 10 && number1 + number2 > 10) {
      cout << "[Erroneous input] if first throw is not strik, the first two throws' sum should not exceed 10" << endl;
      answer2 = 0;
      return 1;     
    }
    if (number2 == 10)
      strik_cnt++;
    else if (number1 + number2 == 10)
      spell_cnt++;
    answer1 += number2;

    // only do third throw if there are at least a strik or spell
    if ((number1 == 10) || (number1 == 10 && number2 == 10) || (number1 + number2 == 10)){
      cout << "third throw: ";
      cin >> number3;

      if (number3 > 10) {
        cout << "[Erroneous input] third throw should not exceed 10" << endl;
        answer2 = 0;
        return 1;        
      } else if ((number1 == 10) && (number2 != 10) && (number2 + number3 > 10)){
        cout << "[Erroneous input] when the first is a strik and the second isn't, then the second and third throws' sum should not exceed 10" << endl;
        answer2 = 0;
        return 1;
      }

      if (number3 == 10)
        strik_cnt++;
      else if (number2 + number3 == 10)   
        spell_cnt++;
      answer1 += number3;
    }

    if (strik_cnt == 3)
      desc = "(three striks)";
    else if (strik_cnt == 2)
      desc = "(two striks)";
    else if (strik_cnt == 1){
      if (spell_cnt == 1)
        desc = "(a strik and a spell)";
      else 
        desc = "(a strik)";
    }
    cout << "the score is " << answer1 << " " << desc << ".";
    return 0;
}