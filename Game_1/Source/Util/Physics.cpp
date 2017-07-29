#include "Physics.h"
#include "SFML/System.hpp"

namespace Physics
{
    Collision::Collision()
    {

    }

    bool Collision::CheckForColl()
    {
        ///Needs to check if to objects interlap
    }

    bool Collision::DirColl()
    {
        ///State machine for determining from witch direction collided
    }

    void Collision::ResColl()
    {
        ///Needs to resolve collision: move objects that they would not interlap, etc...
    }


    Movement::Movement()
    {

    }

    void Movement::Move()
    {
        ///Firstly checks where he is ordered to go, by checking what keys where pressed, which he get from whomever call it
        ///needs to check if nothing is in your way
        ///then move the sprite over the speed multiplied over the time it was since the las update
        ///All that need an object

    }

    void Movement::Dash()
    {
        ///Like Move just reacts with the environment
        ///Maybe knocks enemies back, or goes throw them
        ///Maybe invulnerable or just with reduced damaged taken
    }



    Action::Action()
    {
        ///for specific action like attack
    }

    void Action::Attack()
    {
        ///Needs direction and type, amount of damage
        ///to check if player hits something and then subtract the hp of the enemy
        ///and terminate if reached 0 hp
        ///i guess should work with NPC and player
    }

    Visibility::Visibility()
    {
        ///If we will add sneaking and hiding + invisibility
    }
}
