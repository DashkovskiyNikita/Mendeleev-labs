#include <iostream>
#include "BoxOffice.h"
using namespace std;

void handle_event(BoxOffice& boxOffice) {
    char event;
    cin >> event;
    switch (event) {
    case '1': 
        boxOffice.payment();
        break;
    case '2':
        boxOffice.free_ride();
        break;
    case '3':
        boxOffice.print_info();
        exit(1);
        break;
    default:
        cout << "Wrong command.Try again" << endl;
        handle_event(boxOffice);
    }
}

int main()
{
    BoxOffice boxOffice;
    while (true) {
        handle_event(boxOffice);
    }
}
