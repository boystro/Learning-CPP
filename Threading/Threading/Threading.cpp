/*
The following code will keep printing stuff unless enter is pressed
*/
#include <iostream>
#include <thread>

bool finished = false;

void work()
{
	using namespace std::literals::chrono_literals;

	while (!finished)
	{
		std::cout << "Waiting. . .\n";
		std::this_thread::sleep_for(1s);
	}
	std::cout << "Finished. . ." << std::endl;
}


int main()
{
	std::thread worker(work);

	std::cin.get();
	finished = true;

	worker.join();
}