#include <iostream>
#include <vector>
#include <ctime>
#include <windows.h>

using namespace std;

// ================= BASE CLASS =================
class AlarmSystem 
{
protected:
    int hour, minute, second;
    string message;
    bool triggered;

public:
    AlarmSystem(int h, int m, int s, string msg) 
    {
        hour = h;
        minute = m;
        second = s;
        message = msg;
        triggered = false;
    }

    virtual void check() = 0;
    virtual void display() = 0;

    virtual ~AlarmSystem() 
    {

    }
};

// ================= DERIVED CLASS =================
class Alarm : public AlarmSystem 
{
public:
    Alarm(int h, int m, int s, string msg)
        : AlarmSystem(h, m, s, msg) 
        {

        }

    void check() 
    {
        if (triggered) return;

        time_t now = time(0);
        tm *ltm = localtime(&now);

        if (ltm->tm_hour == hour  &&  ltm->tm_min == minute  &&  ltm->tm_sec == second) 
            {
            cout << "\n ALARM: " << message << endl;
            cout << "\a";

            triggered = true;
        }
    }

    void display() 
    {
        cout << "Alarm at "
             << hour << ":" << minute << ":" << second
             << " -> " << message << endl;
    }
};

// ================= MAIN =================
int main() 
{
    vector<AlarmSystem*> alarms;
    int n;

    cout << "How many alarms you want to set: ";
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        int h, m, s;
        string msg;

        cout << "\nEnter Alarm " << i+1 << " Time (HH MM SS): ";
        cin >> h >> m >> s;

        cin.ignore();
        cout << "Enter Message: ";
        getline(cin, msg);

        alarms.push_back(new Alarm(h, m, s, msg));
    }

    cout << "\n Your Alarms:\n";
    for (auto a : alarms) 
    {
        a->display();
    }

    cout << "\n System Running...\n";

    while (true) 
    {
        for (auto a : alarms) 
        {
            a->check();
        }

        Sleep(1000); 
    }

    for (auto a : alarms) {
        delete a;
    }

    return 0;
}
