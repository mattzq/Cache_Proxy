#include "Response.h"

class Base {
private:
  int uid;
  std::string b;
  std::map<std::string, std::string> mp;
};

class Test : public Base {
private:
  struct First_line_msg {
    std::string status_num;
    std::string status_char;
    std::string protocol;
  };
  First_line_msg msg;
  std::string a;
};

int main() {
  Response r1;
  Response r2;
  std::string s1;
  std::string s2;
  Http h1;
  Http h2;
  // First_line_msg m1;
  // First_line_msg m2;
  Test t1;
  // t1.msg.protocol = "hello";
  // t1.mp.insert({"Host", "google.com"});
  Test t2;
  std::swap(t1, t2);
  return 0;
}
