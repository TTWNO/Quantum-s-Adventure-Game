#include <iostream>

using namespace std;

class PlayerName{
    string pname;

public:
    PlayerName()
    {
        pname = "Player's Name Here";
    }

    void SetName(string p)
    {
        pname = p;
    }

    string GetName()
    {
        return pname;
    }
};

class PlayerRace{
    string prace;

public:
    PlayerRace()
    {
        prace = "elf", "Elf", "human", "Human", "dwarf", "Dwarf";
    }

    void SetRace (string race)
    {
        prace = race;
    }

    string GetRace()
    {
        return prace;
    }
};

class PlayerAge{
    int page;

public:
    PlayerAge()
    {
        page = 0;
    }

    void SetAge(int age)
    {
        page = age;
    }

    int GetAge()
    {
        return page;
    }
};

class PlayerProfession{
    string pprofession;

public:
    PlayerProfession()
    {
        pprofession = "Player's Profession Here";
    }

    void SetProfession(string profession)
    {
        pprofession = profession;
    }

    string GetProfession ()
    {
        return pprofession;
    }
};

class PlayerWeapon{
    string pweapon;

public:
    PlayerWeapon()
    {
        pweapon = "longsword", "dagger", "staff";
    }

    if (pprofession = "Warrior", "warrior"){

    }
};

int main()
{
    string pname;
    string prace;
    int page;
    string pprofession;

    cout << "Welcome, adventurer! Please enter your name.\n" << endl;
    cin >> pname;

    cout << "It is good to meet you " << pname << "! Now, please tell me if you are an elf, human, or dwarf.\n" << endl;
    cin >> prace;

    cout << "I see you are " << prace << ". Please tell me your age in whole numbers.\n" << endl;
    cin >> page;

    cout << "Thanks for telling me that you are " << page << ". Hopefully I'm not being too nosy by asking! Now, one last thing. What is your profession? Are you a mage, warrior, or thief?\n" << endl;
    cin >> pprofession;

    cout << "I am glad to have you here, " << pprofession << "! You are in luck because we have lots of work for a " << pprofession << " right now." << endl;

    return 0;
}
