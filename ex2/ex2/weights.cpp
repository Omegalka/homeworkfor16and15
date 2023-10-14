#include "weights.h"
#include <windows.h>
#include <iostream>
#include <string>
using namespace std;

void Weights::Inclusion(string button_on) {
    cout << "00000" << button_on << "\n";
}
void Weights::Unit(string button_unit) {
    cout << "turn on oz mode" << button_unit << "\n";
}
void Weights::Weighting() {
    cout << "calculating weight" << "\n";
}
void Weights::Light(string light_button) {
    cout << "info platform is glowing";
}
void Weights::SetPcs(int pcs) {
    if (pcs == 1) {
        this->pcs = pcs;   
    }
    else {
        cout << "You don`t have button pcs\n";
    }
}
int Weights::GetPcs() const {
    return pcs;
}
void Weights::SetScreen(int screen) {
    this->screen = screen;
}
int Weights::GetScreen() const {
    return screen;
}
void Weights::SetFunction(string function) {
    this->function = function;
}
string Weights::GetFunction() const {
    return function;
}
void Weights::SetButton(int button) {
    this->button = button;
}
int Weights::GetButton() const {
    return button;
}
void Weights::SetWeightPlat(string weight_plat) {
    this->weight_plat = weight_plat;
}
string Weights::GetWeightPlat() const {
    return weight_plat;
}
void Weights::SetColor(string color) {
    this->color = color;
}
string Weights::GetColor() const {
    return color;
}
void Weights::SetWidth(int width) {
    this->width = width;
}
int Weights::GetWidth() const {
    return width;
}
void Weights::SetSize(int size) {
    this->size = size;
}
int Weights::GetSize() const {
    return size;
}