#include "Begin.hpp"
#include "Philo.hpp"
#include <thread>

std::mutex proMutex;

void programmerCicle(std::string proName, Philo philos)
{
	if (philos.get_philoId() % 2 == 0)
		std::this_thread::sleep_for(std::chrono::seconds(1));
    while(true)
    {
        std::unique_lock<std::mutex> proLock(proMutex);
    	std::cout << proName << philos.get_philoId() << " is studying..." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(2));
    	proLock.unlock();
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << proName << philos.get_philoId() << " is sleeping..." << std::endl;
    }
}


int main(int ac, char **av)
{
	int numThread;
	if (ac != 5)
	{
		std::cout << "not valid args" << std::endl;
		return (0);
	}
	//create Data obj that contains argvs
    Begin communObj(atoi(av[1]), atoi(av[2]), atoi(av[3]), atoi(av[3]));
	numThread = communObj.get_threadNum();

	//create forks with the number of threads(philos)
	communObj.createMutex();

	//create an array of objects from class Philo
	Philo philos[numThread];
	for (int i = 0; i < numThread; i++)
		philos[i] = Philo(i+1, 1, (i + 1) % numThread);
	std::thread t1[numThread];
    for (int i = 0; i < numThread; i++)
		t1[i] = std::thread(programmerCicle, "Thread", philos[i]);
	for (int i = 0; i < numThread; i++)
        t1[i].join();
}