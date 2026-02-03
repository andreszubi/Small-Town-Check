#include <iostream>
using  namespace std;

/*Small towns have populations in the range 1400 - 4650 inclusive.
 *Write an if statement that outputs "Not a small town" if the input popInput is not in this range.
 *Otherwise, output "Small town". End each output with a newline.*/

int main()
{
    int popInput;

    cin >> popInput;

    if ((popInput > 4650) || (popInput < 1400)) {
        cout << "Not a small town" << endl;
    }
    else {
        cout << "Small town" << endl;
    }

    return 0;
}