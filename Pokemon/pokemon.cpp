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

    u_int16_t _life;

    public:

        Pokemon(u_int16_t start_range = 50, u_int16_t end_range = 100)
        {
            this->_life = generate_random(start_range, end_range);
        }

        virtual ~Pokemon()
        {
        }

        virtual u_int16_t attack() = 0;
        virtual void damage(u_int16_t) = 0;

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

        u_int16_t attack() override
        {
            u_int8_t tmp = generate_random(1,5);

            if(tmp == DOUBLE)
                return generate_random(25,40) * 2;
            else
                return generate_random(25,40);    
        }

        virtual void damage(u_int16_t attacked) override
        {
            u_int8_t tmp = generate_random(1,4);

            if(tmp == ESCAPE)
                return;
            else
                this->_life -= attacked;
            
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

        u_int16_t attack() override
        {
            return generate_random(25,40);
        }

        virtual void damage(u_int16_t attacked) override
        {
            this->_life -= attacked;
        }
};

int main(void)
{

}