#include <string>
#include <iostream>

using namespace std;

class Time {
public:
    string whatTime(int);
};

string Time::whatTime(int total) {
    int hour = total / 3600;
    int minute = (total % 3600) / 60;
    int second = (total % 3600 ) % 60; 
    
    string result = to_string(hour) + string(":") + to_string(minute) + string(":") + to_string(second);

    
    //cout << "Hour :" << hour << " Minute :" << minute << " second: " << second << endl;
    cout << result << endl;
    return result;
}

int main() {
    Time t;
    t.whatTime(3600);
    t.whatTime(3661);
    t.whatTime(5436);
    return 0;
}
