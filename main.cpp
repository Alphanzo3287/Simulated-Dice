#include <iostream>
#include<random> 
using namespace std;

int main() 

//Constants...All caps
{
  const int MIN = 1;
  const int MAX = 6;

  //random number engine
    random_device engine;

  //distribution object

uniform_int_distribution<int>
diceValue(MIN,MAX);

  cout << "Rolling the dice...\n";
  cout << diceValue(engine) << endl;
  cout << diceValue(engine) << endl;
  return 0;
}