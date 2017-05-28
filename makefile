C_FLAGS = -std=c++11
L_FLAGS = -g -lglfw -lvulkan

main:  vulkanTest.cpp
	echo "Making Hello World File"
	g++ $(C_FLAGS) vulkanTest.cpp -o vulkanTest $(L_FLAGS)

triangle: triangle.cpp
	echo "Making the Triangle"
	g++ $(C_FLAGS) triangle.cpp -o triangle $(L_FLAGS)

clean:
	rm vulkanTest
	echo "Now Clean"
