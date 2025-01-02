#include <vector>
#include <thread>
#include <mutex>

std::vector<int> vec;
std::mutex mtx; // Mutex for thread safety

void modifyVec() {
  for (int i = 0; i < 1000; ++i) {
    std::lock_guard<std::mutex> lock(mtx);
    vec.push_back(i);
  }
}

void iterateVec() {
  for (int i = 0; i < 1000; ++i) {
    std::lock_guard<std::mutex> lock(mtx); 
    for (size_t j = 0; j < vec.size(); ++j) {
       // Access vec[j] safely here
    }
  }
}

int main() {
  std::thread t1(modifyVec);
  std::thread t2(iterateVec);
  t1.join();
  t2.join();
  return 0;
}
