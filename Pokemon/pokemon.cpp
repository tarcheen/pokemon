/* 
Developer: Hamed Mirlohi
Date: Aug 21th 2019
Pokemon Battle Application
 */

#include <iostream>
#include <stdlib.h>

class Pokemon
{

    protected:

    u_int16_t _life;

    public:

        Pokemon(u_int16_t start_range = 50, u_int16_t end_range = 100)
        {
            this->_life = generate_random(start_range, end_range);
        }

        virtual ~Pokemon()
        {
        }

        // generates random number between numbers provided
        u_int16_t generate_random(const u_int16_t& start_range,const u_int16_t& end_range) const
        {
            return ( rand() % (end_range - start_range) ) + start_range;
        }

};

class Pikachu : public Pokemon
{
    public:

        Pikachu() : Pokemon()
        {   
        }

        virtual ~Pikachu()
        {
        }

        u_int16_t get_life() const
        {
            return this->_life;
        }

};


class Squirtle : public Pokemon
{
    public:

        Squirtle() : Pokemon(70,100)
        {
        }

        virtual ~Squirtle()
        {
        }
};

int main(void)
{
    
}