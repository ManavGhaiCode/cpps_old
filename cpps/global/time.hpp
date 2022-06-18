#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include <functional>

class Time {
    private:
        void setTimeout(std::function<void(Time)> func, unsigned int interval, Time timeObj)
        {
            std::thread([func, interval, timeObj]()
            { 
                while (true)
                {
                    auto x = std::chrono::steady_clock::now() + std::chrono::milliseconds(interval);
                    func(timeObj);
                    std::this_thread::sleep_until(x);
                }
            }).detach();
        }

    public:
        std::string time;

        Time() {
            this->time = "";
            this->setTimeout([](Time time) -> Time {
                std::time_t t = std::time(0);
                std::tm *now = std::localtime(&t);

                time.time += (now->tm_mon + 1) + " ";
                time.time += (now->tm_mday) + " ";
                time.time += (now->tm_hour) + ":";
                time.time += (now->tm_min) + ":";
                time.time += (now->tm_sec);
            }, 1000, *this);
        }
        
        ~Time() {};

        std::string now() {
            return time;
        }
};