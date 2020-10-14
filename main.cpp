#include <iostream>
#include <vector>
using namespace std;
//function prototype
void printVector( vector <double> );
double sumOfVector (vector <double>);
double findBiggest (vector <double>);

int main()
{
  vector <double> receipts{2.50, 0.99, 15.25};
  double additional;

  do{
    cout << "There are " << receipts.size() << " purchases.\n";

    //function call
    printVector( receipts );
    
    cout << "Enter new purchase (or -1 to quit):\n";
    cin >> additional;

    if( additional >= 0 )
    {
      receipts.push_back( additional );
    }
  }while( additional >= 0 );

  cout << "Thank you. You have purchsges: \n";

  printVector( receipts);

  double total=sumOfVector(receipts);
  cout << "Your total is;"<<total;
  
  return 0;
}
//function definition
//return type, function name, (parameter)
void printVector( vector <double> list)
{
  cout;
}
//function definition
double sumOfVector (vector <double> sum)
{
  double total = 0;
  for(int index=0;index < sum.size();index++)
  {
    total += sum[index];
    //total = sum[index] + total;
  }
  return total;

}
double findBiggest (vector <double> numbers)
{
  double biggest = -999999;
  for(int index=0;index<numbers.size(); index++)
  {
    if (numbers[index]> biggest)
    {
      biggest = numbers[index];
    }
  }
  return biggest;
}
//