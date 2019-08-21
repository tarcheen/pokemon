/* 
Developer: Hamed Mirlohi
Date: Aug 21th 2019
Pokemon Battle Application
 */

#include <iostream>
#include <stdlib.h>

// generates random number between numbers provided
u_int16_t generate_random(const u_int16_t& start_range,const u_int16_t& end_range)
{
    return ( rand() % (end_range-start_range) ) + start_range; 
}


class Pokemon
{
    u_int16_t _life;

    public:
        Pokemon()
        {
        }

        virtual ~Pokemon()
        {
        }

};


int main(void)
{
    
}