#include <iostream>
#include <string>
using namespace std;

class User {
 private:
  int id = 0;

 public:
  string name = "";
  int phoneNumber = 0;

  void setId(const int& newId) {
    id = newId;
    cout << "Id value is updatted" << endl;
  }

  int getId() { return id; }
};
