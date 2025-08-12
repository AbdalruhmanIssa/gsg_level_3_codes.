#include <iostream>
#include <string>
using namespace std;

string activities[] = { "Swimming", "Running", "Football" };
int countSchedules = 0;

void generateSchedules(int n, int day, string prev, string schedule) {
    if (day == n) { 
        cout << schedule << "\n";
        countSchedules++;
        return;
    }

    for (int i = 0; i < 3; i++) {
        if (activities[i] != prev) { 
            string newSchedule = schedule;
            if (!schedule.empty()) newSchedule += " ";
            newSchedule += activities[i];
            generateSchedules(n, day + 1, activities[i], newSchedule);
        }
    }
}

int main() {
    int n;
    cin >> n;

    generateSchedules(3, 0, "", "");
    cout << "COUNT: " << countSchedules << "\n";

    return 0;
}
