#include <iostream>
#include <iomanip>
using namespace std;

double calculateSpeed(double distance, double time) {
    return distance / time;
}

double calculateSpeed(double distance, double time, double acceleration) {
    return (distance / time) + acceleration * time;
}

int main() {
    double distance, time;
    double trainAcceleration, planeAcceleration;

    cin >> distance;
    cin >> time;
    cin >> trainAcceleration;
    cin >> planeAcceleration;

    cout << fixed << setprecision(2);

    cout << calculateSpeed(distance, time) << endl;
    cout << calculateSpeed(distance, time, trainAcceleration) << endl;
    cout << calculateSpeed(distance, time, planeAcceleration) << endl;

    return 0;
}