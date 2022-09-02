#include <iostream>
using namespace std;

int main()
{
  
  float era = 0;
  float earned = 0;
  float innings = 0;

  cout << " " << endl;
 
  cout << "How many allowed runs were earned?: ";
  cin >> earned;
  cout << " " << endl;
  cout << "How many inning were pitched?: ";
  cin >> innings;
 
  era = (9 * (earned / innings));

  cout << " " << endl;
  
  cout << "ERA is " << era << endl;

  if (era <= 2.00)
  {
    cout << "ERA is exceptional and is rare." << endl;
  }

  if (era > 2.00 && era <= 3.00)
  {
    cout << "ERA is excellent." << endl;
  }

  if (era > 3.00 && era <= 4.00)
  {
    cout << "ERA is better than average." << endl;
  }

  if (era > 4.00 && era <= 5.00)
  {
    cout << "ERA is average." << endl;
  }

  if (era > 5.00 && era <= 6.00)
  {
    cout << "ERA is worse than average." << endl;
  }

  if (era > 6.00)
  {
    cout << "ERA is very high and could lead to a demotion." << endl;
  }

  return 0;
}
