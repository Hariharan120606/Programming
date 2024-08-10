#include <iostream>
using namespace std;

void calculateArrivalTime(int depHours, int depMinutes, int depSeconds, int travelHours = 10, int travelMinutes = 20, int travelSeconds = 10) {
    int totalDepSeconds = depHours * 3600 + depMinutes * 60 + depSeconds;
    int totalTravelSeconds = travelHours * 3600 + travelMinutes * 60 + travelSeconds;
    int totalArrivalSeconds = totalDepSeconds + totalTravelSeconds;
    int arrivalHours = totalArrivalSeconds / 3600;
    int arrivalMinutes = (totalArrivalSeconds % 3600) / 60;
    int arrivalSeconds = totalArrivalSeconds % 60;
	cout<< "total travel seconds" <<totalTravelSeconds;
	cout<< "total arrival seconds " <<totalArrivalSeconds;
    cout << "Arrival Time: " << arrivalHours << ":" << arrivalMinutes << ":" << arrivalSeconds << endl;
}

int main() {
    int depHours, depMinutes, depSeconds;
    cout << "Enter Departure Time (HH MM SS): ";
    cin >> depHours >> depMinutes >> depSeconds;

    calculateArrivalTime(depHours, depMinutes, depSeconds);

    return 0;
}


