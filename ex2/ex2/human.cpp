#include "human.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void Human::MakeNoize(string noize) {
    cout << "Jonathan is knocking!" << noize << "\n";
}
void Human::Eat(string meal) {
    cout << "Jonathan is eating" << meal << "\n";
}
void Human::Hobby(string entertainment) {
    cout << "Jonathan is playing games" << entertainment << "\n";
}
void Human::Feel() {
    cout << "Jonathan is stressed\n";
}
void Human::Sleep() {
    cout << "Jonathan is sleeping\n";
}
void Human::Wakeup() {
    cout << "Jonathan is wake up\n";
}
void Human::OpeningDoor() {
    cout << "Jonathan is opening door\n";
}
void Human::SetEyes(int eye) {
    if (eye >= 0 and eye <= 2) {   
        this->eye = eye;
    }
    else {
        cout << "You are unusual human\n";
    }
}
int Human::GetEyes() const {
    return eye;
}
void Human::SetHeight(int height) {
    this->height = height;
}
int Human::GetHeight() const {
    return height;
}
void Human::SetEars(int ears) {
    if (ears >= 0 and ears <= 2) {
        this->ears = ears;
    }
    else {
        cout << "Seems human doesn`t hear\n";
    }
}
int Human::GetEars() const {
    return ears;
}
void Human::SetWeight(double weight) {
    this->weight = weight;
}
double Human::GetWeight() const {
    return weight;
}
void Human::SetName(string name) {
    this->name = name;
}
string Human::GetName() const {
    return name;
}
void Human::SetEyesColor(string eyes_color) {
    this->eyes_color = eyes_color;
}
string Human::GetEyesColor() const {
    return eyes_color;
}
void Human::SetEyeOpen(bool eye_open) {
    this->eye_open = eye_open;
}
bool Human::GetEyeOpen() const {
    return eye_open;
}
void Human::SetNoize(string noize) {
    this->noize = noize;
}
string Human::GetNoize() const {
    return noize;
}

