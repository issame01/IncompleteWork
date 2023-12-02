#ifndef PHILO_HPP
#define PHILO_HPP

#include "Begin.hpp"

class Philo
{
    private:
        int _philoID;
        int _lFork;
        int _rFork;
        std::mutex _mealMutex;
    public:
        Philo();
        Philo(int philoId, int lFork, int rFork);
        Philo& operator=(const Philo& obj);
        ~Philo();
    int get_philoId();
    int get_lFork();
    int get_rFork();
};

#endif