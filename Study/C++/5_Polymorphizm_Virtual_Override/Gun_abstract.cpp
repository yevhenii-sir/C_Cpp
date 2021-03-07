#include <iostream>

class Weapon {
public:
    virtual void Shoot() = 0;
};

class Gun : public Weapon{
public:
    void Shoot() override
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

class Bazooka : public Weapon {
public:
    void Shoot() override
    {
        std::cout << "BADABOOOM!" << std::endl;
    }
};

class Knife : public Weapon {
public:
    void Shoot() override
    {
        std::cout << "VZHUH!" << std::endl;
    }
};

class Player {
public:
    void Shoot(Weapon* weapon)
    {
        weapon->Shoot();
    }
};

int main()
{
    Gun gun;
    SubmachineGun submachGun;
    Bazooka bazooGun;
    Knife knife;
    Player player;

    player.Shoot(&gun);
    player.Shoot(&submachGun);
    player.Shoot(&bazooGun);
    player.Shoot(&knife);
}
