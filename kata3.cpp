#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
 for( const auto &c : inputStr ) 
      if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') num_vowels++;
  return num_vowels;
}