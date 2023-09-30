#include <iostream>

using namespace std;

class TimeConverter {
private:
    int seconds;
    int hours;
    int minutes;
    int remainingSeconds;

public:
    void convertSeconds(int inputSeconds) {
        seconds = inputSeconds;

        hours = seconds / 3600;          // 1 hour = 3600 seconds
        seconds %= 3600;                 // Remaining seconds after calculating hours
        minutes = seconds / 60;          // 1 minute = 60 seconds
        remainingSeconds = seconds % 60; // Remaining seconds after calculating minutes
    }

    void displayTime() {
        cout << "Hours: " << hours << " Minutes: " << minutes << " Seconds: " << remainingSeconds << endl;
    }
};

int main() {
    int inputSeconds;

    cout << "Enter the number of seconds: ";
    cin >> inputSeconds;

    TimeConverter time;
    time.convertSeconds(inputSeconds);
    time.displayTime();

    return 0;
}