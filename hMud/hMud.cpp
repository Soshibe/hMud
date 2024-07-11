#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class pos
{
public:
    pos() {
        x = 0;
        y = 0;
        z = 0;
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
        uid = 1337;
    };
    object(int id) {
        uid = id;
    };
    ~object() {
    };
    pos p;
    int uid;
private:

};

class objectFactory
{

};

class actor : object
{
public:
    actor() {
        uid = 1337;
    };
    actor(int id) {
        uid = id;
    };
    ~actor() {
    };
private:

};

class keyboard_class
{
public:
    keyboard_class() {
    };
    ~keyboard_class() {
    };
    void get_keystate();
private:

};

class player : object
{
public:
    player() {
        uid = 1337;
    };
    player(int id) {
        uid = id;
    };
    ~player() {
    };
    int connect();
    int disconnect();
    keyboard_class keyboard;
private:

};

class dungeon : object
{
public:
    dungeon(int id) {
        uid = id;
    };
    ~dungeon() {
    };
    void add_dungeon(dungeon x);
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
    player pOne(0);
    return 0;
}
