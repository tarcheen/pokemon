/* 
Developer: Hamed Mirlohi
Date: Aug 21th 2019
Pokemon Battle Application
 */

#include <iostream>
#include <stdlib.h>

enum STATUS
{
    DOUBLE = 2,
    ESCAPE,
};


class Pokemon
{

    protected:

        int   _life;
        bool  _dead;

    public:

        Pokemon(u_int16_t start_range = 50, u_int16_t end_range = 100)
        {
            this->_life = generate_random(start_range, end_range);
            this->_dead = false;
        }

        virtual ~Pokemon()
        {
        }

        virtual bool isDead() const
        {
           return ( this->_life <= 0 ) ? true :  false;
        }

        virtual u_int16_t attack() = 0;
        virtual void damage(u_int16_t) = 0;

        // generates random number between numbers provided
        u_int16_t generate_random(const u_int16_t& start_range, const u_int16_t& end_range) const
        {
            return ( rand() % (end_range - start_range) ) + start_range;
        }

        int get_life() const
        {
            return this-> _life;
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

        u_int16_t attack() override
        {

            if(generate_random(1,5) == DOUBLE)
            {
                std::cout<< "Double Activated" << std::endl;
                return generate_random(25,40) * 2;
            }
            else
                return generate_random(25,40);    
        }

        virtual void damage(u_int16_t attacked) override
        {
        
            if(generate_random(1,4) == ESCAPE)
            {
                std::cout << "Attack Dodged" << std::endl;
            }
            else
            {
                this->_life -= attacked;
                if(_life < 0)
                    this->_dead = true;  
            }
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

        u_int16_t attack() override
        {
            return generate_random(25,40);
        }

        void damage(u_int16_t attacked) override
        {
            this->_life -= attacked;
            if(_life < 0)
                    this->_dead = true;
        }
};

int main(void)
{
    srand(time(NULL));
}