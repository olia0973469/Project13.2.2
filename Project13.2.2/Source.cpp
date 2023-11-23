#include <iostream>

#define DATE __DATE__
#define FILE_NAME __FILE__
#define LINE_NUMBER __LINE__
#define STDC_MACRO __STDC__
#define TIME __TIME__

#pragma GCC poison param1
#pragma GCC poison param2

using namespace std;

int main() {

    setlocale(LC_ALL, "Ukrainian");


    cout << "Date: " << DATE << endl;
    cout << "File location: " << FILE_NAME << endl;
    cout << "Lines: " << LINE_NUMBER << endl;


    cout << "Conforms to ISO Standard C : ";
    if (__STDC_HOSTED__ == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << "Last change time: " << TIME << endl;

    return 0;
}