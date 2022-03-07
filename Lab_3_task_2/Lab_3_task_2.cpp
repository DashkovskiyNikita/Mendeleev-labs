#include <iostream>
#include "Shooter.h"
using namespace std;

class Beginner : public Shooter{
public:
    Beginner(string _name, int _age, int _experience) : Shooter(_name, _age, _experience) {
        probability = 0.01 * experience;
    }
    
    bool shoot() override {
        double random = rand() % 1000 / 1000.0;
        return random < probability;
    }
};

class Skilled : public Shooter {
public:
    Skilled(string _name, int _age, int _experience) : Shooter(_name, _age, _experience) { 
        probability = 0.05 * experience;
    }

    bool shoot() override {
        double random = rand() % 1000 / 1000.0;
        return random < probability;
    }
};

class Veteran : public Shooter {
public:
    Veteran(string _name, int _age, int _experience) : Shooter(_name, _age, _experience) {
        probability = 0.9 - 0.01 * age;
    }

    bool shoot() override {
        double random = rand() % 1000 / 1000.0;
        return random < probability;
    }
};

int main()
{

    srand(time(0));

    Shooter* shooters[5] = {
        new Beginner("Alex",20,1),
        new Skilled("Bob",30,5),
        new Veteran("George",40,20),
        new Skilled("Lukas",31,4),
        new Beginner("Jason",22,2)
    };

    for (auto shooter : shooters) {
        shooter->print_info();
        bool result = shooter->shoot();
        if (result) {
            cout << "Result : hit" << endl;
            break;
        }
        else {
            cout << "Result : miss" << endl;
        }
        cout << "\n";
    }
}

