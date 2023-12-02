#ifndef BEGIN_HPP
#define BEGIN_HPP

#include <iostream>
#include <thread>
#include <mutex>
#include <string>
#include <cstdlib>

class Begin
{
    private:
        int _thread_num;
        int _time_die;
        int _time_eat;
        int _time_slp;
        bool _is_dead;
        std::mutex *_fork;
    public:
        Begin();
        Begin(int _thread_num, int _time_die, int _time_eat, int _time_slp);
        ~Begin();
    int get_threadNum();
    int get_time_die();
    int get_time_eat();
    int get_time_slp();
    bool get_is_dead();
    void createMutex();
    // void printinfo()
    // {
    //     std::cout << _thread_num << std::endl;
    //     std::cout << _stdy_time << std::endl;
    //     std::cout << _slp_time << std::endl;
    // }
};
    // void proCicle(std::string name);

#endif