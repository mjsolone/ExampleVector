#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector <double> receipts{2.50, 0.99, 15.25};
  double additional;

  do{
    cout << "There are " << receipts.size() << " purchases.\n";
    
    cout << "Enter new purchase (or -1 to quit):\n";
    cin >> additional;

    if( additional >= 0 )
    {
      receipts.push_back( additional );
    }
  }while( additional >= 0 );
  
  return 0;
}
