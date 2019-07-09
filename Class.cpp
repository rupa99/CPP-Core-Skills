#include <iostream>
#include <sstream>

using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student {
private:
  int old, std;
  string fst_nme, lst_nme;

public:
  // Implementing setters
  void set_age(int x) { old = x; }

  void set_standard(int x) { std = x; }
  void set_first_name(string y) { fst_nme = y; }
  void set_last_name(string y) { lst_nme = y; }

  // Implementing getters
  int get_age() { return old; }

  string get_last_name() { return lst_nme; }

  int get_standard() { return std; }

  string get_first_name() { return fst_nme; }

  string to_string() {
    stringstream ss;
    ss << old << ',' << fst_nme << ',' << lst_nme << ',' << std;
    string x = ss.str();
    return x;
  }
};

int main() {
  int age, standard;
  string first_name, last_name;

  cin >> age >> first_name >> last_name >> standard;

  Student st;
  st.set_age(age);
  st.set_standard(standard);
  st.set_first_name(first_name);
  st.set_last_name(last_name);

  cout << st.get_age() << "\n";
  cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
  cout << st.get_standard() << "\n";
  cout << "\n";
  cout << st.to_string();

  return 0;
}
