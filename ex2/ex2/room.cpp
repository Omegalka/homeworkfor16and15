#include "room.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void Room::Noize() {
    cout << "Someone knocking on the door\n";
}
void Room::Exist() {
    cout << "Room is existing\n";
}
void Room::Destroy() {
    cout << "Walls are falling\n";
}
void Room::Repair() {
    cout << "room is repared by humans\n";
}
void Room::Feel() {
    cout << "room can`t feel anything, maybe";
}
void Room::SetWindow(int window) {
    if (window >= 0) {
        this->window = window;    
    }
    else {
        cout << "your room have windows\n";
    }
}
int Room::GetWindow() const {
    return window;
}
void Room::SetWalls(int walls) {
    this->walls = walls;
}
int Room::GetWalls() const {
    return walls;
}
void Room::SetName(string name) {
    this->name = name;
}
string Room::GetName() const {
    return name;
}
void Room::SetWallsColor(string walls_color) {
    this->walls_color = walls_color;
}
string Room::GetWallsColor() const {
    return walls_color;
}
void Room::SetHeight(int height) {
    this->height = height;
}
int Room::GetHeight() const {
    return height;
}
void Room::SetWidth(int width) {
    this->width = width;
}
int Room::GetWidth() const {
    return width;
}
void Room::SetRoof(int roof) {
    this->roof = roof;
}
int Room::GetRoof() const {
    return roof;
}
void Room::SetFloor(int floor) {
    this->floor = floor;
}
int Room::GetFloor() const {
    return floor;
}