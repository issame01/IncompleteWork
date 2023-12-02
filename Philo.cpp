#include "Philo.hpp"

Philo::Philo()
{
}

Philo::Philo(int philoId, int lFork, int rFork)
{
    this->_philoID = philoId;
    this->_lFork = lFork;
    this->_rFork = rFork;
}

Philo& Philo::operator=(const Philo& obj)
{
    this->_philoID = obj._philoID;
    this->_lFork = obj._lFork;
    this->_rFork = obj._rFork;
}

Philo::~Philo()
{
}

int Philo::get_philoId()
{
    return this->_philoID;
}

int Philo::get_lFork()
{
    return this->_lFork;
}

int Philo::get_rFork()
{
    return this->_rFork;
}

