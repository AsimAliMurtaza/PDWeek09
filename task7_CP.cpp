#include <iostream>
using namespace std;

main() 
{
  string s1;
  string s2;
  
  cout << "Enter String One: ";
  cin >> s1;

  cout << "Enter String Two: ";
  cin >> s2;

  int len1 = s1.length();
  int len2 = s2.length();
  int stringOne[len1];
  int stringTwo[len2];
  
  int count = 0;
  
  for (int i = 0; i<len1; i++) 
  {
    for(int j=0; j<len2; j++)
      {
        if (s1[i]==s2[j])
        {
          count++;
          s2[j]='`';
          break;
        }
        else
        {
          continue;
        }
      }
  }
  cout << count << endl;
}
