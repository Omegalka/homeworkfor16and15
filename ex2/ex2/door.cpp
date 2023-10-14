#include "door.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void Door::Open() {
    cout << "door is opening\n";
}
void Door::Close() {
    cout << "door is closing\n";
}
void Door::Closing(string key) {
    cout << "door is closing with a key" << key << "\n";
}
void Door::Opening(string key) {
    cout << "door is opening with a key" << key << "\n";
}
void Door::SetHandle(int handle) {
    if (handle == 1)
    {
        this->handle = handle;    
    }
    else {
        cout << "You don`t have handle\n";
    }
}
int Door::GetHandle() const {
    return handle;
}
void Door::SetWidth(int width) {
    this->width = width;
}
int Door::GetWidth() const {
    return width;
}
void Door::SetSize(int size) {
    this->size = size;
}
int Door::GetSize() const {
    return size;
}
void Door::SetColor(string color) {
    this->color = color;
}
string Door::GetColor() const {
    return color;
}
void Door::SetKhColor(string kh_color) {
    this->kh_color = kh_color;
}
string Door::GetKhColor() const {
    return kh_color;
}
void Door::SetHandleColor(string handle_color) {
    this->handle_color = handle_color;
}
string Door::GetHandleColor() const {
    return handle_color;
}
void Door::SetWalls(int walls) {
    this->walls = walls;
}
int Door::GetWalls() const {
    return walls;
}
void Door::SetType(string type) {
    this->type = type;
}
string Door::GetType() const {
    return type;
}
