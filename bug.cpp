std::vector<int> vec; 

// ... some code that modifies vec ...

for (int i = 0; i < vec.size(); ++i) {
  // Accessing vec[i] here.  This could cause an error if vec.size() changes in another thread.
}