#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class pos
{
public:
    pos() {
    };
    ~pos() {
    };
    int changePos(int k, int y, int z) {
    };
private:
    int x;
    int y;
    int z;
};

class object
{
public:
    object() {
    };
    ~object() {
    };
    pos p;
    int uid;
private:

};

class actor : object
{
public:
    actor() {
    };
    ~actor() {
    };
private:

};

class player : object
{
public:
    player() {
    };
    ~player() {
    };
    int connect();
    int disconnect();
    keyboard_class keyboard;
private:

};

class keyboard_class
{
public:
    keyboard_class() {
    };
    ~keyboard_class() {
    };
    get_keystate();
private:

};

class dungeon : object
{
public:
    dungeon() {
    };
    ~dungeon() {
    };
    add_dungeon(dungeon x);
private:

};

///Programming system
struct assignments
{

};

class behavior
{
public:
    behavior() {
    };
    ~behavior() {
    };
    string name;
};

///Scripting system (parser)
class script
{
    vector<string> lines;
};

class scriptParser
{
public:
    scriptParser() {
    };
    ~scriptParser() {
    };
private:

};


class item : object
{
public:
    item() {
    };
    ~item() {
    };

private:

};

class gamemode
{
public:
    gamemode() {

    };
    ~gamemode() {

    };
    vector<object> obj;
private:

};

///Particle system
class particle : object
{
public:
    particle() {

    };
    ~particle() {

    };
private:

};

class particleFactory
{
public:
    particleFactory() {
    };
    ~particleFactory() {
    };
    vector<particle> v;
private:

};

int main()
{
    player pOne;
    return 0;
}
