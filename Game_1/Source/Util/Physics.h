#ifndef PHYSICS_H_INCLUDED
#define PHYSICS_H_INCLUDED
#include "SFML/System.hpp"

class Collision
{
public:
    Collision();
    bool CheckForColl();
    bool DirColl();
    void ResColl();

private:

};

class Movement
{
public:
    Movement();
    void Move();
    void Dash();
    ///At some point we can add sneak

private:

};

class Action
{
public:
    Action();
    void Attack();

private:

};
class Visibility
{
public:
    Visibility();

private:

};



#endif // PHYSICS_H_INCLUDED
