#include <iostream>

class Gun {
public:
    virtual void Shoot()
    {
        std::cout << "BANG!" << std::endl;
    }
};

class SubmachineGun : public Gun {
public:
    void Shoot() override
    {
        std::cout << "BANG! BANG! BANG! BANG!" << std::endl;
    }
};

class Bazooka : public Gun {
public:
    void Shoot() override
    {
        std::cout << "BADABOOOM!" << std::endl;
    }
};

class Player {
public:
    void Shoot(Gun* gun)
    {
        gun->Shoot();
    }
};

int main()
{
    Gun gun;
    SubmachineGun submachGun;
    Bazooka bazooGun;
    Player player;

    player.Shoot(&gun);
    player.Shoot(&submachGun);
    player.Shoot(&bazooGun);
}
