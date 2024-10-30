
#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");

    float initialAmplitude, finalAmplitude;

    cout << "Начальная амплитуда: ";
    cin >> initialAmplitude;

    cout << "Конечная амплитуда: ";
    cin >> finalAmplitude;

    int oscillation = 0;
    float currentAmplitude = initialAmplitude;

    while (currentAmplitude > finalAmplitude) {
        currentAmplitude *= (1 - 0.084f);
        oscillation++;
    }

    cout << "Маятник будет качается " << oscillation << " перед тем как остановится";

}

