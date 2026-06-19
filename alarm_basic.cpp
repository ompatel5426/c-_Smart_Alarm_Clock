#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
    int alarmHour, alarmMinute;
    string message;

    cout << "===== Simple Alarm System =====\n";

    // Input
    cout << "Enter alarm hour (0-23): ";
    cin >> alarmHour;

    cout << "Enter alarm minute (0-59): ";
    cin >> alarmMinute;

    cin.ignore();
    cout << "Enter message: ";
    getline(cin, message);

    cout << "\nAlarm set successfully!\n";
    cout << "Waiting for alarm...\n";

    // Loop to check time
    while (true) 
    {
        time_t now = time(0);
        tm *ltm = localtime(&now);

        int currentHour = ltm->tm_hour;
        int currentMinute = ltm->tm_min;

        if (currentHour == alarmHour && currentMinute == alarmMinute) 
        {
            cout << "\n🔔 Alarm: " << message << endl;
            break; // ek baar bajne ke baad stop
        }
    }

    return 0;
}