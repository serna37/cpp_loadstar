#include <iostream>
#include <string>
#include "../src/sample.cpp"

// using namespace std;

void getOrder(int &te) {
  // std::cout << te << std::endl;
  te++;
}


// exec command
// g++ main/main.cpp -lsqlite3 && ./a.out
int main() {


  std::string testString = "asdadasd";
  std::string result = echo(testString);

  // XXX doesn't work with  sqlite ...
  // error: no table
  test();

  std::cout << "===== end =====" << std::endl;


  return 0;
}

