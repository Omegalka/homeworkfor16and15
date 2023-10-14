#include <iostream>
#include <windows.h>
using namespace std;
class Door
{
private:
    int size = 190; // *
    int width = 100; // *
    string color = "brown"; // *
    string kh_color = "gold"; // *
    string handle_color = "black"; // *
    int handle = 1; // *
    string type = "bedroom"; // *
    int walls = 2; // *
    bool is_open = false;
public:

    Door() : Door(190, 100) {}                                                

    Door(int size, int width) : Door (190, 100, "brown") {}

    Door(int size, int width, string color) : Door (190, 100, "brown", true) {}

    Door(int size, int width, string color, bool is_open) {
    
        SetColor(color);
        SetWidth(width);
        SetSize(size);
        SetHandleColor(handle_color);
        SetHandle(handle);
        SetKhColor(kh_color);
        SetWalls(walls);
        SetType(type);
    }

    void Open();
    void Close();
    void Closing(string key);
    void Opening(string key);
    void SetHandle(int handle);
    int GetHandle() const;
    void SetWidth(int width);
    int GetWidth() const;
    void SetSize(int size);
    int GetSize() const;
    void SetColor(string color);
    string GetColor() const;
    void SetKhColor(string kh_color);
    string GetKhColor() const;
    void SetHandleColor(string handle_color);
    string GetHandleColor() const;
    void SetWalls(int walls);
    int GetWalls() const;
    void SetType(string type);
    string GetType() const;
};

