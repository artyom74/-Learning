#include <iostream> 
#include <string>
using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "ru");

    double fuel_needed = 0;

    int distance_AB;
    cout << "Введите расстояние от точки A до точки B: ";
    cin >> distance_AB;

    int distance_BC;
    cout << "Введите расстояние от точки B до точки C: ";
    cin >> distance_BC;

    int weight;
    cout << "Введите общее количество груза: ";
    cin >> weight;

    if (weight <= 500) {
        fuel_needed = distance_AB + distance_BC;
    }
    else if (weight <= 1000) {
        fuel_needed = 4 * (distance_AB + distance_BC);
    }
    else if (weight <= 1500) {
        fuel_needed = 7 * (distance_AB + distance_BC);
    }
    else if (weight <= 2000) {
        fuel_needed = 9 * (distance_AB + distance_BC);
    }
    else {
        cout << "Самолёт не поднимает больше 2000кг. Полёт по введённому маршруту - невозможен";
    }

    double fuel_capacity = 300;

    if (fuel_needed <= fuel_capacity) {
        cout << "Дозаправка на точке B - не нужна. Самолет может пролететь из точки A до точки C без неё.";
    }
    else {
        double refuel_amount = fuel_needed - fuel_capacity;
        cout << "Нужно " << refuel_amount << " литров дозаправки на точке B!";

    }

    return 0;
}


/*Грузовой самолет должен пролететь с грузом из пункта А
в пункт С через пункт В.Емкость бака для топлива у самолелёта — 300 литров.Потребление топлива на 1 км в зависимости
от веса груза у самолета следующее :
■ до 500 кг — 1 литров / км;
■ до 1000 кг — 4 литров / км;
■ до 1500 кг — 7 литров / км;
■ до 2000 кг — 9 литров / км;
■ более 2000 кг — самолет не поднимает.
Пользователь вводит расстояние между пунктами А и В,
и расстояние между пунктами В и С, а также вес груза.
Программа должна рассчитать какое минимальное количество
топлива необходимо для дозаправки самолету в пункте В,
чтобы долететь из пункта А в пункт С.В случае невозможности преодолеть любое из расстояний — программа должна
вывести сообщение о невозможности полета по введенному
маршруту*/