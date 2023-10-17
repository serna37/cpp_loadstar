#include <iostream>
#include <sqlite3.h>
#include <string>

/**
 * echo function.
 *
 * @param str some string
 */
std::string echo(std::string str) {
  std::cout << &str << std::endl;
  std::cout << str << std::endl;
  // printf("oh happy day");
  return str;
}

int callback(void *anything, int argc, char **argv, char **column) {
  for (int i = 0; i < argc; i++) {
    std::cout << i << ": " << column[i] << " " << argv[i] << "  ";
  }
  std::cout << std::endl;
  return 0;
}

int test() {
  std::cout << "======= start ======" << std::endl;
  sqlite3 *db = NULL;
  int ret = sqlite3_open("test2.db", &db);
  if (SQLITE_OK != ret) {
    printf("DB FILE CANNOT OPEN \n");
    return -1;
  }

  char *errmsg;
  // std::cout << errmsg << std::endl;

  //  int er = sqlite3_exec(
  //      db, "INSERT INTO t_test
  //      (id,name,age,category)VALUES(2,'aa',3,'asd');", NULL, NULL, &errmsg);
  // std::string*tetet = (std::string*) sqlite3_errmsg16(db);
  // std::cout << er << std::endl;
  // std::cout << *tetet << std::endl;
  const char *sql = "SELECT * FROM abcde;";
  int er2 = sqlite3_exec(db, sql, NULL, NULL, &errmsg);
  std::cout << errmsg << std::endl;
  // std::cout << er2 << std::endl;
  sqlite3_close(db);
  printf("DB FILE OK  OPEN \n");
  return 1;
}

//int main() {
//  test();
//  return 0;
//}
