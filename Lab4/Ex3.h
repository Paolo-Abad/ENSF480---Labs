/*
 * File Name: Ex3.h
 * Assignment: Lab 4 Exercise C
 * Completed By: Steven Wu, Paolo Abad
 * Submission Date: Oct. 5, 2026
 */
#ifndef LAB4EXE_C_H
#define LAB4EXE_C_H

#include <string>

class Moveable {
public:
    virtual void forward() = 0;
    virtual void backward() = 0;
};

class Resizeable {
public:
    virtual void enlarge(int n) = 0;
    virtual void shrink(int n) = 0;
};

class Vehicle : public Moveable, public Resizeable {
protected:
    std::string name;

public:
    Vehicle(std::string name);
    virtual void move() = 0;
};

class Car final : public Vehicle {
private:
    int seats;

public:
    void forward() override;
    void backward() override;
    void enlarge(int n) override;
    void shrink(int n) override;
    void move() override;
    void turn();
};

#endif