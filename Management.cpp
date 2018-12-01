//
// Created by kawth_000 on 23/11/2018.
//

#include "Management.h"

//Constructor to initialize each variable
Employee::Employee(std::string name1, std::string pos, int age1, double bal) {
    name = name1;
    position = pos;
    age = age1;
    balance = bal;
}

std::string Employee::getName() {
    return name;
}

std::string Employee::getPosition() {
    return position;
}

int Employee::getAge() {
    return age;
}

double Employee::getBalance() {
    return balance;
}

void Employee::setBalance(double newBalance) {
    balance += newBalance;
}
