#include "Begin.hpp"

Begin::Begin()
{
}

Begin::Begin(int thread_num, int time_die, int time_eat, int time_slp)
{
    this->_thread_num = thread_num;
    this->_time_die = time_die;
    this->_time_eat = time_eat;
    this->_time_slp = time_slp;
    this->_is_dead = false;
}

Begin::~Begin()
{
}

int Begin::get_threadNum()
{
    return this->_thread_num;
}
int  Begin::get_time_die()
{
    return this->_time_die;
}
int Begin::get_time_eat()
{
    return this->_time_eat;
}
int  Begin::get_time_slp()
{
    return this->_time_slp;
}
bool  Begin::get_is_dead()
{
    return this->_is_dead;
}

void Begin::createMutex()
{
    this->_fork = new std::mutex[this->_thread_num];
}
