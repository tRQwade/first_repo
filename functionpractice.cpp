#include <iostream>

void it_support (std::string client_name, std::string model_name, std::string error_code) {
  std::cout << "Hello " << client_name << ", I'm so glad you called us. Lucky for you I was even in the office today. Many users of the " << model_name << " have been experiencing similar issues. We actually specialize in repairing the " << model_name << " with Error code: " << error_code << ". No one else in the area will even touch it. By all means call them if you'd like, but you'd be wasting precious time. I'll get you ship shape in no time. Can I just quickly get a credit card on file so that we could get this repair started?\n";
}



int main() {

  std::string my_name;
  std::string device_name;
  std::string error_numbers;

  std::cout << "Good day, please tell me your name, the name of your affected device, and its error code.\n";
  std::cout << "First, enter your name, please.\n";
  std::getline(std::cin, my_name);
  std::cout << "Thank you, now the name of your affected device, please.\n";
  std::getline(std::cin, device_name);
  std::cout << "Excellent, and what is the five digit numerical code showing on the screen?\n";
  std::getline(std::cin, error_numbers);
  std::cout << "Thank you for this information. This looks like an issue I need to escalate directly to my supervisor. Hold please... ...\n";

  it_support(my_name, device_name, error_numbers);

  
}