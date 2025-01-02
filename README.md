# C++ Race Condition Example

This repository demonstrates a race condition that can occur when modifying a `std::vector` in C++ while iterating over it concurrently from another thread. Accessing elements of the vector during concurrent modification can lead to undefined behavior.  The solution illustrates safe approaches using thread safety mechanisms such as mutexes.

## Bug Description

The bug involves directly iterating over a vector that is being modified by another thread simultaneously. This can lead to issues like accessing invalid memory addresses or missing updates because the vector's internal data structure is modified during the iteration.