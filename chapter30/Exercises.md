# Exercises

### 1. What would happen to the worker thread if the main thread didn´t use **join()**?

```
#include<thread>
#include<stop_token>
#include<iostream>

using namespace std;

void ThreadFunction(std::stop_token stopSoon)
{
  while(true)
  {
    cout << "Worker thread Hello: " << endl;
    std::this_thread::sleep_for(1s);
    if(stopSoon.stop_requested())
    {
      cout << "Worker thread: asked to end, bye" << endl;
      break;
    }
  }
}

int main()
{
  cout << "Main thread: Starting a worker thread!" << endl;

  jthread thSayHello(ThreadFunction);

  this_thread::sleep_for(5s);

  cout << "Main thread: Sending a stop request to worker" << endl;
  thSayHello.request_stop();

  if(thSayHello.joinable())
  {
    cout << "Main thread: waiting on working to end!" << endl;
    thSayHello.join();
    cout << "Main thread: wait has ended. Exiting now" << endl;
  }
  return 0;
}

```

### Answer:
```
The main thread will finish and the worker will still be alive:

Worker thread Hello: 
Worker thread Hello: 
Worker thread Hello: 
Worker thread Hello: 
Main thread: Sending a stop request to worker
Main thread: waiting on working to end!
Main thread: wait has ended. Exiting now
Worker thread: asked to end, bye

```
