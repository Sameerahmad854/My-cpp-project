#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
using namespace std;
using namespace std::chrono;

class Stopwatch
{
private:
          bool running;
          time_point<steady_clock> start_time;
          duration<double> elapsed;

public:
          Stopwatch() : running(false), elapsed(0) {}

          void start()
          {
                    if (!running)
                    {
                              running = true;
                              start_time = steady_clock::now();
                              cout << "Stopwatch started.\n";
                    }
                    else
                    {
                              cout << "Stopwatch already running!\n";
                    }
          }

          void stop()
          {
                    if (running)
                    {
                              elapsed += steady_clock::now() - start_time;
                              running = false;
                              cout << "Stopwatch stopped.\n";
                    }
                    else
                    {
                              cout << "Stopwatch is not running!\n";
                    }
          }

          void reset()
          {
                    running = false;
                    elapsed = duration<double>::zero();
                    cout << "Stopwatch reset.\n";
          }

          void showTime()
          {
                    cout << fixed << setprecision(2); 
                    if (running)
                    {
                              auto current = elapsed + (steady_clock::now() - start_time);
                              cout << "Elapsed time: " << current.count() << " seconds\n";
                    }
                    else
                    {
                              cout << "Elapsed time: " << elapsed.count() << " seconds\n";
                    }
          }

          void countdown(int seconds)
          {
                    if (seconds <= 0)
                    {
                              cout << "Enter a positive number!\n";
                              return;
                    }

                    cout << "Countdown timer started for " << seconds << " seconds..\n";
                    for (int i = seconds; i > 0; --i)
                    {
                              cout << i << "..." << flush;
                              this_thread::sleep_for(1s);
                    }
                    cout << "\nTime's up!\n";
          }
};

int main()
{
          Stopwatch watch;
          int choice;

          while (true)
          {
                    cout << "\n======Stopwatch/Timer Menu======\n";
                    cout << "1. Start stopwatch\n";
                    cout << "2. Stop stopwatch\n";
                    cout << "3. Reset stopwatch\n";
                    cout << "4. Show elapsed time\n";
                    cout << "5. Countdown time\n";
                    cout << "6. Exit\n";
                    cout << "Enter your choice: ";
                    cin >> choice;

                    switch (choice)
                    {
                    case 1:
                              watch.start();
                              break;
                    case 2:
                              watch.stop();
                              break;
                    case 3:
                              watch.reset();
                              break;
                    case 4:
                              watch.showTime();
                              break;
                    case 5:
                    {
                              int sec;
                              cout << "Enter countdown seconds: ";
                              cin >> sec;
                              watch.countdown(sec);
                              break;
                    }
                    case 6:
                              cout << "Goodbye!\n";
                              return 0;
                    default:
                              cout << "Invalid choice! Try again.\n";
                              break;
                    }
          }

          return 0;
}
