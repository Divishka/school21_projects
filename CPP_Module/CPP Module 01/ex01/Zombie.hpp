#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <fstream>

class Zombie {

private:

    std::string m_name;

public:

    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void        announce( void );
    void        setName(std::string name);

};

Zombie* zombieHorde( int N, std::string name );

#endif