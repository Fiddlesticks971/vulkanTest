#include <vulkan/vulkan.h>
#include <iostream>
#include <stdexcept>
#include <functional>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

const int HEIGHT = 600;
const int WIDTH = 800;

class HelloTriangleApplication {
public:
  void run() {
    initWindow();
    initVulkan();
    mainLoop();
    cleanUp();
  }
private:
  void initWindow(){
    if(!glfwInit())
      std::cout<<"glfw Init failed\n";
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);
    window = glfwCreateWindow(WIDTH,HEIGHT,"Triangle",nullptr,nullptr);
    if(!window)
      std::cout<<"window failed\n";
    
  }
  void initVulkan() {
  }
  void mainLoop() {
    while(!glfwWindowShouldClose(window)) {
      glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
  }
  void cleanUp(){
  }
  
  GLFWwindow* window;
  
};

int main() {
  HelloTriangleApplication app;
  try{
    app.run();
  }
  catch(const std::runtime_error& e) {
    std::cerr << e.what() << std::endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
