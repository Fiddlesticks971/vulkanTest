#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>

int main() {
  if(!glfwInit()){
    std::cout<<"glfw failed wrong display envirioment\n";
    return -1;
  }
 
  glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
  GLFWwindow* window = glfwCreateWindow(800, 600, "Vulkan window",nullptr,nullptr);
  if(!window){
    std::cout<<"window failed\n";
    return -1;
  }
  
  uint32_t extensionCount = 0;
  vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount,nullptr);
  std::cout << extensionCount << " extensions supported" << std::endl;

  glm::mat4 matrix;
  glm::vec4 vec;
  auto test = matrix * vec;
  
  while(!glfwWindowShouldClose(window)) {
    glfwPollEvents();
  }
  
  glfwDestroyWindow(window);
  glfwTerminate();
   
  return 0;
}
