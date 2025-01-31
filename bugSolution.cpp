int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) { 
    *ptr = 10; // Dereferencing only if ptr is not null
  } else {
    // Handle the null pointer case appropriately
    std::cerr << "Error: Null pointer encountered." << std::endl;
  }
  return 0;
}