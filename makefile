C_FLAGS = -std=c++14
L_FLAGS = -g -lglfw -lvulkan

main:  vulkanTest.cpp
	g++ $(C_FLAGS) vulkanTest.cpp -o vulkanTest $(L_FLAGS)

triangle: triangle.cpp 
	g++ $(C_FLAGS) triangle.cpp -o triangle $(L_FLAGS)

clean:
	rm vulkanTest
	rm triangle
	rm VDeleter
