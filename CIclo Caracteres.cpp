#include <iostream>
using namespace std;
int main()
{
  int ixx, ixy;
  for (ixx=0; ixx<=10;ixx++)
  {
  for (ixy= 0; ixy<ixx; ixy++)
  {
    if (ixx % 2 == 0){
      cout <<"$";
    }
    else{
      cout <<"#";
    }
  }
    cout << endl;
}

}
