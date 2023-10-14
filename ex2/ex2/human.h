#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class Human
{
private:
    int height = 192;  // *  (* - есть сэттер и гэттер)
    int ears = 2; // *
    double weight = 65.3; // *
    string name = "Jonathan"; // *
    string eyes_color = "green"; // *
    string noize = "knock"; // *
    int eye = 2; //*
    bool eye_open = false; // *

public:

    Human() : Human(192, 2) {}

    Human(int height, int ears) : Human (height, ears, "Jonathan") {}

    Human(int height, int ears, string name) : Human (height, ears, name, true) {}   

    Human(int height, int ears, string name, bool open) {
        SetEyes(eye);
        SetHeight(height);
        SetEars(ears);
        SetWeight(weight);
        SetName(name);
        SetEyesColor(eyes_color);
        SetEyeOpen(eye_open);
    }

    void MakeNoize(string noize);
    void Eat(string meal);
    void Hobby(string entertainment);
    void Feel();
    void Sleep();
    void Wakeup();
    void OpeningDoor();
    void SetEyes(int eye);
    int GetEyes() const;
    void SetHeight(int height);
    int GetHeight() const;
    void SetEars(int ears);
    int GetEars() const;
    void SetWeight(double weight);
    double GetWeight() const;
    void SetName(string name);
    string GetName() const;
    void SetEyesColor(string eyes_color);
    string GetEyesColor() const;
    void SetEyeOpen(bool eye_open);
    bool GetEyeOpen() const;
    void SetNoize(string noize);
    string GetNoize() const;
};


