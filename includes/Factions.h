#include <string>


class Faction {
    public:
    Faction(string Name);
    int Affinity;
    bool Eliminated;
    private:
    enum Tech_Level { L1, L2, L3, L4 }; /*{Regular Weapons, Laser Weapons, Power Armor, Plasma Weapons}*/
    string FactionName;
    
};

Faction::Faction( string Name ) {
    FactionName=Name;

}
