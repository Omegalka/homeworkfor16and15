#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
class Room
{
private:
    int height = 250; // *
    int width = 500; // *
    int window = 2; // *
    string name = "bedroom"; // *
    string walls_color = "yellow"; // *
    int walls = 4; // *
    int roof = 1; // *
    int floor = 1; // *
public:

    Room () : Room(250, 500){}

    Room(int height, int width) : Room (250, 500, "bedroom") {}

    Room(int height, int width, string name) : Room(250, 500, "bedroom", "yellow") {}

    Room(int height, int width, string name, string walls_color) {
        SetName(name);
        SetHeight(height);
        SetWidth(width);
        SetWallsColor(walls_color);
        SetWalls(walls);
        SetWindow(window);
        SetWidth(width);
        SetRoof(roof);
        SetFloor(floor);
    }

    void Noize();
    void Exist();
    void Destroy();
    void Repair();
    void Feel();
    void SetWindow(int window);
    int GetWindow() const;
    void SetWalls(int walls);
    int GetWalls() const;
    void SetName(string name);
    string GetName() const;
    void SetWallsColor(string walls_color);
    string GetWallsColor() const; 
    void SetHeight(int height);
    int GetHeight() const;
    void SetWidth(int width);
    int GetWidth() const;
    void SetRoof(int roof);
    int GetRoof() const;
    void SetFloor(int floor);
    int GetFloor() const;
};

