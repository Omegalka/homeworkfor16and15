#include <iostream>
#include <windows.h>
using namespace std;

#include "mobile_phone.h"
#include "human.h"
#include "weights.h"
#include "door.h"
#include "room.h"

class Student {
private:
    string name;
    string surname;
    string fathname;
    string homeadress;
    string phone_number;

    int* hometask_rates = nullptr;
    int hometask_rates_count = 0;

    int* practask_rates = nullptr;
    int practask_rates_count = 0;

    int* examtask_rates = nullptr;
    int examtask_rates_count = 0;

public:

    void SetName(string name)
    {
        this->name = name;
    }
    string GetName() const
    {
        return name;
    }
    void SetSurname(string surname)
    {
        this->surname = surname;
    }
    string GetSurname() const
    {
        return surname;
    }
    void SetFathname(string fathname)
    {
        this->fathname = fathname;
    }
    string GetFathname() const
    {
        return fathname;
    }
    void SetHomeAdress(string homeadress)
    {
        this->homeadress = homeadress;
    }
    string GethomeAdress() const
    {
        return homeadress;
    }
    void SetPhoneNumber(string phone_number)
    {
        this->phone_number = phone_number;
    }
    string GetPhoneNumber() const
    {
        return phone_number;
    }
    Student()
    {
        SetName("Alexey");
        SetSurname("Kosmolenko");
        SetFathname("Denisovich");
        SetHomeAdress("Blicker street 325a");
        SetPhoneNumber("+1439430493049");
    }
    
    Student(string name) : Student("Alexey", "Kosmolenko","Denisovich","Blicker street 325a","+1 439 4930 49"){}

    Student(string name, string surname, string fathname, string home_adress, string phone_number) {
        SetName(name);
        SetSurname(surname);
        SetFathname(fathname);
        SetHomeAdress(home_adress);
        SetPhoneNumber(phone_number);
    }

    ~Student() {
        if (hometask_rates != nullptr)
        {
            delete[] hometask_rates;
            hometask_rates = nullptr;
        }
        if (practask_rates != nullptr)
        {
            delete[] practask_rates;
            practask_rates = nullptr;
        }
        if (examtask_rates != nullptr)
        {
            delete[] examtask_rates;
            examtask_rates = nullptr;
        }

    }
    void AddHometaskRate(int rate)
    {
        if (rate < 1 || rate > 12)
        {
            cout << "No\n";
            throw "error";
        }
        if (hometask_rates_count == 0)
        {
            hometask_rates = new int[1];
            hometask_rates[0] = rate;
        }
        else
        {
            int* temp = new int[hometask_rates_count + 1];
            for (int i = 0; i < hometask_rates_count; i++) {
                temp[i] = hometask_rates[i];
                temp[i + 1] = rate;
            }
            delete[] hometask_rates;
            hometask_rates = temp;
        }
        hometask_rates_count++;
    }
    int* GetHometaskRates() const
    {
        return hometask_rates;
    }
    int GetHometaskRatesCount() const
    {
        return hometask_rates_count;
    }
    void PrintHometaskRates()
    {
        for (int i = 0; i < hometask_rates_count; i++) {
            cout << i + 1 << hometask_rates[i] << "\n";
        }
    }
    void AddPractaskRate(int rate)
    {
        if (rate < 1 || rate > 12)
        {
            cout << "No\n";
            throw "error";
        }
        if (practask_rates_count == 0)
        {
            practask_rates = new int[1];
            practask_rates[0] = rate;
        }
        else
        {
            int* temp = new int[practask_rates_count + 1];
            for (int i = 0; i < practask_rates_count; i++) {
                temp[i] = practask_rates[i];
                temp[i + 1] = rate;
            }
            delete[] practask_rates;
            practask_rates = temp;
        }
        practask_rates_count++;
    }
    int* GetPractaskRates() const
    {
        return practask_rates;
    }
    int GetPractaskRatesCount() const
    {
        return practask_rates_count;
    }
    void PrintPractaskRates()
    {
        for (int i = 0; i < practask_rates_count; i++) {
            cout << i + 1 << practask_rates[i] << "\n";
        }
    }
    void AddExamtaskRate(int rate)
    {
        if (rate < 1 || rate > 12)
        {
            cout << "No\n";
            throw "error";
        }
        if (examtask_rates_count == 0)
        {
            examtask_rates = new int[1];
            examtask_rates[0] = rate;
        }
        else
        {
            int* temp = new int[examtask_rates_count + 1];
            for (int i = 0; i < examtask_rates_count; i++) {
                temp[i] = examtask_rates[i];
                temp[i + 1] = rate;
            }
            delete[] examtask_rates;
            examtask_rates = temp;
        }
        examtask_rates_count++;
    }
    int* GetExamtaskRates() const
    {
        return examtask_rates;
    }
    int GetExamtaskRatesCount() const
    {
        return examtask_rates_count;
    }
    void PrintExamtaskRates()
    {
        for (int i = 0; i < examtask_rates_count; i++) {
            cout << i + 1 << examtask_rates[i] << "\n";
        }
    }
};
class DateTime
{
private:
    int day;
    int month;

public:
    void SetDay(int day)
    {
        if (day >= 1 && day <= 31)
        {
            this->day = day;
        }
        else
        {
            cout << "No\n";
        }
    }
    int GetDay() const
    {
        return day;
    }
    void SetMonth(int month)
    {
        if (month >= 1 && month <= 12)
        {
            this->month = month;
        }
        else
        {
            cout << "No\n";
        }
    }
    int GetMonth() const
    {
        return month;
    }
    DateTime(int day) : DateTime(day, month){}

    DateTime(int day, int month) {
        SetDay(day);
        SetMonth(month);
    }
    
};

int main()
{
    Human a;
    Human b(192, 2);
}




