#include <iostream>
using namespace std;

#define HAROMSZOG_DB 2

struct koord
{
    int x, y;
};

#define PONTOK_DB 3

struct haromszog
{
    koord pontok[PONTOK_DB];
};

void feltolt(haromszog *pontok)
{
    cout << "Adja meg a haromszog pontjainak koordinatait: \n";
    for (int i = 0; i < PONTOK_DB; i++)
    {
        cout << i + 1 << ". pont koordinatai: ";
        cin >> pontok->pontok[i].x >> pontok->pontok[i].y;
    }
};

void nyomtat(const haromszog *object)
{
    cout << "A haromszog pontjai: \n";
    for (int i = 0; i < PONTOK_DB; i++)
    {
        cout << i + 1 << ". pont: " << object->pontok[i].x << '\t' << object->pontok[i].y << endl;
    }
};

int main()
{
    haromszog object;
    feltolt(&object);
    nyomtat(&object);
    haromszog objects[HAROMSZOG_DB];
    cout << "\n\nAdjon meg további " << HAROMSZOG_DB << ". darabot!\n";
    for (int i = 0; i < HAROMSZOG_DB; i++)
    {
        cout << endl
             << i + 1 << ". haromszog adatai.\n\n";
        feltolt(&objects[i]);
    }
    for (int i = 0; i < HAROMSZOG_DB; i++)
    {
        cout << i + 1 << ". haromszog pontjai: \n\n";
        nyomtat(objects + i);
        /*for (int j = 0; j < PONTOK_DB; j++)
        {
            cout << "a pont: " << objects[i].pontok[j].x << '\t' << objects[i].pontok[j].y << endl;
        } */
    }
    return 0;
}