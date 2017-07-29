#ifndef GAME_OBJECT_H_INCLUDED
#define GAME_OBJECT_H_INCLUDED


namespace GameObject
{
    enum GameObjType
    {
        emptyObj = 0,
        slime = 1
    };
    class GameObject
    {
    public:
        gameobject();


    private:
        GameObjType objectType;
        sf
    };
}

#endif // GAME_OBJECT_H_INCLUDED
