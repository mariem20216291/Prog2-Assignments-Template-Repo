// mariem Ahmed lotfy
// 20216291
#include <iostream>
using namespace std;
int main() {
int your_num;
cin >> your_num;
int first_digit = your_num / 1000;
if (first_digit % 2 != 1) {
cout << "EVEN" << endl;
} else {
    cout << "ODD" << endl;
}
return 0;
}
