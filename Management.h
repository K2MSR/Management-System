//
// Created by kawth_000 on 23/11/2018.
//
#ifndef MANAGEMENT_SYSTEM_MANAGEMENT_H
#define MANAGEMENT_SYSTEM_MANAGEMENT_H

#include <iostream>
#include <string>
#include <vector>

class Employee {
private:
    std::string name;
    std::string position;
    int age;
    double balance;

public:
    Employee(std::string, std::string, int, double);
    std::string getName();
    std::string getPosition();
    int getAge();
    double getBalance();
    void setBalance(double);
    virtual void payment() = 0;
    virtual void display() = 0;
};

class Casual_Employee : public Employee{
private:
    double rate;
    int hours;
    double money;

public:
    Casual_Employee(double, int, double, int);
    void display();
};

class Part_Time_Employee : public Employee{
public:
    Part_Time_Employee(double, int);
    void display();
};

class Full_Time_Employee : public Employee{
public:
    Full_Time_Employee(double, int);
    void display();
};

#endif //MANAGEMENT_SYSTEM_MANAGEMENT_H
